#pragma once
#include<iostream>
#include <exception>
#include <stdexcept>
#include <string>
using namespace std;

int String_conversion(string number)
{

    bool minus = false;

    for (char s : number)
    {
        if (s < 48 || s > 57)
        {
            if (s == '-' && minus == false)
            {
                minus = true;
                continue;
            }
            throw invalid_argument("only numbers are needed");
        }

    }
    int number_int;

    number_int = atoi(number.c_str());

    if (number_int > 2147483647 || number_int < -2147483647)
        throw out_of_range("out of range");

    return number_int;

}
