/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboulfaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 11:20:10 by yboulfaf          #+#    #+#             */
/*   Updated: 2021/08/07 15:30:05 by yboulfaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write (1, &n, 1);
		n++;
	}
}
