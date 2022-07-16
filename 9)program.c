int main()
{
    int n,i=1;
    printf("How many number cube you want to print");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i*i);
        i++;
    }
    getch();
    return 0;
}
