/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboulfaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:03:46 by yboulfaf          #+#    #+#             */
/*   Updated: 2021/08/21 17:28:32 by yboulfaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	int	i;
	int	n;

	n = 0;
	i = ft_strlen(dest);
	while (src[n] != '\0' && n < nb)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
