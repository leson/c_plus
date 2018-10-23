#include <iostream>

int count;// define a global variable
extern void write_extern();//声明，下面将要引用外部定义的变量。

int main(int argc, char const *argv[])
{
    count=100;
    write_extern();

    // getchar();
    return 0;
}
