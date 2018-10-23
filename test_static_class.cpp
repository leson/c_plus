#include <iostream>
using namespace std;

class Test{
    private:
        int n;
    public:
        Test(int i){
            n=i;
            cout<<"construct;n="<<n<<endl;
        }

        ~Test(){
            cout<<"un-construct;n="<<n<<endl;
        }

        int getN(){
            return n;
        }
        void incN(){
            ++n;
        }


};

main(int argc, char const *argv[])
{
    cout<<"loop start:"<<endl;
    for(int i=0;i<3;i++){
        static Test a(3);
        Test b(3);
        a.incN();
        b.incN();

        cout<<"a.n="<<a.getN()<<endl;
        cout<<"b.n="<<b.getN()<<endl;
    }
    cout<<"end loop"<<endl;
    cout<<"exit main"<<endl;
    getchar();
    return 0;
}
