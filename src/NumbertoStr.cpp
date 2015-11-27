/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int flag = 0;
	if (number < 0.0)
	{
		number = 0.0 - number;
		flag = 1;
	}
	int num1 = int(number);
	int rev1 = 0,rev2=0,decimal=0;
	int index = 0;
	float num2 = number - num1;
	while (num1 != 0)
	{
		int k = num1 % 10;
		rev1 = rev1 * 10 + k;
		num1 = num1 / 10;
	}
	int temp = afterdecimal;
	while (temp != 0)
	{
		decimal = int(num2 * 10)+decimal*10;
		num2 = num2 * 10;
		num2 = num2 - int(num2);
		temp--;
	}
	if (flag == 1)
	{
		str[index++] = '-';
	}
	while (rev1 != 0)
	{
		int k = rev1 % 10;
		str[index++] = k + '0';
		rev1 = rev1 / 10;
	}
	while (decimal != 0)
	{
		int k = decimal % 10;
		rev2 = rev2 * 10 + k;
		decimal = decimal / 10;
	}
	if (afterdecimal != 0)
	{
		str[index++] = '.';
		while (rev2 != 0)
		{
			int k = rev2 % 10;
			str[index++] = k + '0';
			rev2 = rev2 / 10;
		}
	}
}
