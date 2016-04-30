        global  main
        extern  puts
        extern  printf
        extern  madlib_by_numbers
        section .text

main:
        push    rbx
        sub     rdi, 2          ; word count
        mov     rcx, rdi        ; get word count or should it be just rdi
        add     rsi, 8          ; go to the template
        mov     rdi,[rsi]       ; save it in rdi

madlib:
        add     rsi, 8          ; go to word
        mov     rdx, rsi        ; place words in third argument(rdx);
        mov     rsi, rcx
        call    madlib_by_numbers
        mov     rdi, rax
        call    puts
        pop     rbx

        ret
