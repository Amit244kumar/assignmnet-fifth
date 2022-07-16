int main()
{
    int n,i=0;
    printf("Which number table you want");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%dX%d=%d\n",i,n,i*n);
        i++;
    }
    getch();
    return 0;
}
