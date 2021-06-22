#include<stdio.h>
int main(int argc, char const *argv[])
{
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday,Sunday};

    enum Day day = Monday;
  printf("M的值为： %d  \n", day);
    for(; day < Wednesday;day++){
            if(day == Thursday){
                break; //跳出当前循环
            }
    }

    printf("当前day是： %d"+day);
    return 0;
}
