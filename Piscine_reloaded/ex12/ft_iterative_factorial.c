/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanouji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:00:25 by mzanouji          #+#    #+#             */
/*   Updated: 2018/11/07 16:15:13 by mzanouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int m;

	m = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		while (nb > 1)
		{
			m = m * (nb - 1);
			nb = nb - 1;
		}
		return (m);
	}
	return (0);
}
