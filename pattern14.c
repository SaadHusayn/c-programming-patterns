#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            printf("%c",'A'+j-1+n*(i-1));
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}