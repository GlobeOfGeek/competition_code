#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n%2!=0) {
        printf("-1"); 
    } else {
        for(int i=1; i<=n; i++) {
            if(i%2!=0) {
                printf("%d", i+1);
            } else {
                printf("%d", i-1);
            }
            if(i<n) {
                printf(" ");
            }
        } 
    }
    return 0;
}
