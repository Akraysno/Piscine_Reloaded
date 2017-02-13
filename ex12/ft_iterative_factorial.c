/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:21:03 by gauffret          #+#    #+#             */
/*   Updated: 2016/11/03 10:18:58 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}
