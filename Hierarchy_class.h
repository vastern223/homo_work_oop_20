#pragma once
#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;

class SizeInvalidException : public exception
{
public:
	SizeInvalidException(const char* size) : exception(size) { }

};

class NumberInvalidException : public exception
{
public:
	NumberInvalidException(const char* size) : exception(size) { }

};

class Empty_Stack_Exception : public exception
{
public:
	Empty_Stack_Exception(const char* size) : exception(size) { }
};

class File_not_open_Exception : public exception
{
public:
	File_not_open_Exception(const char* size) : exception(size) { }
};
class Empty_List_Exception : public exception
{
public:
	Empty_List_Exception(const char* size) : exception(size) { }
};

class File_not_closed_Exception : public exception
{
public:
	File_not_closed_Exception(const char* size) : exception(size) { }
};

