#include <stdio.h>
#include "get_next_line.h"

int		main(int ac, char **av)
{
	int	fd;
 	char *line;
 	int ret;

	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
	}
	return (0);
}
