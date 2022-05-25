/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga </var/mail/iryoga>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:02:13 by iryoga            #+#    #+#             */
/*   Updated: 2022/05/25 23:49:50 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*s;
	long	i;
	int		j;

	i = 0;
	j = 0;
	s = (char *)str;
	while (s[0] == '\t' || s[0] == '\n' || s[0] == '\v' || \
s[0] == '\f' || s[0] == '\r' || s[0] == ' ')
		s++;
	if (s[j] == '+' || s[j] == '-')
		j++;
	while (ft_isdigit(s[j]) != 0)
	{
		i = i * 10 + (long)(s[j] - '0');
		j++;
	}
	if (s[0] == '-')
		i *= -1;
	return ((int)i);
}
