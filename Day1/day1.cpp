#include <iostream>
#include <fstream>

using namespace std;
// USED TO RECURSIVELY CALCULATE THE FUEL
int calculate_fuel(int x)
{
	if(((x/3)-2) <= 0)
	{
		return 0;
	}
	else
	{
		cout << ((x/3)-2) << "+";
		return ((x/3)-2) + calculate_fuel((x/3)-2);
	}
}
int main()
{
	ifstream ifile;
	cout << "Hello world" << endl;
	ifile.open("input.txt");
	int lines;
	int count = 1;
	int sum_of_lines = 0;
	while (ifile >> lines )
	{
		cout << "(" << count++ << ")" << lines << " = ";
		// COMPUTE THE FUEL
		sum_of_lines += calculate_fuel(lines);
		cout << endl;
	}
	cout << "THIS IS THE FINAL SUM: " << sum_of_lines <<endl;
return 0;
}

