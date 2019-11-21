/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 20:40:49 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/11/19 20:40:49 by vo-nguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct		s_params
{
	int		point;
	int 	hyphen;
	int 	zero;
	int 	width;
	int 	hpoint;
	int 	hhyphen;
	int 	hzero;
	int 	hwidth;
	int 	invalid;
}					t_params;

int				ft_printf(const char *format, ...);
int				leo_printf(const char *format, ...);

t_params		read_params(const char *f, char c, va_list a);
int				is_legal_char(char c, char d);
void			init_param(t_params *t);
void			update_params(t_params *t, char c);
void			read_zero(const char *f, t_params *t, int *k, va_list arg);
void			read_hyphen(const char *f, t_params *t, int *k, va_list arg);
void			read_point(const char *f, t_params *t, int *k, va_list arg);
void			read_width(const char *f, t_params *t, int *k, va_list arg);
void			read_width_0(const char *f, t_params *t, int *k);


int				parse_flags(const char *f, int i, va_list a, int *c);

int				parse_d(const char *format, int index, va_list a);
int				parse_zero(const char *format, int index, va_list a);
int				parse_p(const char *format, int index, va_list a);
int				parse_i(const char *format, int index, va_list a);
int				parse_c(const char *format, int index, va_list a);
int				parse_pc(const char *format, int index, va_list a);
int				parse_s(const char *format, int index, va_list a);
int				parse_u(const char *format, int index, va_list a);
int				parse_x(const char *format, int index, va_list a);
int				parse_xm(const char *format, int index, va_list a);

char			*format_data_d(char *d, t_params p, int neg);
char			*format_data_c0(char *d, t_params p);
char			*format_data_s(char *d, t_params p);
char			*format_data_p(char *d, t_params p);
char			*format_data_u(char *d, t_params p);
char			*format_data_x(char *d, t_params p);
char			*format_data_s0(t_params p);


char			*join_char_and_free(char *str, char c);
char			*char_join_and_free(char *str, char c);
char			*ft_strjoin_and_free(char *t1, char *t2);

long int		vo_atoi(const char *str, int *count);
char			*u_int_to_hexa(unsigned int i, char alpha, int mode);
char			*long_int_to_hexa(long int i, char alpha, int mode);
void			free_many(char *s1, char *s2);

#endif
