int main()
{
    int i;
    printf("How many natural number you want to print");
    scanf("%d",&i);
    while(i)
    {
        printf("%d ",i--);
    }

    getch();
    return 0;
}
