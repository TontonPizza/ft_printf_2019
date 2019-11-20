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

int			parse_pc(const char *format, int index, va_list a)
{
	int			i;
	int			k;
	char		*result;
	t_params	params;

	k = 0;
	i = index;
	params = read_params(format + index + 1, '%', a);
	update_params(&params, '%');
	result = ft_strdup("%");
	if (params.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + params.invalid - 1, '%');
	}
	result = format_data(result, params, 1, 0);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}

int			parse_s(const char *format, int index, va_list a)
{
	t_params	params;
	char		*result;
	char		*data;
	int			i;

	params = read_params(format + index + 1, 's', a);
	update_params(&params, 's');
	result = vo_strdup_2(va_arg(a, char*));
	result = format_data_s(result, params, 1, 0);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}

int			parse_u(const char *format, int index, va_list a)
{
	long int			data;
	char				*result;
	t_params			p;
	int					i;

	p = read_params(format + index + 1, 'u', a);
	update_params(&p, 'u');
	data = va_arg(a, unsigned int);
	if (data == 0 && p.hpoint && p.point == 0)
		result = NULL;
	else
		result = ft_itoa(data);
	if (p.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + p.invalid + index + 1, 'u');
	}
	result = format_data_u(result, p);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}

int			parse_x(const char *format, int index, va_list a)
{
	long int	i;
	char		*result;
	long int	data;
	t_params	p;

	p = read_params(format + index + 1, 'x', a);
	update_params(&p, 'x');
	data = va_arg(a, unsigned int);
	if (data == 0 && p.hpoint && p.point == 0)
		result = NULL;
	else
		result = u_int_to_hexa(data, 'a', 2);
	if (p.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + p.invalid + index + 1, 'x');
	}
	result = format_data_d(result, p, 1);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}

int			parse_xm(const char *format, int index, va_list a)
{
	long int	i;
	char		*result;
	long int	data;
	t_params	p;

	p = read_params(format + index + 1, 'X', a);
	update_params(&p, 'X');
	data = va_arg(a, unsigned int);
	if (data == 0 && p.hpoint && p.point == 0)
		result = NULL;
	else
		result = u_int_to_hexa(data, 'A', 2);
	if (p.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + p.invalid + index + 1, 'X');
	}
	result = format_data_d(result, p, 1);
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}
