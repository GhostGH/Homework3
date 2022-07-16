#include<iostream>
#include"Array.h"
using namespace std;

int main() {
	srand(2);
	Array arr;
	Array ar ;
	ar.ToString();
	arr.ToString();
	arr - ar;
	arr.ToString();
	ar.ToString();
	system("pause");
	return 0;
}