#include "main.h"

/**
 * appends_texts_to_file - Append the texts at the end of the files.
 * @filename: A pointers to the names of the files.
 * @text_content: The strings to add to the end of the files.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist a user lack to  write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
