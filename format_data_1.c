/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:15:20 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/11/08 14:15:20 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*join2char(char *result, char *ox)
{
	result = char_join_and_free(result, ox[1]);
	result = char_join_and_free(result, ox[0]);
	return (result);
}

char		*format_data_d(char *d, t_params p, int neg)
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
	r = neg < 0 && 1 + 0 * (i++) ? char_join_and_free(r, '-') : r;
	while (p.hhyphen && p.hyphen > i && 1 + 0 * (i++))
		r = join_char_and_free(r, ' ');
	while (p.hwidth && p.width > i && 1 + 0 * (i++))
		r = char_join_and_free(r, ' ');
	return (r);
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

char		*format_data_p(char *d, t_params p)
{
	char	*result;
	int 	i;

	result = ft_strdup(d);
	i = ft_strlen(result);
	free(d);
	if (p.invalid != -1)
		return (result);
	while (p.hzero && p.zero > i && 1 + 0 * (i++))
		result = char_join_and_free(result, '0');
	while (p.hpoint && p.point > i && 1 + 0 * (i++))
		result = char_join_and_free(result, '0');
	result = char_join_and_free(result, 'x');
	result = char_join_and_free(result, '0');
	i += 2;
	while (p.hhyphen && p.hyphen > i && 1 + 0 * (i++))
		result = join_char_and_free(result, ' ');
	while (p.hwidth && p.width > i && 1 + 0 * (i++))
		result = char_join_and_free(result, ' ');
	return (result);
}