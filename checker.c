/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaresp <amaresp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 22:28:30 by amaresp           #+#    #+#             */
/*   Updated: 2020/08/13 22:39:32 by amaresp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void check_strlen()
{
	char *empty = "";
	char *hello_world = "Hello world !";
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	printf("\n================================\n");
	printf("========== FT_STRLEN ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", empty);
	printf("%-20s: 0\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen(empty));	
	printf("%-20s: %zu\n", "libasm", ft_strlen(empty));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	printf("%-20s: 13\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen(hello_world));	
	printf("%-20s: %zu\n", "libasm", ft_strlen(hello_world));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", alphabet);
	printf("%-20s: 26\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen(alphabet));	
	printf("%-20s: %zu\n", "libasm", ft_strlen(alphabet));
	printf("\n");
}

void clear_buffer(char *buffer, int size)
{
	int i = 0;
	while (i < size)
		buffer[i++] = 0;
}

void check_strcpy()
{
	char buffer[30];
	
	char *empty = "";
	char *hello_world = "Hello world !";
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	printf("\n================================\n");
	printf("========== FT_STRCPY ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char []", empty);
	printf("%-20s: buffer[50]\n", "copy to");
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, empty));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "libasm", ft_strcpy(buffer, empty));	
	clear_buffer(buffer, 30);
	printf("\n");
	printf("%-20s: \"%s\"\n", "char []", hello_world);
	printf("%-20s: buffer[50]\n", "copy to");
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, hello_world));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "libasm", ft_strcpy(buffer, hello_world));	
	clear_buffer(buffer, 30);
	printf("\n");
	printf("%-20s: \"%s\"\n", "char []", alphabet);
	printf("%-20s: buffer[50]\n", "copy to");
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, alphabet));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "libasm", ft_strcpy(buffer, alphabet));
	clear_buffer(buffer, 30);
	printf("\n");
}

void check_strcmp()
{
	
	printf("\n================================\n");
	printf("========== FT_STRCMP ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", "Hola buenas");
	printf("%-20s: \"%s\"\n", "compared to", "Hola qué tal");
	printf("%-20s: \"%d\"\n", "libc", strcmp("Hola buenas", "Hola qué tal"));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp("Hola buenas", "Hola qué tal"));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", "Hola buenas");
	printf("%-20s: \"%s\"\n", "compared to", "Hola buenas");
	printf("%-20s: \"%d\"\n", "libc", strcmp("Hola buenas", "Hola buenas"));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp("Hola buenas", "Hola buenas"));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", "Hola buenas");
	printf("%-20s: \"%s\"\n", "compared to", "");
	printf("%-20s: \"%d\"\n", "libc", strcmp("Hola buenas", ""));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp("Hola buenas", ""));
	printf("\n");
}