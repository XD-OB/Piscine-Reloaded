/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:21:14 by obelouch          #+#    #+#             */
/*   Updated: 2018/10/03 17:29:58 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		f;

	if (nb < 0 || nb > 12)
		return (0);
	f = 1;
	while (nb > 0)
	{
		f *= nb;
		nb--;
	}
	return (f);
}
