/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damboule <damboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:03:59 by damboule          #+#    #+#             */
/*   Updated: 2018/11/23 19:43:17 by damboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_chrlen(const char *s, char occurency)
{
	int find;
	int	index;

	find = 0;
	index = 0;
	if (occurency == '\0' || (!(s)) || s == NULL)
		return (find);
	while (s[index] != '\0')
	{
		if (s[index] == occurency)
			find = find + 1;
		index++;
	}
	return (find);
}
