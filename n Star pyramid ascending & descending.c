#include<stdio.h>
#include<conio.h>

int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int i=1;
    int j=r;
    int a=1;
    int b=1;
    while(i<=r){
        while(j>=i){
            j--;
            printf("* ");
            }
        printf("\n");
        i++;
        j=r;
    }
    while(a<=r) {
        while(b<=a) {
            b++;
            printf("* ");
            }
        printf("\n");
        a++;
        b=1;
    }
    return 0;
}
