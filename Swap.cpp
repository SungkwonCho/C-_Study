/*
 * Swap.cpp
 *
 *  Created on: 2017. 3. 10.
 *      Author: Cho
 */

#include <iostream>

using namespace std;

template <typename T>
void swap_Reference(T &a, T &b)  //Call by Reference
{
	T temp = a;
	a = b;
	b = temp;
}
////////////////////////////////////////////////////////

template <typename R>
void swap_Value(R a, R b)      //Call by Value
{
	R temp = a;
	a = b;
	b = temp;
}
/////////////////////////////////////////////////////////

int main ()
{
	int a, b;

	cout<<"Input Number: ";
	cin>>a>>b;

	swap_Reference(a,b);
	cout<<"(Swap by Call-By-Reference) x : "<<a<<", y : "<<b<<endl;

	int c, d;

	cout<<"Input Number: ";
	cin>>c>>d;

	swap_Value(c,d);
	cout<<"(Swap by Call-By-Value) x : "<<c<<", y : "<<d<<endl;
}


