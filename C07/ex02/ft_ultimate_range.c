/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamourid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:50:21 by zamourid          #+#    #+#             */
/*   Updated: 2024/09/18 16:58:42 by zamourid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*r;
	int	size;

	i = 0;
	size = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	r = (int *) malloc(size * sizeof(int));
	if (r == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		r[i] = min;
		i++;
		min++;
	}
	*range = r;
	return (size);
}
