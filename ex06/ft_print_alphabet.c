/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:29:38 by gauffret          #+#    #+#             */
/*   Updated: 2016/11/02 15:03:37 by gauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	c = 'a';
	i = 1;
	while (i <= 26)
	{
		i++;
		ft_putchar(c);
		c++;
	}
}