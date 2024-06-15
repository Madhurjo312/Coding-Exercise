#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c, dis,root1,root2,rpart,impart;
    printf("Enter the values of a,b,c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    dis= (b*b) -(4*a*c);
    if (dis>0)
    {
        root1= (-b+sqrt(dis))/(2*a);
        root2= (-b-sqrt(dis))/(2*a);

        printf("root1: %lf\n and root2: %lf\n",root1,root2);

    }
    else if (dis == 0)
    {
        root1=root2= (-b)/(2*a);
        printf("root1: %lf\n and root2: %lf\n",root1,root2);
    }
    else
    {
        rpart = (-b)/(2*a);
        impart= (sqrt(-dis))/(2*a);
        printf("root1: %lf + %lfi, root2: %lf -%lfi",rpart,impart);
    }
}
