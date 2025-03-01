Output:
1
1 2
1 2 3
1 2 3 4
---------------Code--------------
#include <stdio.h>
int main() {
    int n;
    printf("Enter the rows:");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}
