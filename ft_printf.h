/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeger <hdeger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:32:08 by hdeger           #+#    #+#             */
/*   Updated: 2023/01/24 19:35:30 by hdeger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int			ft_format(va_list arg, int c);
int			ft_putchar(char a);
int			ft_printf(const char *str, ...);
int			ft_putnbr(int i);
char		*ft_itoa(int n);
int			ft_numlen(int num);
int			ft_putstr(char *str);
int			ft_ptr(unsigned long long p);
void		hexwrite(unsigned long long p);
int			hexbas(unsigned long p);
int			ft_unsignedint(unsigned int n);
char		*ft_uitoa(unsigned int n);
int			ft_ubas(unsigned int n);
int			ft_hexa(char c, unsigned int nbr);
void		ft_printhexa(char c, unsigned int n);
int			ft_hexabas(unsigned int nbr);
#endif
