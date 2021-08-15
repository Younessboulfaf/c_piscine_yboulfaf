/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboulfaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:27:22 by yboulfaf          #+#    #+#             */
/*   Updated: 2021/08/15 13:04:04 by yboulfaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int     ft_str_is_numeric(char *str)
{
  int i;

    i = 0;
    while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
    return (1);
}
int main ()
{
	char w[] = "3";
	printf ("%d" , ft_str_is_numeric(w));

}
