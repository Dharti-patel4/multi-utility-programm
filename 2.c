#include<stdio.h>
main()
{
// Q.2 Gross Salary Calculator
//Create a program that calculates the gross salary by adding percentages of
// HRA, DA, and TA to the base salary as chosen by the user.

//Example:
// Input: Base Salary: 100, HRA=10%, DA=5%, TA=8%
// Output: Gross Salary: Rs. 123

	int gs,basic,da,ta;
    
	printf("enter basic salary:");
    scanf("%d",&basic);
    
    da=(5*basic)/100;
    ta=(8*basic)/100;
    
    gs=basic+da+ta;
    
    printf("\n gross salary is : %d",gs);
    return(0);
}
