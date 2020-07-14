/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:07:28 by pafernan          #+#    #+#             */
/*   Updated: 2020/07/14 12:16:02 by pafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	i = 0;

	while (n >= 0)
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		}
	}
	return (0);
}