/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adokhnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:13:21 by adokhnia          #+#    #+#             */
/*   Updated: 2023/06/12 16:13:40 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_uppercase_char(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	is_alpha;
	int	iter;

	iter = 0;
	is_alpha = 1;
	while (str[iter] != '\0')
	{
		str[iter] = to_uppercase_char(str[iter]);
		iter++;
	}
	return (str);
}
