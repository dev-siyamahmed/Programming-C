#include <stdio.h>

int main()
{
    int nums[] = {12, 23, 13, 20, 4, 5};
    int sum = 0;
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
    }

    printf("The sum of all values in the array is: %d\n", sum);

    return 0;
}
