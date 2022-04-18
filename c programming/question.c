#include <stdio.h>
int main(){
    float basic, sal;
    float HRA, DA;
    scanf("%f", &basic);
    HRA = .80 * (basic);DA = .40 * (basic);
    sal = HRA + DA + basic;
    printf("%.2f", sal);
    return 0;
}