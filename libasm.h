/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaresp <amaresp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:42:52 by amaresp           #+#    #+#             */
/*   Updated: 2020/08/13 22:31:52 by amaresp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

size_t				ft_strlen(char *s);
char				*ft_strcpy(char *dest, const char *src);
int					ft_strcmp(const char *s1, const char *s2);
unsigned long int	ft_write(int fd, const void *buf, unsigned int count);
unsigned long int	ft_read(int fd, void *buf, size_t count);
char				*ft_strdup(const char *s);
void				check_strlen();
void				check_strcpy();
void				clear_buffer(char *buffer, int size);
void				check_strcmp();

#endif
