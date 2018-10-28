/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 23:32:17 by obelouch          #+#    #+#             */
/*   Updated: 2018/10/04 00:02:40 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

#define LENGTH	100

int		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		out;
	int		fd;
	char	buffer[LENGTH + 1];

	if (ac == 1)
		ft_putstr("File name missing.\n");
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	if (ac == 1 || ac > 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (0);
	out = 1;
	while (out != 0)
	{
		out = read(fd, buffer, LENGTH);
		buffer[out] = '\0';
		ft_putstr(buffer);
	}
	close(fd);
	return (0);
}
