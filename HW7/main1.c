int main()
{
    int i =7;
    
    for(int n=1;n<=i;n++){
        for(int p=1;p<=i;p++){
            if(p<=i-n){
                printf(" ");
            }
            else{
                printf("%d ",n);
            }
        }
        printf("\n");
    }
    return 0;
}

