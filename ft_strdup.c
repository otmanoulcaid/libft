/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:56:31 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/11/02 10:34:33 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	s2 = (char *)malloc((ft_strlen((char *)s1) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = -1;
	while (*(s1 + ++i))
		*(s2 + i) = *(s1 + i);
	*(s2 + i) = '\0';
	return (s2);
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n",ft_strdup("hello world "));
}*/
