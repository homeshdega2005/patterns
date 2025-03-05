Output:

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
-------------------Code-------------------
#include <stdio.h>

int main() {
    int n;
    printf("Enter the rows:");
    scanf("%d",&n);
    for(int row=0;row<2*n;row++){
        int totalColInRow=row>n ? 2*n-row:row;
        for(int col=0;col<totalColInRow;col++){
            printf("* ");
        }
        printf("\n");
    }
}
