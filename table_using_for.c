#include <stdio.h>

int main()
{
    int num, multi;
    printf("Enter the number for table: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        multi = num * i;
        printf("%d x %d = %d\n", num, i, multi);
    }
    return 0;
}
