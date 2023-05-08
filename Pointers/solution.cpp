#include <stdio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int tempa = *a;
    int tempb = *b;
    
    int resulta = tempa + tempb;
    
    *a = resulta;
    
    *b = abs(tempa - tempb);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}