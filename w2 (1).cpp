#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//cout << "\"Information Technology 'C' \"" << endl;
	//cout << setw(230) << "Hello" << endl;
	
	/*cout << setw(70) << "This is Turbo C++ Program." << endl;
	cout << setw(65) << "It is very easy." << endl;
	cout << setw(62) << "I love C++." << endl;
	cout << setw(70) << "It's high level language." << endl;*/
	//cout << "\'A'\is Character.\n" ;
	//cout << "A=\101 = \x41\n";
	//cout << "A = " << (char)65 << endl;
	//cout << "My nick name is " << (char)84 << (char)79 << (char)69 << (char)89 << endl; 
	unsigned short x = 65535;
	cout << "short\t " << sizeof(x) << " bytes " << x <<  endl;
	return(0);
}