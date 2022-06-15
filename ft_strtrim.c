/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:53:28 by iryoga            #+#    #+#             */
/*   Updated: 2022/06/15 10:45:27 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*c;
	size_t	i;
	size_t	j;
	size_t	c_len;

	if (s1 == NULL || set == NULL || ft_strlen(s1) == 0)
		return (NULL);
	if (ft_strlen(set) == 0)
		return (s1);
	c_len = ft_strlen(s1);
	i = 0;
	j = c_len - 1;
	while (j > 0 && ft_strchr(set, s1[j--]) != NULL)
		i++;
	c_len -= i;
	i = 0;
	j = 0;
	while (s1[j] != '\0' && ft_strchr(set, s1[j++]) != NULL)
		i++;
	if (i >= c_len)
		return (NULL);
	c_len -= i;
	c = ft_calloc(++c_len, sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_strlcpy(c, s1 + i, c_len);
	return (c);
}
