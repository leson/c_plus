#include <iostream>
using namespace std;// 使用 一个叫 “std" 的命名空间。否则 cout 等 显示未定义。

int main(int argc, char const *argv[])
{
    /* code */
    const int ACOUNT=1000;
    int i=0;
    
    for(;i<2;i++)
    {
        cout<<i<<endl;
    }
    
    cout << "hello c++" << endl;
    getchar();
    return 0;
}
