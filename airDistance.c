#include<stdio.h>
#include<math.h>
//globally decleare variable 
 double lon1,p1,lon2,p2,delta,Radius = 62371,Result=0;
//Function to convert Degree into Radian
int Degree_to_Radian(int num)
{
    float PI = 3.1416f;
    int radian = (num/180)*PI;

    return radian;
}
int main()
{
   

    printf("Enter the longitude of Origin in Degree [ -180 to 180 ] : ");
    scanf("%lf",&lon1);
    printf("Enter the latitude of Origin in Degree [ -90 to 90 ] : ");
    scanf("%lf",&p1);
    printf("Enter the longitude of Distination in Degree [ -180 to 180 ] : ");
    scanf("%lf",&lon2);
    printf("Enter the latitude of Distination in Degree [ -90 to 90 ] : ");
    scanf("%lf",&p2);
    
