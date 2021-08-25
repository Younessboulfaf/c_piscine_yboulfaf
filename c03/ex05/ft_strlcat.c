/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboulfaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:59:27 by yboulfaf          #+#    #+#             */
/*   Updated: 2021/08/22 17:20:37 by yboulfaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	n;
	int				t;

	i = 0;
	n = 0;
	if (ft_strlen(dest) >= size)
	{
		t = size + ft_strlen(src);
		return (t);
	}
	else
	{
		t = ft_strlen(dest);
		n = ft_strlen(dest);
		while (src[i] && n < size - 1)
		{
			dest[n] = src[i];
			n++;
			i++;
		}
		dest[n] = '\0';
		return (t + ft_strlen(src));
	}
}
