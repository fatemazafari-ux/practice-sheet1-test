#include <stdio.h>

int main(void)
{
    int age, student;
    scanf("%d %d", &age, &student);

    if (age < 12)
    {
        printf("50\n");
    }
    else if (age <= 60)
    {
        if (student == 1)
            printf("80\n");
        else
            printf("100\n");
    }
    else
    {
        printf("60\n");
    }

    return 0;
}
