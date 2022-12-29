void print_spaces(int r, int rows){
    for(int r = 1;r <= i;r++){
        printf(" ");
    }
}
void print_stars(int r){
    for(int r = 1;r<=rows;r++){
        printf("*");
    }
}
int main(){
    int rows = 5;
    for(int i =1;i<=rows;i++){
        print_spaces(i);
        print_stars(i);
        printf("\n")
    }
    return 0;
}
