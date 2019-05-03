/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/11 16:04:59 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2019/05/02 16:15:48 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			init(t_flags *flags)
{
	flags->hashtag = 0;
	flags->plus = 0;
	flags->minus = 0;
	flags->zero = 0;
	flags->point = 0;
	flags->width = 0;
	flags->precision = 0;
	flags->space = 0;
	flags->_l = 0;
	flags->_h = 0;
	flags->_L = 0;
}

t_check_str		init_str(t_flags flags, int size, char *str)
{
	t_check_str		c_str;

	c_str.precision = flags.precision;
	c_str.width = flags.width;
	c_str.minus = flags.minus;
	c_str.zero = flags.zero;
	c_str.size = size;
	c_str.str = str;
	return (c_str);
}

t_check_digit	init_digit(t_check_digit c_dig, long long digit)
{
	c_dig.yn = 0;
	c_dig.space = 0;
	c_dig.unplus = 1;
	c_dig.negdig = digit;
	c_dig.ret = 0;
	return (c_dig);
}
