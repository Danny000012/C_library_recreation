/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:22:52 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/30 02:16:58 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	newlen;

	newlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = ft_strnew(newlen);
	if (newstr == NULL)
		return (NULL);
	ft_strcpy(newstr, s1);
	ft_strcpy(newstr, s2);
	return (newstr);
}
