/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboulfaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:32:43 by yboulfaf          #+#    #+#             */
/*   Updated: 2021/08/07 17:57:33 by yboulfaf         ###   ########.fr       */
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