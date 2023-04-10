#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: name of file
 * @text_content: content to add
 *
 * Return: 1 if exist | -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int mletters;
	int rwr;

	if (!filename)
		return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (mletters = 0; text_content[mletters]; mletters++)
			;

		rwr = write(fd, text_content, mletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

