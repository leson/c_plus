#include <iostream>
using namespace std;// 使用 一个叫 “std" 的命名空间。否则 cout 等 显示未定义。如果真想使用cout,则需要用std::cout 这种写法。

/**
 * 模拟命名空间 A
 */
namespace A 
{
    int x=1;
    int fun(){
        cout<<"namespace A fun() :"<< x <<endl;
    }
}

/**
 * 模拟命名空间 B
 */
namespace B 
{
    int x=2;
    int fun(){
        cout<<"namespace B fun() :"<< x <<endl;
    }

    int foo(){
        cout<<"namespace B foo() :"<< x <<endl;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    A::fun();
    B::fun();
    using namespace B;
    foo();
    
    getchar();
    return 0;
}
