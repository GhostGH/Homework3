#include "Array.h"
#include <stdlib.h>
#include<iostream>

Array::Array()
{
	size = 5;
	p = new int[size];
	for (int i = 0; i < size; i++)
	{
		p[i] = rand()%100;
	}
}

Array::Array(int _size, int* _p)
{
	size = _size;
	p = _p;
}

Array::Array(const Array& oldArray)
{
	size = oldArray.size;
	p = oldArray.p;
	for (int i = 0; i < size; i++)
	{
		p[i] = oldArray.p[i];
	}
}

void Array::ToString()
{
	for (int i = 0; i <size; i++)
	{
		std::cout << p[i] << " ";
	}
	std::cout << std::endl;
}


int* Array::operator+=(const Array& array)
{
	int* newP = new int[this->size + array.size];
	for ( int i =0;i < size; i++)
	{
		newP[i] = this->p[i];
	}
	for (int i = 0; i < array.size; i++)
	{
		newP[this->size+i] = array.p[i];
	}
	p = newP;
	return p;
}

Array Array::operator=(const Array& array)
{
	this->size = array.size;
	this->p = array.p;
	for (int i = 0; i < size; i++)
	{
		this->p[i] = array.p[i];
	}
	return Array();
}

int* Array::operator-(const Array& array)
{
	int* newP = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		newP[i] = 0;
	}
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		
		for ( int j = 0; j <array.size; j++)
		{
			if (this->p[i] == array.p[j])
			{
				int a = 0;
				for (; a < this->size; a++)
				{
					if (newP[a]==p[i])
					{
						break;
					}
				}
				if (a==this->size)
				{
				newP[c] = this->p[i];
				c++;
				break;
				}
				
			}
			
		}
		
	}
	p = newP;
	return p;
}

Array::~Array()
{
	delete[]p;
}
