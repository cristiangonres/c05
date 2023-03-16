/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:20:56 by cristian          #+#    #+#             */
/*   Updated: 2023/02/19 19:29:46 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	n = nb;
	while (n != 1)
	{
		n--;
		nb *= n;
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
}*/
