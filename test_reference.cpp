#include <iostream>
using namespace std;

void switchVal(int &,int &);//函数声名

typedef struct{
    int x;
    int y;
} TestStruct;

int main(int argc, char const *argv[])
{
    /**
     * 1. 基本类型的变量引用 
     */
    int a=3;
    int &b=a;//define variable nickname must be initial;
    b=100;
    a=9;
    cout<<"1. "<< a<<","<<b<< endl;

    /**
     * 2. 指针类型的变量引用 
     * 类型 *&指针引用名 = 指针
     */

    int *p=&a;
    int *&q=p;// 
    *q=22;
    cout<<"2. "<<a<<","<<*p<<endl;

    /**
     * 3. 将引用作为函数参数使用。
     */
    int xa=10,xb=20;
    switchVal(xa,xb);
    cout<<"3. "<<xa<<","<<xb<<endl;

    /**
     * 4. 结构体中的别名用法
     */
    TestStruct testStruct;
    TestStruct &ts=testStruct;
    ts.x=10;
    ts.y=20;
    cout<<"4. "<<ts.x<<"，"<<ts.y<<endl;

    getchar();
    return 0;
}

/**
 * 函数将引用作为参数
 */
void switchVal(int &x,int &y){
    int tmp=0;
    tmp=x;
    x=y;
    y=tmp;
}
