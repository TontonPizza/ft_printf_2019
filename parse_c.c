/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 10:55:53 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/11/26 10:55:53 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			parse_c(const char *format, va_list a)
{
	char		data;
	t_params	p;
	char		*result;
	int			i;

	p = read_params(format + 1, 'c', a);
	data = va_arg(a, int);
	data = (unsigned char)data;
	update_params(&p, 'c');
	result = malloc(sizeof(char) * 2);
	result[0] = data;
	result[1] = 0;
	if (p.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + p.invalid + 1, 'c');
	}
	else
		result[0] = 0;
	if (data != 0 && p.invalid == -1)
		result = char_join_and_free(result, data);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (data == 0 ? i + 1 : i);
}