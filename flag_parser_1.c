/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 23:32:25 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/11/06 23:32:25 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** format[index] = %
*/

int			parse_d(const char *format, int index, va_list a)
{
	int			data;
	char		*result;
	t_params	p;
	int			i;

	i = 0;
	p = read_params(format + index + 1,  'd', a);
	update_params(&p, 'd');
	data = va_arg(a, int);
	if (data == 0 && p.point == 0 && p.hpoint)
		result = ft_strdup("");
	else
		result = vo_itoa(data);
	if (p.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + p.invalid + index + 1, 'd');
	}
	result = format_data_d(result, p, data);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}

int			parse_zero(const char *format, int index, va_list a)
{
	char		*result;
	t_params	params;
	int			i;

	params = read_params(format + index + 1, '\0', a);
	update_params(&params, 0);
	result = ft_strdup_to_c(format + params.invalid, '\0');
	result[1] = 0;
	result = format_data(result, params, 1, 0);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	i += ft_strlen(format + params.invalid + 1);
	ft_putstr_fd(format + params.invalid + 1, 1);
	free(result);
	return (i);
}

int			parse_p(const char *format, int index, va_list a)
{
	long int	i;
	char		*result;
	long int	data;
	t_params	p;

	p = read_params(format + index + 1, 'p', a);
	update_params(&p, 'p');
	data = va_arg(a, long int);
	if (data == 0 && p.hpoint && p.point == 0)
		result = ft_strdup("");
	else
		result = long_int_to_hexa(data, 'a', 2);
	if (p.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + p.invalid + index + 1, 'p');
	}
	result = format_data_p(result, p);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}

int			parse_c(const char *format, int index, va_list a)
{
	char		data;
	t_params	p;
	char		*result;
	int			i;

	p = read_params(format + index + 1, 'c', a);
	data = va_arg(a, int);
	data = (unsigned char)data;
	update_params(&p, 'c');
	result = malloc(sizeof(char) * 2);
	result[0] = data;
	result[1] = 0;
	if (p.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + p.invalid + index + 1, 'c');
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

int			parse_i(const char *format, int index, va_list a)
{
	int			data;
	char		*result;
	t_params	p;
	int			i;

	i = 0;
	p = read_params(format + index + 1,  'i', a);
	update_params(&p, 'i');
	data = va_arg(a, int);
	if (data == 0 && p.point == 0 && p.hpoint)
		result = ft_strdup("");
	else
		result = vo_itoa(data);
	if (p.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + p.invalid + index + 1, 'i');
	}
	result = format_data_d(result, p, data);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}
