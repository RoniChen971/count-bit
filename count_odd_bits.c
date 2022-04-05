/*
the program gets input from user or file the number positive and print how many bits '1' has in odd position
*/

#include <stdio.h>

/*
function gets number and return count of bits 1 in odd postion has in number
*/
int count_odd_bits(unsigned short int num)
{
	unsigned short int mask=01; /* mask for check bits */
	int sum=0, size=0 ,i; /* sum- sum of bits 1 in odd position, size - size of input */

	size=sizeof(num)*8;
	num>>=1;
	for(i=1; i<=size; i+=2, num>>=2){
  		if(mask&num)
  			sum++;
	}
	 
	return sum; 
}

/*
gets from user or from file numbers until EOF and print each number counts of bits '1' in odd postion has in number
*/
int main()
{
	unsigned short int num, bits;

	printf("please enter number \n");
	while(scanf("%hd",&num)!=EOF)
	{
		bits=count_odd_bits(num);
		printf("your number is: %d\n the sum of bits is:%d\n",num, bits);
	}
	return 0;
}

