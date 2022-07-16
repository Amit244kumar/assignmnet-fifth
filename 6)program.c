int main()
{
    int n,i=1;
    printf("How many even number you want to print");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*2);
        i++;
    }
    getch();
    return 0;
}
