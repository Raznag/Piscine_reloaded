/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanouji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:32:15 by mzanouji          #+#    #+#             */
/*   Updated: 2018/11/07 17:41:57 by mzanouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (argc > 1 && j < argc)
	{
		while (argv[j][i] != '\0')
			ft_putchar(argv[j][i++]);
		ft_putchar('\n');
		j++;
		i = 0;
	}
	return (0);
}
