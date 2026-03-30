/*
Fortis Kernel
Written in C++17 starting on 3-30-26
Adam Tillman

Compiles correctly on:

C++14
C++17
C++20
C++23

In the future, I may add printing the compiled assembly, along with executing it of course.
*/
#ifndef KERNEL_HPP
#define KERNEL_HPP
namespace kernel {


void exec(char text[]) {
    if(text == "exit") {
        __asm__ volatile (
        "mov $60, %rax;"
        "mov $0, %rdi;"
        "syscall;"
        );
    }
}

}
#endif
