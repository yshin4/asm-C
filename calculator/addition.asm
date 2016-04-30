
        global  addition
        section .text

addition:
        mov rax, rsi
        mov rcx, rdi
        add rax, rcx
        ret

