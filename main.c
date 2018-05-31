#include "libft/libft.h"
#include "get_next_line.h"

int main(int ac, char **av)
{
	int i;
	int fd;
	int fd2;
	char *line;

	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	i = 0;
	while (get_next_line(fd, &line))
	{
		ft_putendl(line);
		ft_strdel(&line);
		if (get_next_line(fd2, &line))
		{
			ft_putendl(line);
			ft_strdel(&line);
		}
		i++;
	}
	return (0);
}
