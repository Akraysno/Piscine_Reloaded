/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:39:43 by gauffret          #+#    #+#             */
/*   Updated: 2016/11/04 10:19:23 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int curr;
	int	*tab;
	int diff;
	int i;

	curr = min;
	i = 0;
	if ((min == max) || (min > max))
		return (0);
	diff = max - min;
	tab = malloc(sizeof(int) * diff);
	while (curr < max)
	{
		tab[i] = curr;
		curr++;
		i++;
	}
	return (tab);
}
