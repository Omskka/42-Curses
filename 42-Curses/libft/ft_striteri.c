/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okirca <okirca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:19:25 by okirca            #+#    #+#             */
/*   Updated: 2022/10/18 20:28:21 by okirca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*char func(unsigned int i, char *c)
{
	c -=32;
	return (*c);
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main()
{
	char c[] = "hello";
	ft_striteri(c,func);
	printf("%s", c);
}*/