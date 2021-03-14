//学习c中关键值static
#include <stdio.h>
int main(int argc, char const *argv[])
{
    //静态变量的调用
     staticInt();
     staticInt();
     staticInt();

    //局部变量的调用
    sampleInt();
    sampleInt();

    return 0;
}

/**
 *静态变量 
 */
int  staticInt(void){
    static int i = 0;
    i++;
    printf("静态变量：%d \n",i);
}

/**
 * 普通变量
 */
int sampleInt(void){
    int i = 0;
    i++;
    printf("普通变量：%d \n",i);
}