/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adokhnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:11:29 by adokhnia          #+#    #+#             */
/*   Updated: 2023/06/12 20:11:32 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable_char(char c)
{
	if (c >= 32 && c <= 126)
		return (0);
	return (1);
}

void	char_to_hex(char *hex, char c)
{
	int	iter;
	int	mod;

	hex[0] = '\\';
	iter = 1;
	if (c < 16)
	{
		hex[1] = '0';
		iter++;
	}
	while (c > 0)
	{
		mod = c % 16;
		c /= 16;
		if (mod < 10)
			hex[iter] = '0' + mod;
		else
			hex[iter] = 'a' + mod - 10;
		iter++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		iter;
	char	hex[4];

	iter = 0;
	while (str[iter] != '\0')
	{
		if (0 == is_printable_char(str[iter]))
			write(1, &str[iter], 1);
		else
		{
			char_to_hex(hex, str[iter]);
			write(1, hex, 3);
		}
		iter ++;
	}
}
