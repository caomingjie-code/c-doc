#include<stdio.h>
/**
 * 学习 for, while, do-while
 * 
 */
int main(int argc, char const *argv[])
{
    /**
     * for 
     */
    for(int i = 0; i<10; i++){
            printf("for语法： %d \n",i);
    }

    /**
     * while
     */
    long i = 10;
    while( i>0){
        printf("while 语法: %d \n",i);
        i--;
    }


    /**
     * do-while
     */
    do{
        printf("do-while语法: %d \n",i);
        i++;
    }while (i==0);
    
    
    return 0;
}
