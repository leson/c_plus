#include <stdio.h>
 
/* 函数声明 */
void switchVal(int*,int*);
/**
 * ./xxx.out a b c d
 */
int main(int argc, char const *argv[])
{
    /* code */
    printf("%d\n",argc);

    for(int i=0;i<argc;i++){
        printf("%s\n",argv[i]);
    }

    int a=10,b=20;
    switchVal(&a,&b);
    printf("a=%d  b=%d",a,b);

    getchar();
    return 0;
}

/**
 * 函数定义
 */
void switchVal(int *x,int *y){
    int z=0;
    z=*x;
    *x=*y;
    *y=z;
}
