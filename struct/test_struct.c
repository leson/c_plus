#include <string.h>

typedef struct s
{
    char ch;
    long lg;
    int  it;
} ST;

int main(int argc, char const *argv[])
{
    /* code */
    ST a={'h',1,2};
    ST b,c;
    b=a;
    memcpy(&c,&a,sizeof(ST));
    return 0;
}

