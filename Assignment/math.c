//Marc Giordano

#include <math.h>
#include <stdio.h>

int math(int x, int y, char Operator)
{
	int result;
	
	switch(Operator){
		
		case '+' : 
		result=x+y;
		
		case '-' :
		result=x-y;
		
		case '*' :
		result=x*y;
		
		case '/' :
		result=x/y;
		
		case '%' :
		result=x%y;
	}
	return result;
}