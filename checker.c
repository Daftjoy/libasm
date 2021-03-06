/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 13:28:56 by antmarti          #+#    #+#             */
/*   Updated: 2020/08/14 14:37:18 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	check_strlen(void)
{
	printf("\n================================\n");
	printf("========== FT_STRLEN ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", "");
	printf("%-20s: 0\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen(""));
	printf("%-20s: %zu\n", "libasm", ft_strlen(""));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", "Hello world !");
	printf("%-20s: 13\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen("Hello world !"));
	printf("%-20s: %zu\n", "libasm", ft_strlen("Hello world !"));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", "abcdefghijklmnopqrstuvwxyz");
	printf("%-20s: 26\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen("abcdefghijklmnopqrstuvwxyz"));
	printf("%-20s: %zu\n", "libasm", ft_strlen("abcdefghijklmnopqrstuvwxyz"));
	printf("\n");
}

void	clear_buffer(char *buffer, int size)
{
	int i;

	i = 0;
	while (i < size)
		buffer[i++] = 0;
}

void	check_strcpy(void)
{
	char buffer[30];

	printf("\n================================\n");
	printf("========== FT_STRCPY ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char []", "");
	printf("%-20s: buffer[50]\n", "copy to");
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, ""));
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n\n", "libasm", ft_strcpy(buffer, ""));
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "char []", "Hello world !");
	printf("%-20s: buffer[50]\n", "copy to");
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, "Hello world !"));
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n\n", "libasm", ft_strcpy(buffer, "Hello world !"));
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "char []", "abcdefghijklmnopqrstuvwxyz");
	printf("%-20s: buffer[50]\n", "copy to");
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer,
	"abcdefghijklmnopqrstuvwxyz"));
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n\n", "libasm", ft_strcpy(buffer,
	"abcdefghijklmnopqrstuvwxyz"));
	clear_buffer(buffer, 30);
}

void	check_strcmp(void)
{
	printf("\n================================\n");
	printf("========== FT_STRCMP ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", "Hola buenas");
	printf("%-20s: \"%s\"\n", "compared to", "Hola qué tal");
	printf("%-20s: \"%d\"\n", "libc", strcmp("Hola buenas", "Hola qué tal"));
	printf("%-20s: \"%d\"\n\n", "libasm",
	ft_strcmp("Hola buenas", "Hola qué tal"));
	printf("%-20s: \"%s\"\n", "char *", "Hola buenas");
	printf("%-20s: \"%s\"\n", "compared to", "Hola buenas");
	printf("%-20s: \"%d\"\n", "libc", strcmp("Hola buenas", "Hola buenas"));
	printf("%-20s: \"%d\"\n\n", "libasm",
	ft_strcmp("Hola buenas", "Hola buenas"));
	printf("%-20s: \"%s\"\n", "char *", "Hola buenas");
	printf("%-20s: \"%s\"\n", "compared to", "");
	printf("%-20s: \"%d\"\n", "libc", strcmp("Hola buenas", ""));
	printf("%-20s: \"%d\"\n\n", "libasm", ft_strcmp("Hola buenas", ""));
}
