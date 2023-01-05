int rows=1;
void print_space_top(n){
    for(int space =1;space <=n-rows;space++){
            printf(" ");
        }
}
void print_star_top(){
    for(int star =1;star <=rows*2-1;star++){
        printf("*");
    }
    printf("\n");
}
void print_house(n){
    for(int i =1;i <=n*2-1;i++){
        printf("*");
    }
    printf("\n");
    for(int i =1;i <=n;i++){
        printf("*");
        for(int i =1;i<=n*2-3;i++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i =1;i <=n*2-1;i++){
        printf("*");
    }
}
int main()
{
    int n =4;
    for(int i =1;i <=n;i++){
        print_space_top(n);
        print_star_top();
        rows++;
    }
    print_house(n);

    return 0;
}
