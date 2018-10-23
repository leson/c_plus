#include <iostream>
using namespace std;

extern int count;//声明，下面将要引用外部定义的变量。

void write_extern(){
    cout<< "count:"<<count<<endl;
}


