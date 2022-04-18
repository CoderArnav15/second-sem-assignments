#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float dsKm, dsM, dsF, dsI, dsCm;
    scanf("%f", &dsKm);
    dsM = dsKm * 1000;
    dsF = dsKm * 3280.84;
    dsI = dsKm * 39370.1;
    dsCm = dsKm * 100000;
    printf("%.f m\n%.f ft\n%.f in\n%.f cm", dsM, dsF, dsI, dsCm);

    return 0;
}