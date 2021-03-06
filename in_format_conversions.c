/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_format_conversions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiroshiusui <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 02:37:48 by hiroshius         #+#    #+#             */
/*   Updated: 2018/01/31 02:37:49 by hiroshius        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	in_format_conversions(char c)
{
	char *all_format_conversions;

	all_format_conversions = "sSpdDioOuUxXcC%";
	while (*all_format_conversions)
	{
		if (c == *all_format_conversions)
			return (1);
		all_format_conversions++;
	}
	return (0);
}
