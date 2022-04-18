#include <stdio.h>
#include <math.h>

int main()

{
    float number1, number2, approx;

    scanf("%f %f", &number1, &number2);

    if (number2 > number1)

    {
        approx = number2 - number1;

        if (approx <= 1)

            printf("Approximate Number");

        else

            printf("Not an Approximate Number");
    }

    else

    {
        approx = number1 - number2;

        if (approx <= 1)

            printf("Approximate Number");
        else
            printf("Not an Approximate Number");
    }
    return 0;
}
//#include <stdio.h>
// int main()
//{
// float number1,number2,approx;
//   scanf("%f %f",&number1,&number2);
// approx = 0.5;
//   if(number1-number2<=approx || number2-number1<=approx){
//     printf("Approximate Number");
//}
// else{
//    printf("Not an Approximate Number");
// }

// return 0;
//}