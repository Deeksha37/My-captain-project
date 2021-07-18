# include<stdio.h>
int main()
{
    int ch;
    printf("Choose your menu :");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
        printf("Ordered-Pizza\n Price.239");
        break;

        case 2:
        printf("Ordered-Burger\n Price.129");
        break;

        case 3:
        printf("Ordered-Pasta\n Price.179");
        break;

        case 4:
        printf("Ordered-French fries\n Price.99");
        break;

        case 5:
        printf("Ordered-Sandwich\n Price.149");
        break;

        default:
        printf("Sorry! Your order is not in our menu");

     }

    return 0;
}