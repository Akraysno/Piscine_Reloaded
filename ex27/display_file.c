/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:37:34 by gauffret          #+#    #+#             */
/*   Updated: 2016/11/04 10:57:28 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUFSIZE + 1];

	if (ac == 1)
		ft_putstr(2, "File name missing.\n");
	if (ac > 2)
		ft_putstr(2, "Too many arguments.\n");
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while ((ret = read(fd, buf, BUFSIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(1, buf);
		}
		close(fd);
	}
	return (0);
}
