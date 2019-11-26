/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_pc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 11:14:55 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/11/26 11:14:55 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			parse_pc(const char *format, va_list a)
{
	int			i;
	int			k;
	char		*result;
	t_params	params;

	k = 0;
	params = read_params(format + 1, '%', a);
	update_params(&params, '%');
	result = ft_strdup("%");
	if (params.invalid != -1)
	{
		free(result);
		result = ft_strdup_to_c(format + params.invalid + 1, '%');
		result[ft_strlen(result) - 1] = 0;
	}
	i = ft_strlen(result);
	ft_putstr_fd(result, 1);
	free(result);
	return (i);
}