#include "main.h"

/**
 * create_file - this creates a desired file
 * @filename: filename.
 * @text_content: content is written in the file.
 *
 * Return: Retruns 1 for success, -1 for failure 
 */

int create_file(const char *filename, char *text_content)
{
	int fn;
	int xletters;
	int rwr;

	if (!filename)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (xletters = 0; text_content[xletters]; xletters++)
		;

	rwr = write(fn, text_content, xletters);

	if (rwr == -1)
		return (-1);

	close(fn);

	return (1);
}
