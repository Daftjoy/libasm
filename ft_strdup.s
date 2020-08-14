# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 13:40:52 by antmarti          #+#    #+#              #
#    Updated: 2020/08/14 13:40:57 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

                section .text 
                global _ft_strdup
                extern _malloc
_ft_strdup:
            cmp     rdi,0
            jz      error
            mov		rcx, -1	
increment:
			inc		rcx					
compare:
			cmp		BYTE [rdi + rcx], 0	
			jne		increment
mem: 
            inc     rcx
            push    rdi 
            mov     rdi,rcx
            call    _malloc
            pop     rdi 
            cmp     rax,0
            jz      error   
init_copy: 
            mov     rdx,0
            mov     rcx,0
            jmp     copy
increment_copy:
            inc     rcx
copy:
            mov     dl, BYTE [rdi + rcx]
            mov     BYTE [rax + rcx], dl 
            cmp     dl, 0
            jnz     increment_copy   
            jmp     return
error:
            xor     rax,rax
return:
            ret
