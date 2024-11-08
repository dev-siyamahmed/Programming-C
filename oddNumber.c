#include <stdio.h>
#include <string.h>
int main()
{

    int a = 30;
    switch (a)
    {
    case 1:
        printf("value is 1 \n");
        break;
    case 5:
        printf("value is 5 \n");
        break;
    case 10:
        printf("value is 10 \n");
        break;

    default:
        printf("value is unknow \n");
    }

    return 0;
}
