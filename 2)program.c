int main()
{
    int i,n;
    printf("How many nature numbers you want to print");
    scanf("%d",&i);
    n=i;
    while(i)
    {
        printf("%d ",n-i+1);
        i--;
    }
    getch();
    return 0;
}
