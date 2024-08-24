#include <stdio.h>

int main()
{
    int number, num = 1, original;
    do
    {
        printf("Enter the number for table: ");
        scanf("%d", &number);

        if (number < 0)
        {
            printf("Enter the postive number.");
            break;
        }

        original = number;
        while (num <= 12)
        {
            printf("%d x %d = %d\n", original, num, number * num);
            num++;
        }
        break;
    } while (1);

    return 0;
}
