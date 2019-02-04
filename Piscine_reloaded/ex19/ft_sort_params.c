/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanouji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:47:11 by mzanouji          #+#    #+#             */
/*   Updated: 2018/11/08 12:37:10 by mzanouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		if (s1[i++] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}

int		ft_print(int argc, char **argv)
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

int		main(int argc, char **argv)
{
	char	*tmp;
	int		j;
	int		curseur;

	curseur = 2;
	j = 1;
	if (argc > 1)
	{
		while (j < argc && argc != 2)
		{
			while (curseur < argc)
			{
				if (ft_strcmp(argv[j], argv[curseur]) > 0)
				{
					tmp = argv[j];
					argv[j] = argv[curseur];
					argv[curseur] = tmp;
				}
				curseur++;
			}
			j++;
			curseur = j + 1;
		}
		ft_print(argc, argv);
	}
}
