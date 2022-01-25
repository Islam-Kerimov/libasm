section .text
    global _ft_strcpy

_ft_strcpy:
    xor rcx, rcx
    
_while:
    cmp byte [rsi + rcx], 0
    je _finish
    mov dl, byte [rsi + rcx]
    mov [rdi + rcx], dl
    inc rcx
    jmp _while

_finish:
    mov byte [rdi + rcx], 0
    mov rax, rdi
    ret