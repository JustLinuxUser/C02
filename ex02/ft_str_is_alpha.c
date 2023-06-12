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

int	is_alpha_char(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (0);
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	iter;

	iter = 0;
	is_alpha = 1;
	while (str[iter] != '\0')
	{
		if (0 != is_alpha_char(str[iter]))
			return (0);
		iter++;
	}
	return (1);
}
