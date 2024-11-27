#include <stdio.h>

int main() {
    int t, n, count = 0, temp = 0;
    int a[100];
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        for (int k =0; k< n; k++) {
            if(a[k]==1) count=0;
            if (a[k] !=1){ count++;
            }
            if(count>temp) temp=count;
        }
        printf("%d\n", temp);
        temp=0;
        count=0;
    }

    return 0;
}
