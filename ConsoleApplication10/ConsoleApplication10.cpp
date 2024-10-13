#include<iostream>
#include"Vector.h"
using namespace std;
int main()
{
	srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();
	Vector obj3 = obj1 - 4; 
	obj3.Print();
	obj1.Print();
	Vector obj2 = obj1 + 10;
	Vector obj4(2);
	Vector obj5 = obj1 + obj4;
	Vector obj6 = obj1 * 5;
}