# C/C++ Debug approach on linux

## gcc + gdb
> assume we have a c file name test_struct.c

```bash
gcc -g test_struct.c

gdb ./a.out

b main

r

p sizeof(ST)

# examine command; to show the variable value of memery.
x/16xb &a
x/16xb &b
x/16xb &c

next (n)

```

## view Assembly Code with `objdump`

```bash
objdump -d a.out |less

objdump -S a.out |less

```

> objdump总结
1）objdump -d：反汇编目标文件中包含的可执行指令。
2）如果需要混合显示源码和汇编代码，需要加上-S选项，并且在编译目标文件时加上-g。
3）如果在编译目标文件时没有加-g选项，则-S相当于-d。
4）-S选项生成的混合代码，有时文件结构混乱，可读性较差。推荐使用-d选项，直接阅读汇编代码。
