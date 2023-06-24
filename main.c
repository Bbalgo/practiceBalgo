#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char		*s;

	fd = open("text.txt", O_RDONLY);

	s = get_next_line(fd);
	printf("%s\n", s);
	free(s);

	close(fd);

	return 0;
}
