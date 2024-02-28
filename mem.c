#include "main.h"

/**
 * parse_command - Parse the command string into tokens
 * @command: Command string to parse
 *
 * Return: Array of pointers to the token
 */
char **parse_command(char *command)
{
	char **tokens = malloc(sizeof(char *) * MAX_TOKENS);
	char *token;
	int i = 0;

	if (!tokens)
	{
		perror("Failed to allocate memory");
		return (NULL);
	}

	token = strtok(command, DELIMITER);

	while (token != NULL)
	{
		tokens[i++] = token;
		token = strtok(NULL, DELIMITER);
	}

	tokens[i] = NULL;
	return (tokens);
}

/**
 * free_tokens - Frees the memory allocated for the tokens array
 * @tokens: Array of pointers to the tokens
 */
void free_tokens(char **tokens)
{
	int i = 0;

	while (tokens[i] != NULL)
	{
		free(tokens[i]);
		i++;
	}
	free(tokens[i]);
}
