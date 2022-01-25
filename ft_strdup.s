section .text
    extern _ft_strlen
    extern _ft_strcpy
    extern _malloc
    global _ft_strdup

_ft_strdup:
    call _ft_strlen
    push rdi
    inc rax
    mov rdi, rax
    xor rax, rax
    call _malloc
    cmp rax, 0
    jz _finish
    mov rdi, rax
    pop rsi
    call _ft_strcpy

_finish:
    ret