#include <stdio.h>
int main(int argc, char const *argv[])
{
    char multiple[] = "my string";
    char *p  = &multiple[0];
    printf(" the address of the firest array element : %p\n",p);
    p = multiple;
    printf("the address obtained from the array name : %p\n",multiple);

    return 0;
}

