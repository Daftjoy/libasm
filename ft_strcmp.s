        section .text 
        global _ft_strcmp
    
_ft_strcmp:
            mov     rdx,0
            mov     rcx,0
            cmp     rsi,0
            jz      return
            jmp     compare 
increment:
            inc     rcx
compare:   
            mov    dl, BYTE [rdi + rcx]
            cmp     dl,0
            jz     null_str
            sub     dl, BYTE [rsi + rcx]
            cmp     dl,0
            jz      increment
            jl     minor_str
            jg      greater_str
null_str:
            sub     dl, BYTE [rsi + rcx]
            cmp     dl,0
            jz      return
            jmp     minor_str
minor_str:
            mov     rax,-1
            ret
greater_str:
            mov     rax,1
            ret
return:
            mov     rax,0
            ret