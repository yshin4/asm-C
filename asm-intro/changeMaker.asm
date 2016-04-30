        global main
        extern atoi
        extern printf
        section .text
main:
        add rsi, 8
        mov rdi, [rsi]
        call atoi

        xor rdx, rdx            ; clear rdx
        div qword [quarter]     ; divide by 25
        push rdx                ; save remainder
        mov rsi, rax            ; load number of quarter
        mov rdi, printQuarter   ; load quarter message
        xor rax, rax            ; clear rax to print
        call printf
        pop rdx                 ; retrieve remainder
        mov rax, rdx            ; load remainder
        xor rdx, rdx            ; clear rdx
        div qword [dime]        ; divide by 10
        push rdx                ; save remainder
        mov rsi, rax            ; load number of dime
        mov rdi, printDime      ; load dime message
        xor rax, rax            ; clear rax to print
        call printf
        pop rdx                 ; retrieve remainder
        mov rax, rdx            ; load remainder
        xor rdx, rdx            ; clear rdx
        div qword [nickel]      ; divide by 5
        mov rdi, printNickel    ; load nickel message
        push rdx                ; save remainder
        mov rsi, rax            ; load number of nickel
        xor rax, rax            ; clear rax to print
        call printf
        pop rdx                 ; retrieve remainder
        mov rsi, rdx            ; load number of penny
        mov rdi, printPenny     ; load penny message
        xor rax, rax            ; clear rax to print
        call printf
        ret

quarter:
        dq      25
dime:
        dq      10
nickel:
        dq      5

printQuarter:
        db      "There are %lld quarters", 10, 0
printDime:
        db      "There are %lld dimes", 10, 0
printNickel:
        db      "There are %lld nickels", 10, 0
printPenny:
        db      "There are %lld pennies", 10, 0
