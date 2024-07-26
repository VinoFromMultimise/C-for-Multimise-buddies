#include<stdio.h>

int choice = 0, a, b, res;
void getinput(int);
int main()
{
    printf("\n Enter the type of calculation you want");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Cube of the number");
    printf("\n Your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
                getinput(1);
                res = a + b;
        break;

        case 2:
                getinput(2);
                res = a - b;
        break;

        case 3:
                getinput(3);
                res = a * b;
        break;
        
        case 4:
                getinput(4);
                res = a / b;
        break;

        case 5:
                getinput(5);
                res = a * a * a;
        break;
        default:
                printf("\n check the entered choice once !!");
                break;

    }
    printf("\n The result is %d", res);
    return 0;
}
void getinput(int ch)
{
    if (ch != 5)
    {
        printf("\n Enter the first number: ");
        scanf("%d", &a);
        printf("\n Enter the second number: ");
        scanf("%d", &b);
    }
    else if (ch == 5)
    {
        printf("\n Enter the first number: ");
        scanf("%d", &a);

    }

}