/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:42:36 by gauffret          #+#    #+#             */
/*   Updated: 2016/11/04 10:58:02 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putstr(int chan, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(chan, str[i]);
		i++;
	}
}
