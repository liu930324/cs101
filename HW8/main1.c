int main()
{
    int rows =10;
    
    for(int i=1;i<=rows;i++){
        for(int space =1;space <=rows-i;space++){
            printf(" ");
        }
        for(int star =1;star <=i*2-1;star++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

