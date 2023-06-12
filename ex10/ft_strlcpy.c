/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adokhnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:02:34 by adokhnia          #+#    #+#             */
/*   Updated: 2023/06/12 16:02:47 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
		iter++;
	return (iter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iter;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (n < 1)
		return (src_len);
	iter = 0;
	while (iter < src_len && iter < n - 1)
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = '\0';
	return (src_len);
}
