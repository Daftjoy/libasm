# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 13:40:36 by antmarti          #+#    #+#              #
#    Updated: 2020/08/14 13:40:38 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


section .text
                global _ft_strcpy
_ft_strcpy:     
                mov     rdx,0
                mov     rcx,0
                cmp     rsi, 0
                jz      return
                jmp     copy
increment:
                inc     rcx
copy:
                mov     dl, BYTE [rsi + rcx]
                mov     BYTE [rdi + rcx], dl 
                cmp     dl, 0
                jnz     increment   

return:
                mov    rax,rdi
                ret
