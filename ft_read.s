# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_read.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 13:21:08 by antmarti          #+#    #+#              #
#    Updated: 2020/08/14 13:21:15 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

		section .text 
        global	_ft_read
		extern	___error
_ft_read:
        mov    rax, 0x2000003
        syscall
		jc		error
        ret

error:
		mov		r15, rax
		call	___error
		mov 	[rax], r15
		mov 	rax, -1
		ret
