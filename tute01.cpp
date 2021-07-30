
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/

#include<iostream>
using namespace std;
int main()
{
    float km, met,cent;
	cout << "\n\n Convert centimeter into meter and kilometer :\n";
	cout << "--------------------------------------------------\n";	
    cout << " Input the distance in centimeter : ";
    cin >> cent;
	met = (cent/100); 
	km = (cent/100000);
	cout << " The distance in meter is: "<< met << endl;
	cout << " The distance in kilometer is: "<< km << endl;	
	cout << endl;
    return 0;
}