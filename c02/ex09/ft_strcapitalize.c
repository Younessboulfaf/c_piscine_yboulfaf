/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboulfaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:19:21 by yboulfaf          #+#    #+#             */
/*   Updated: 2021/08/18 10:17:53 by yboulfaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	b = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (!b && str[i] >= 'A' && str[i] <= 'Z')
				str [i] = str[i] + 32;
			else if (b && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			b = 0;
		}
		else
			b++;
		i++;
	}
	return (str);
}
