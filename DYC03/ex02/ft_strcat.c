/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamourid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:39:38 by zamourid          #+#    #+#             */
/*   Updated: 2024/09/14 19:46:29 by zamourid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str )
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	lg_dest;
	int	lg_src;
	int	i;

	i = 0;
	lg_src = ft_strlen(src);
	lg_dest = ft_strlen(dest);
	while (i < lg_src)
	{
		dest[lg_dest + i] = src[i];
		i++;
	}
	dest[lg_dest + i] = '\0';
	return (dest);
}
