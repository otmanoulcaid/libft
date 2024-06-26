/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:18:21 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/31 11:28:47 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		len;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	s = (char *)malloc(len * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (*s1)
		*(s + i++) = *s1++;
	while (*s2) 
	{
		*(s + i++) = *s2;
		s2++;
	}
	return (*(s + i) = '\0', s);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
//	printf("%lu\n",strlen(NULL));
	printf("%s",ft_strjoin("hello",NULL));
}
*/
