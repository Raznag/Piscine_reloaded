/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanouji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:34:05 by mzanouji          #+#    #+#             */
/*   Updated: 2018/11/08 13:27:57 by mzanouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	buf[4097];
	int		fd;
	int		octets;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc != 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (-1);
		octets = read(fd, buf, 4096);
		buf[octets] = '\0';
		octets = 0;
		while (buf[octets] != '\0')
		{
			ft_putchar(buf[octets]);
			octets++;
		}
		if (close(fd) == -1)
			return (-1);
	}
	return (0);
}
