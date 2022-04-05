
/* The software receives an intn number and 
returns The number of times the number one 
appears in Binary srepresentation of the number */

#include <stdio.h>
// missing decleration -3
/***/ int count_bits(long int num);
int main()
{
	long int user, bits;
	printf("please enter number\n");
	scanf("%d",&user);
	bits= count_bits(user);
	printf("your number is: %d \n ",user);
	printf( "The number of times one number appears in binary code is: %d \n",bits);
	return 0;
}

/*The function picks up an inte an integarment and calculates 
the amount of times the number one appears Binary 
count of the same number received*/

int count_bits(long int num)
{
	unsigned long int mask=01;   /* Created to compare it with the received number */
	unsigned long int newNum = num;   /* Change the number received to a positive number to prevent the 
	           system from randomly adding the number 1 */
	short int sum=0, size=0, i; 
	size=sizeof(num)*8;      /* Number of bits */
	for(i=0; i<size ;newNum>>=1, i++){
  		if(mask&newNum)
  			sum++; 
	} 
	return sum; 
}

