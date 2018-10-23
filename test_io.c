#include <stdio.h>
#include <stdlib.h>


typedef char* String;

/**
 * stdin
 * stdout
 * stderr
 * 
 */
int main(int argc, char const *argv[])
{
    // int a,b,c;
    // scanf("%d%d%d",&a,&b,&c);
    // printf("%d,%d,%d\n",a,b,c);

    String str="hello world";
    printf("%s\n",*str);


    char strBuf[80];
    printf("please input:\n");
    // scanf("%s",strBuf);
    fgets(strBuf, 10, stdin );
    printf("%s\n",strBuf);

    // scanf("%s",pChar);
    // get_s(pChar);
   

    getchar();
    return 0;
}
