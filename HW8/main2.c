int main()
{
    int i =15;
    int n =i;
    int answer =0;
    do{
        n=n/2;
        answer+=1;
    } while(n>0);
    printf("%d有%d個1",i,answer);
    
    return 0;
}
