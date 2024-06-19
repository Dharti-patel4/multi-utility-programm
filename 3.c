#include<stdio.h>
main()
{
// Q.3 Triangle Angle Finder
// Write a program to find the third angle of a right triangle when two other angles are given.
// Example:
// Input: First angle: 65, Second angle: 45
// Output: Third angle: 70
	 int angle1,angle2,angle3;
    
    printf("Enter First angle : ");
    scanf("%d",&angle1);
    printf("Enter Second angle : ");
    scanf("%d",&angle2);
    
    angle3=180-(angle1+angle2);
    printf("angle3 is %d",angle3);


}
