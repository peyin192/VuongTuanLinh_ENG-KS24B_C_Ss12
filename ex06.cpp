#include <stdio.h>

int shh(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b;
    
    printf("Nhap so: ");
    scanf("%d",&a);
    
    printf("Nhap so: ");
    scanf("%d",&b);


    if (shh(a)) {
        printf("%d true",a);
    } else {
        printf("%d false",a);
    }

    if (shh(b)) {
        printf("%d true",b);
    } else {
        printf("%d false",b);
    }

    return 0;
}
