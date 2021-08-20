/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboulfaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:13:20 by yboulfaf          #+#    #+#             */
/*   Updated: 2021/08/20 13:17:00 by yboulfaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int n;

	n = 0;
	i = ft_strlen(dest);
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
