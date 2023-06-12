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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iter;

	iter = 0;
	while (iter < n && src[iter] != '\0')
	{
		dest[iter] = src[iter];
		iter++;
	}
	while (iter < n)
	{
		dest[iter] = '\0';
		iter++;
	}
	return (dest);
}
