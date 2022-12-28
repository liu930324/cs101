int main()
{
    int i =12345;
    int i4=(i%10000-i%1000)/1000;
    int i1=i%10;
    printf("%d",i+i1*1000-i4*1000+i4-i1);

    return 0;
}
