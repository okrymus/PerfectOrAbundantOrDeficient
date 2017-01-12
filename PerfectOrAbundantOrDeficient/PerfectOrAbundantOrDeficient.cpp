// The program will Classify a number as Perfect, Deficient or Abundant. 
// Classify a possitive number classification as perfect, abundant or deficient 
// Programmer: Panupong Leenawarat
// Last modify: 11/3/15

#include <iostream>
using namespace std;

int main()
{
	int num, sumOfFactors;
	//Title
	cout
		<< endl
		<< "\t             Possitive number classification as        \n"
		<< "\t               perfect, abundant or deficient          \n"
		<< "\t                      By Lee. Panupong				   " << endl << endl;

	while (true)
	{
		cout << "Enter a number to be classified as perfect, abundant or deficient: ";
		cin >> num;     cin.ignore(80, '\n');
		
		while (num <= 1)
		{
			cout << "This classification is for POSITIVE integers only. Please try again: ";
			cin >> num;     cin.ignore(80, '\n');
		}
		
		sumOfFactors = 0;
		for ( int count = 1; count <= num; count++)
		{
			if (num != count && num % count == 0)
				sumOfFactors += count;
		}
		
		cout << num << " is ";
		if (sumOfFactors == num)
			cout << "perfect";
		else if (sumOfFactors < num)
			cout << "deficient";
		else
			cout << "abundant";
		cout << " number." << endl << endl;
	}
}
