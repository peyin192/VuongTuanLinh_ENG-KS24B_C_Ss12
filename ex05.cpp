#include <stdio.h>

int snt(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;
    
    printf("Nhap so: ");
    scanf("%d",&a);
    
    printf("Nhap so: ");
    scanf("%d",&b);


    if (snt(a)) {
        printf("%d true",a);
    } else {
        printf("%d false",a);
    }

    if (snt(b)) {
        printf("%d true",b);
    } else {
        printf("%d false",b);
    }

    return 0;
}
