/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboulfaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:55:28 by yboulfaf          #+#    #+#             */
/*   Updated: 2021/08/09 14:55:36 by yboulfaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n)
{	
	if (n < 0)
	{	
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
