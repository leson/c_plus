#include <iostream>
using namespace std;

/**
 * 测试 const 与 指针类型 之间的关系。
 */
void testConstAndPoint(){
   const int *p0=NULL;
//    int const *p0=NULL;// same with above line

   const int * const p1 = NULL;
//    int const * const p1 = NULL;// same with above line

    //====================示例如下：=========================//

    int x=3,y=5;
    const int *p = &x;

    /** 1. **/
    p=&y;//正确。地址可以改变。
    // *p=4;// 编译器会报错，因为 *P 被定义为静态的，不可变的。 

    /** 2. **/
    int * const pa = &x;
    // pa=&y;//此处编译报错，因为const 修饰 pa ； pa 不能改变。
    *pa=4;
    cout<< *pa<<endl;

    /** 3. **/
    const int * const pb = &x;
    // pb=&y;// 会报错
    // *pb=4;// 也会报错

    /** 4. **/
}

/**
 * 测试 const 与 引用类型 之间的关系
 */
void testConstAndReference(){
    int x=3;
    const int &y=x;
    x=10;
    // y=20;// 编译错误。

    
}

int main(int argc, char const *argv[])
{
    /** 1. const 与基本类型对比 **/
    int a=3;
    a=4;
    const int b=5;
    int const bx=5;
    // bx=6;//编译器会报错。
    // b=9;// 编译器会报错。
    cout<<"1:"<< a<<b<<bx<<endl;

    // 其它例子
    testConstAndPoint();

    getchar();
    return 0;
}
