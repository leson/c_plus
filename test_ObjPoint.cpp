#include <iostream>
using namespace std;
class ObjTest{
    private:
        int x;
    public:
        ObjTest(int i){
            x=i;
        }
        int value(int i){
            return i+x;
        }
};
int main(int argc, char const *argv[])
{
    ObjTest *ObjArr[2]={new ObjTest(1),new ObjTest(2)};

    int(ObjTest::*pFun)(int);
    pFun=ObjTest::value;

    ObjTest ot(5);
    int result=ot.(*pFun)(10);
    cout<<"Obje invoke:"<<result<<endl;

    ObjTest *obj=&ot;
    int result=obj->(*pFun)(55);
    cout<<"point invoke:"<<result<<endl;

    getchar();
    return 0;
}
