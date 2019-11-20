/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_data_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 04:34:12 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/11/20 04:34:12 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*format_data_c(char *d, t_params p, int neg)
{
	char	*result;
	int 	i;
	result = ft_strdup(d);
	free(d);
	i = ft_strlen(result);
	if (i != 0)
	{
		while (p.hzero && p.zero > i && 1 + 0 * (i++))
			result = char_join_and_free(result, '0');
		while (p.hpoint && p.point > i && 1 + 0 * (i++))
			result = char_join_and_free(result, '0');
	}
	else
		i = 2;
	result = neg < 0 && 1 + 0 * (i++) ? char_join_and_free(result, '-') : result;
	while (p.hhyphen && p.hyphen > i && 1 + 0 * (i++))
		result = join_char_and_free(result, ' ');
	while (p.hwidth && p.width > i && 1 + 0 * (i++))
		result = char_join_and_free(result, ' ');
	return (result);
}

char		*format_data_u(char *d, t_params p)
{
	char	*r;
	int 	i;
	r = ft_strdup(d);
	free(d);
	i = ft_strlen(r);
	if (p.invalid != -1)
		return (r);
	if (i != 0)
	{
		while (p.hzero && p.zero > i && 1 + 0 * (i++))
			r = char_join_and_free(r, '0');
		while (p.hpoint && p.point > i && 1 + 0 * (i++))
			r = char_join_and_free(r, '0');
	}
	else
		i = 2;
	while (p.hhyphen && p.hyphen > i && 1 + 0 * (i++))
		r = join_char_and_free(r, ' ');
	while (p.hwidth && p.width > i && 1 + 0 * (i++))
		r = char_join_and_free(r, ' ');
	return (r);
}