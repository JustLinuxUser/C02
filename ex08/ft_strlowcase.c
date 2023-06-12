/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adokhnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:13:21 by adokhnia          #+#    #+#             */
/*   Updated: 2023/06/12 16:47:03 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lowercase_char(char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	is_alpha;
	int	iter;

	iter = 0;
	is_alpha = 1;
	while (str[iter] != '\0')
	{
		str[iter] = to_lowercase_char(str[iter]);
		iter++;
	}
	return (str);
}
