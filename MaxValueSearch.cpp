//============================================================================
// Name        : Prac.cpp
// Author      : skCho
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <typename T>
 T MaxValue(T a, T b, T c)
{
	int largest = a;

		if(a>=b)
			largest = a;
		else
			largest = b;

		if(largest<c)
			largest = c;

	/*largest = max(a,b);
	  largest = max(largest,c);	*/
		return largest;
}

int main() {


	int a, b, c;

	cout<<"Number Input: ";
	cin>>a>>b>>c;

	int largest = MaxValue(a,b,c);

	cout<<"Largest Number: "<<largest<<endl;
	return 0;
}
