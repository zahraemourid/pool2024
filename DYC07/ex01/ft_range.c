/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamourid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:38:45 by zamourid          #+#    #+#             */
/*   Updated: 2024/09/18 21:59:31 by zamourid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*r;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	r = (int *) malloc(size * sizeof(int));
	if (r == NULL)
		return (NULL);
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	return (r);
}
