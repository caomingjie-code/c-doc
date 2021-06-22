#include <stdio.h>

/**
 * 学习goto 指令
 * 当遍历打印到5的时候退出循环
 * 
 */
int main(int argc, char const *argv[])
{
    
    for( int i=0; i<10; i++){
            if(i==5){
                goto goT; //线程直接跳入到goT处继续执行
            }
            printf("%d",i);
    }
    goT:
    return 0;
}
