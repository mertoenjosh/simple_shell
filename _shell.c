#include "main.h"

/**
 * main - a simple UNIX shell
 *
 * Return: 0
 */

int main()
{
	char cmd[20];

	printf("$ ");
	while (scanf("%s", cmd))
	{
		printf("%s\n", cmd);
		system(cmd);
		printf("$ ");
	}

	return (0);
}
