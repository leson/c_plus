#include <iostream>
using namespace std;
class ObjTest{
    private:
        int x;
    public:
        ObjTest(){
        }

        ObjTest(int i){
            x=i;
        }
        int calVal(int i){
            return i+x;
        }

        int setX(int a){
            x=a;
        }
};


int main(int argc, char const *argv[])
{
    /** allocate memory demo **/
    ObjTest *pObj=new ObjTest();// define pointer variable pObj to store the memory firstly address
    pObj->setX(8);
    cout<<pObj->calVal(9)<<endl;
    delete pObj;
    pObj=NULL;

    /** pointer array **/
    // ObjTest *ObjArr[2]={new ObjTest(1),new ObjTest(2)};

    // int(ObjTest::*pFun)(int);
    // pFun=ObjTest::value;

    // ObjTest ot(5);
    // int result=ot.(*pFun)(10);
    // cout<<"Obje invoke:"<<result<<endl;

    // ObjTest *obj=&ot;
    // int result=obj->(*pFun)(55);
    // cout<<"point invoke:"<<result<<endl;

    getchar();
    return 0;
}
