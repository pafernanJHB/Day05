/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:48:44 by pafernan          #+#    #+#             */
/*   Updated: 2020/07/14 08:58:53 by pafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;
	a = 0;

	while(str[a] != '\0')
	{
		b = 0;
		while(to_find[b] == str[a + b])
		{
			if (to_find[b + 1] == '\0')
			{
				return(str + a);
			}
			b++;
		}
		a++;
	}
	return(0);
}
