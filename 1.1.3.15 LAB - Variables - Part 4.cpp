//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them.
//
//Your version of the program must print the same result as the expected output.Before you use the compiler, try to find the errors only by manual code analysis.Remember to find the logic errors(check the order of the months).
//
//If you want to improve the variable names, then do so, but remember that variable names have to be as descriptive as possible, and also as short as possible.
//
//
////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int main()
//{
//	int daysIn	CurrentFebruary = 29;
//	int daysIn	January = 31;
//	int daysIn	February = daysInCurrentFebruary;
//	int daysIn	March = 31;
//	int daysIn	April = 30;
//	int daysIn	May = 31;
//	int daysIn	June = 30;
//	int daysIn	July = 31;
//	int daysIn	August = 31;
//	int daysIn	September = 3 *;
//	int daysIn	October = 3 + ;
//	int daysIn	November = 3 *;
//	int daysIn	December = 3 + ;
//	int daysInFirstHalf = daysIn January + daysIn December + daysIn March
//		+ daysIn April + daysIn May + daysIn July;
//	int daysInSecondHalf = daysIn June + daysIn August + daysIn September
//		+ daysIn October + daysIn November + daysIn February;
//	printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
//	printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
//	printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);
//	return 0;
//}
//
//
//Expected output
//A leap year :
//Days in the first half of the current year : 182
//Days in the second half of the current year : 184
//Days in the current year : 366
//
//An ordinary year :
//Days in the first half of the current year : 181
//Days in the second half of the current year : 184
//Days in the current year : 365
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
	int CurrentFebruary	= 29;
	int daysJanuary		= 31;
	int daysFebruary	= CurrentFebruary;
	int daysMarch		= 31;
	int daysApril		= 30;
	int daysMay			= 31;
	int daysJune		= 30;
	int daysJuly		= 31;
	int daysAugust		= 31;
	int daysSeptember	= 30;
	int daysOctober		= 31;
	int daysNovember	= 30;
	int daysDecember	= 31;

	int daysFirstHalf = daysJanuary + daysFebruary + daysMarch + daysApril + daysMay + daysJune;
	int daysSecondHalf = daysJuly + daysAugust + daysSeptember + daysOctober + daysNovember + daysDecember;
	
	printf("Days in the first half of the current year: %d\n", daysFirstHalf);
	printf("Days in the second half of the current year: %d\n", daysSecondHalf);
	printf("Days in the current year: %d\n", daysFirstHalf + daysSecondHalf);

}


