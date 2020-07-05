#pragma once
#include<iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class SizeInvalidException : public exception
{
public:
	SizeInvalidException(const char* size) : exception(size) { }

};
class Empty_Stack_Exception : public exception
{
public:
	Empty_Stack_Exception(const char* size) : exception(size) { }
};

template<class T>
class Stack
{
	T* data;
	int maxSize;
	int topIndex;

public:
	Stack();
	Stack(int size);
	~Stack();

	bool Push(T elem);
	T Pop();
	T Peek();
	int GetCount() const;
	bool IsEmpty() const;
	bool IsFull() const;
	bool IsInfinity() const;
	void Clear();
};


