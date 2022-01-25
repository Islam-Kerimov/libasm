section .text
    global _ft_strcmp

_ft_strcmp:
    xor rcx, rcx
    xor rdx, rdx
    xor r8, r8
    
_while:
    mov dl, byte [rdi + rcx]
    mov r8b, byte [rsi + rcx]
    cmp dl, r8b
    jne _finish
    jmp _increment

_increment:
    cmp dl, 0
    je _finish
    inc rcx
    jmp _while

_finish:
    sub edx, r8d
    mov eax, edx
    ret