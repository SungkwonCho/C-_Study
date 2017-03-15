/*
 * tester.cpp
 *
 *  Created on: 2017. 3. 15.
 *      Author: Cho
 */

#include <iostream>

using namespace std;

struct Fraction
{
	int num;         // numerator
	int denom;       // molecule
};

int gcd(int, int);
struct Fraction addFraction(struct Fraction, struct Fraction);                     // solve by return struct
void addFraction1(struct Fraction, struct Fraction, struct Fraction& result);      // solve by & operator
void addFraction2(struct Fraction, struct Fraction, struct Fraction* result);      // solve by pointer

int main()
{
	struct Fraction A,B,C,D,E;

	cout<<"A의 분자, 분모: ";
	cin>>A.num>>A.denom;
	cout<<"B의 분자, 분모: ";
	cin>>B.num>>B.denom;
	C = addFraction(A,B);
	addFraction1(A,B,D);
	addFraction2(A,B,&E);

	cout<<"C의 분자: "<<C.num<<", 분모: "<<C.denom<<endl;
	cout<<"D의 분자: "<<D.num<<", 분모: "<<D.denom<<endl;
	cout<<"E의 분자: "<<E.num<<", 분모: "<<E.denom<<endl;


	return 0;
}

struct Fraction addFraction(struct Fraction bunsu1, struct Fraction bunsu2)   //  return (bunsu1 + bunsu2)
{
	struct Fraction result;

	result.denom = bunsu1.denom * bunsu2.denom;
	result.num = bunsu1.num* bunsu2.denom + bunsu2.num*bunsu1.denom;

	if(result.num == 0)    // If, numerator is 0, ...
	{
		result.denom = 1;
	}

	else if(result.denom < 0)  // If, denominator is < 0, ...
	{
		result.denom *= -1;
		result.num *= -1;
	}

	if(gcd(result.num, result.denom) != 1)     // If, result's numerator & denominator are not simple fraction, ...
	{
		result.num /= gcd(result.num, result.denom);
		result.denom /= gcd(result.num, result.denom);
	}
	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////////

void addFraction1(struct Fraction bunsu1, struct Fraction bunsu2, struct Fraction& result)   // using & operator
{
	result.denom = bunsu1.denom * bunsu2.denom;
	result.num = bunsu1.num* bunsu2.denom + bunsu2.num*bunsu1.denom;

	if(result.num == 0)    // 분자가 0일 경우
	{
		result.denom = 1;
	}

	else if(result.denom < 0)  // 분모가 음수일 경우
	{
		result.denom *= -1;
		result.num *= -1;
	}

	if(gcd(result.num, result.denom) != 1)
	{
		result.num /= gcd(result.num, result.denom);
		result.denom /= gcd(result.num, result.denom);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////

void addFraction2(struct Fraction bunsu1, struct Fraction bunsu2, struct Fraction* result)   //using pointer
{
	result->denom = bunsu1.denom * bunsu2.denom;
	result->num = bunsu1.num* bunsu2.denom + bunsu2.num*bunsu1.denom;

	if(result->num == 0)    // 분자가 0일 경우
	{
		result->denom = 1;
	}

	else if(result->denom < 0)  // 분모가 음수일 경우
	{
		result->denom *= -1;
		result->num *= -1;
	}

	if(gcd(result->num, result->denom) != 1)
	{
		result->num /= gcd(result->num, result->denom);
		result->denom /= gcd(result->num, result->denom);
	}
}

int gcd(int a, int b)         // greatet common divisor method
{
	while(a % b != 0)
	{
		int temp = a;
		a = b;
		b = temp%b;
	}
	return b;
}





