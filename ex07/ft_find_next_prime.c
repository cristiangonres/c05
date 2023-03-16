/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:28:59 by cristian          #+#    #+#             */
/*   Updated: 2023/02/20 19:49:44 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < i)
		return (0);
	while (i * i < nb && i > 0)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (nb == 2147483647)
			return (2147483647);
		if (nb <= 2)
			return (2);
		if (ft_is_prime(nb) && nb != 4)
		{
			return (nb);
		}
		nb++;
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_find_next_prime(6));
}*/
