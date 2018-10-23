#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    string str1("hello world");
    cout<< str1[0] << str1[10] <<"!" <<str1<<str1.size()<< endl;

    string str2("");
    // cout<< "please input:";
    // cin>> str2;
    // cout<< str2.size()<<endl;

    string str3[]={"java","c++","python"};
    cout<<str3[1]<<endl<<"size:"<<str3[1].size()<<endl;


    getchar();
    return 0;
}
