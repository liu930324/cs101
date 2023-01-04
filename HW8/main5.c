int rows=0;
int max_tree=0;
void print_space(){
    for(int space =1;space <=(max_tree+1)/2-rows;space++){
            printf(" ");
        }
}
void print_star(){
    for(int star =1;star <=rows*2-1;star++){
        printf("*");
    }
    printf("\n");
}
void print_top(int i,int n){
    max_tree =n;
    for(int top =i;top <=n;top+=4){
        rows =1;
        for(int triangle_base =1;triangle_base <=(top+1)/2;triangle_base++){
            print_space();
            print_star();
            rows+=1;
        }
    }
}
void print_trunk(int trunk_length,int n){
    rows =1;
    for(int trunk =1;trunk <=n/2-1;trunk++){
        print_space(n);
        print_star();
    }
}
int main()
{
    int min =5;
    int max =13;
    int trunk_length =5;
    printf("  X'mas tree!\n");
    print_top(min,max);
    print_trunk(trunk_length,max);
    
    return 0;
}
