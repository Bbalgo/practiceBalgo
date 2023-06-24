/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <dsudadec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 00:01:22 by dsudadec          #+#    #+#             */
/*   Updated: 2023/06/24 23:11:04 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
char	*ft_strjoin(char *s1, char *s2)
{
	int			sizetotal;
	char	*res;
	int			i;
	int			j;

	i = 0;
	sizetotal = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * sizetotal + 1);
	if (!res || !s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[sizetotal] = 0;
	return (res);
}
*/

char	*ft_strjoin(char *s1, char *s2)
{
	char	*fs;
	int				i;
	int				j;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char));
		*s1 = 0;
	}
	if (!s2)
		return (s1);
	fs = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!fs)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[j])
		fs[i++] = s1[j++];
	j = 0;
	while (s2[j])
		fs[i++] = s2[j++];
	fs[i] = '\0';
	free(s1);
	return (fs);
}
int	next_char(char *str, char c)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (i + 1);
		i++;
	}
	return (0);
}
