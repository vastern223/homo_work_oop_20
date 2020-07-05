#include<iostream>
#include <exception>
#include <stdexcept>
#include "String_conversion.h"
using namespace std;


int main()
{

	try
	{
		cout << "number: " << String_conversion("2147483648");
	}
	catch (const invalid_argument& p1)
	{
		cout << p1.what();
	}
	catch (const out_of_range& p2)
	{
		cout << p2.what();
	}


	return 0;
	system("pause");
}


