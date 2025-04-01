/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamourid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:09:27 by zamourid          #+#    #+#             */
/*   Updated: 2024/09/08 14:07:11 by zamourid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'a' && str[i] <= 'z')
					|| (str[i] <= 'Z' && str[i] >= 'A') || (str[i] == '\0'))))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main()
//{
//	char str[]= "uuu";
//	printf("%d",ft_str_is_alpha(str));
	// if(ft_str_is_alpha(str))
	// {
	// printf("1");
	// }
	// else printf("0");
//}
