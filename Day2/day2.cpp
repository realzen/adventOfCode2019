#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	ifstream ifile;
	ifile.open("input.txt");
	string line;
	vector<int> myVec;
	// READ THE LINE INTO A STRING
	getline(ifile,line);
	cout << "THIS IS THE LINE" << line << endl;
	// CREAT AN ARRAY TRAVERSING THROUGH THE STRING CREATED
	// AND ADD IT TO ARRAY WITH VALUES
	string temp_string;
	for(int i=0;i<line.size();i++)
	{
		cout << "THESE ARE THE CHARACTERS" << line[i] << endl;
		char ch=line[i];
		if(line[i] != ',')
		{
			temp_string +=ch;
		}
		else
		{
			int num;
			// CONVERT STRING TO INT
			istringstream iss(temp_string);
			iss >> num;
			// ADD TO VECTOR
			myVec.push_back(num);
			//RESET THE STRING 
			temp_string = "";
			cout << "THIS IS THE NUMBER BEING PLACED" << "---->" << num << endl;
		}

	}
	// START COMPUTING 
	for(int i=0; i<myVec.size();i++)
	{
		// CHECK EVERY 4TH POSITION STARTING AT POSITION 0
		if(i%4 == 0)
		{
			cout << "INDEX: " << i; 
			cout <<"VALUE: " << myVec[i];
			// CHECK IF IT'S ADDITION ELSE IT'S MULTIPLICATION
			if(myVec[i]==1)
			{
				cout << " -ADDITION" << myVec[myVec[i+3]] << myVec[myVec[i+1]] << "+" << myVec[myVec[i+2]] << endl;	
				myVec[myVec[i+3]]=myVec[myVec[i+1]] + myVec[myVec[i+2]];
			}
			else
			{
				cout << " MULTIPLYING" << myVec[myVec[i+3]] << myVec[myVec[i+1]] << "*" << myVec[myVec[i+2]]<<endl;
				myVec[myVec[i+3]]=myVec[myVec[i+1]] * myVec[myVec[i+2]];
			}
			// IF IT'S 99 EXIT THE PROGRAM
			if(myVec[i] == 99)
			{
				break;
			}
		}
	}

	cout << "RESULT: " << myVec[0] <<endl;
	return 0;

	
}
