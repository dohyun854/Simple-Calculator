#include <stdio.h>
 
int main()
{
    int num1, num2;
    char cl;
 
    printf("Type:");
    scanf("%d %c %d", &num1, &cl, &num2);
 
    switch (cl)
    {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0)
            printf("error");
            else printf("%d / %d = %.3f\n", num1, num2, num1 / (double)num2);
            break;
    }
    return 0;
}
