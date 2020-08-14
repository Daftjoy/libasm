# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>           +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 13:27:35 by antmarti          #+#    #+#              #
#    Updated: 2020/08/14 13:27:39 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

        section .text 
        global _ft_write
		extern ___error
_ft_write:
        mov    rax, 0x2000004
        syscall
		jc		error
        ret

error:
		mov		r15, rax
		call	___error
		mov 	[rax],r15
		mov		rax, -1
		ret
