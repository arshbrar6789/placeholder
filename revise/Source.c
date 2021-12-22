#include<stdio.h>
int main()
{

	printf("value of the number is %d\n", 27);

	printf("value of the number is %d\n", 29);
	printf("Multiple values for the number are:%d,%d,%d\n", 20, 12, 96);

	// Now we gonna do Maths with printf

	printf("Sum of 2 + 2 is:%d\n", 2 + 2);

	/*Now we gonna do multiplication*/

	printf("Multipliatoin of 234 X 858 is:%d\n", 234 * 858);

	// now we gonna use different placeholders
	//  First is String %s placeholder

	printf("My name is:%s\n", "Arsh Brar");

	// Adding two placeholder of same kind

	printf("My name is:%c %s\n", 'C', "Arsh Brar");

	// Now Percentage %% placeholder

	printf("I got %d% %in C exam\n", 90);
	
	return (0);
}
