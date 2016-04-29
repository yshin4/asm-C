        global  main
        extern  puts
        extern  reverse_range_in_place
        extern  strlen
        extern  printf
        section .text
main:
        push    rdi
        push    rsi
        sub     rsp, 8

        mov     rdi, [rsi]
        call    strlen
        mov     rdi, [rsi]
        mov     rsi, 0
        mov     rdx, rax
        push    rdi
        call    reverse_range_in_place
        pop     rdi
        call    puts

        add     rsp, 8
        pop     rsi
        pop     rdi

        add     rsi, 8
        dec     rdi
        jnz     main

        ret
