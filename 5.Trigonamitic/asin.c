#include<stdio.h>
#include<math.h>

main()
{


  float x,y,z,a;
    printf("-1<=sin(x)<=1\n\n");
    printf("Enter sin inverse value : ");
    scanf("%f",&x);
    y=asin( x );
    a=180*7;
    a=a/22;
    z=y*a;

    printf("\nsin inverse(%.2f) = %.2f degree",x,ceil(z));
    printf("\n%.2f degree = %.2f radian",z,y);

}
