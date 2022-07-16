#pragma once
class Array
{
public:
	int* p;
	int size;

	Array();
	Array(int _size, int* _p);
	Array(const Array& oldArray);
	void ToString();
	int* operator+= (const Array& array); //?
	Array operator= (const Array& array);
	int* operator- (const Array& array);
	~Array();
};

