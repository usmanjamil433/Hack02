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

