void print_inverted_triangle(int n){
    int rows =1;
    for(int i =1;i <=n;i++){
        for(int i =2;i <=rows;i++){
            printf(" ");
        }
        for(int i=1;i <=n*2-rows*2+1;i++){
            printf("*");
        }
        printf("\n");
        rows+=1;
    }
}
void print_triangle_norows1(int n){
    int rows =2;
    for(int i=2;i <=n;i++){
        for(int i =1;i <=n-rows;i++){
            printf(" ");
        }
        for(int i=1;i <=rows*2-1;i++){
            printf("*");
        }
        printf("\n");
        rows++;
    }
}
void print_hourglass(int n){
    print_inverted_triangle(n);
    print_triangle_norows1(n);
}
int main()
{
    print_hourglass(4);
    return 0;
}
