# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 13:41:09 by antmarti          #+#    #+#              #
#    Updated: 2020/08/14 13:41:11 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


			section	.text
			global	_ft_strlen

; delete RAX

_ft_strlen:
			mov		rax, -1			
increment:
			inc		rax					
compare:
			cmp		BYTE [rdi + rax], 0	
			jne		increment
done:
			ret						
