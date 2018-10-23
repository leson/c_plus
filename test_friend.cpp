#include <iostream>
#include <cmath>
using namespace std;

class Point{
    private:
        double x,y;
    public:
        Point(double xi,double yi){
            x=xi;
            y=yi;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        friend double distance(Point px,Point py){
            return 0.0;
        }
};

main(int argc, char const *argv[])
{
    Point px(3,4);
    Point py(5,6);

    double dist=distance(px,py);

    cout<<"distance="<<dist<<endl;
    getchar();
    return 0;
}
