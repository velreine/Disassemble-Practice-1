#include <iostream>

__declspec(noinline) int SimpleMathFunction1(int in_a, int in_b);
int x = 0;
int a = 0;
int b = 5;


using namespace std;


int main()
{
	int input, pauseprogram;
	int nestedx, nesteda, nestedb;

	cout << "Hello World" << endl << endl;
	cout << "SimpleMathFunction1 is located at address: " << &SimpleMathFunction1 << endl << endl;
	cout << "My x is located at address: " << &x << endl;
	cout << "My a is located at address: " << &a << endl;
	cout << "My b is located at address: " << &b << endl;


	
	do
	{

		cout << "Loop start ->" << endl << endl;

		cout << "Input: ";

		cin >> input;
		cout << endl;

		//SimpleMathFunction1(input, 5);

		nestedx = SimpleMathFunction1(input, 5);

		cout << input << " + " << b << " is " << nestedx << endl;
		


	} while (1);

	

	return 0;

}


/*
int SimpleMathFunction1(int in_a, int in_b)
{
	x = in_a + b;

	return x;
}
*/

__declspec(noinline) int SimpleMathFunction1(int in_a, int in_b)
{
	x = in_a + b;

	return x;
}