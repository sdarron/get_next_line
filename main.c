#include "get_next_line.c"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *line;

	fd = 0;
	fd = open("kobb.txt", O_RDONLY);
	
	while(get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	return (0);
}