section .text
    global _ft_strlen

_ft_strlen:
    xor rcx, rcx
    
_while:
    cmp byte [rdi + rcx], 0
    je _finish
    inc rcx
    jmp _while

_finish:
    mov rax, rcx
    ret