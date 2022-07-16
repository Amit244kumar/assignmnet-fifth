int main()
{
    int n;
    printf("How many even number you want to print in reverse order");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",n*2);
        n--;
    }
    getch();
    return 0;
}
