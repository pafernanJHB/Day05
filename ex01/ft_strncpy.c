/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:26:44 by pafernan          #+#    #+#             */
/*   Updated: 2020/07/14 08:47:10 by pafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;

	while(n >= 0)
	{
		src[i] = dest[i];
		i++;
	}
	return(dest);
}
