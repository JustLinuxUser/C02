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

int	is_numeric_char(char c)
{
	if (c >= 48 && c <= 57)
		return (0);
	return (1);
}

int	is_alpha_char(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (0);
	return (1);
}

char	to_lowercase_char(char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

char	to_uppercase_char(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	iter;
	int	new_word;

	new_word = 1;
	iter = 0;
	while (str[iter] != '\0')
	{
		if (0 == is_alpha_char(str[iter])
			|| 0 == is_numeric_char(str[iter]))
		{
			if (new_word == 1)
			{
				new_word = 0;
				str[iter] = to_uppercase_char(str[iter]);
			}
			else
				str[iter] = to_lowercase_char(str[iter]);
		}
		else
		{
			new_word = 1;
		}
		iter++;
	}
	return (str);
}
