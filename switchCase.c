#include <stdio.h>
#include <string.h>
int main()
{
    int a = 3;
    switch (a)
    {
    case 1:
        printf("value is 1 \n");
        break;
    case 2:
        printf("value is 2 \n");
        break;
    case 3:
        printf("value is 3 \n");
        break;

    default:
        printf("value is unknow \n");
    }

    return 0;
}
