/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:17:59 by okirca            #+#    #+#             */
/*   Updated: 2022/10/07 17:15:41 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
	{
		i++;
	}
	if ((str[i] == 45 || str[i] == 43) && str[i])
	{	
		if (str[i] == 45)
		{
			sign *= -1;
		}
	i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
	nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}
