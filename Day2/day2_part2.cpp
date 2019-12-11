#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
	int goal = 19690720;
	for(int k=1;k<99;k++)
	{
		for(int x=1;x<99;x++)
		{

			vector<int> myVec ={1,0,0,3,1,1,2,3,1,3,4,3,1,5,0,3,2,1,13,19,1,9,19,23,2,13,23,27,2,27,13,31,2,31,10,35,1,6,35,39,1,5,39,43,1,10,43,47,1,5,47,51,1,13,51,55,2,55,9,59,1,6,59,63,1,13,63,67,1,6,67,71,1,71,10,75,2,13,75,79,1,5,79,83,2,83,6,87,1,6,87,91,1,91,13,95,1,95,13,99,2,99,13,103,1,103,5,107,2,107,10,111,1,5,111,115,1,2,115,119,1,119,6,0,99,2,0,14,0};
			myVec[1] = k;
			myVec[2] = x;
			for(int i=0;i<myVec.size();i++)
			{
				// CHECK EVERY 4TH POSITION STARTING AT POSITION 0
				if(i%4 == 0)
				{
					//cout << "INDEX: " << i; 
					//cout <<"VALUE: " << myVec[i];
					// CHECK IF IT'S ADDITION ELSE IT'S MULTIPLICATION
					if(myVec[i]==1)
					{
						//cout << " -ADDITION" << myVec[myVec[i+3]] << myVec[myVec[i+1]] << "+" << myVec[myVec[i+2]] << endl; 
						myVec[myVec[i+3]]=myVec[myVec[i+1]] + myVec[myVec[i+2]];
					}
					else
					{
						//cout << " MULTIPLYING" << myVec[myVec[i+3]] << myVec[myVec[i+1]] << "*" << myVec[myVec[i+2]]<<endl;
						myVec[myVec[i+3]]=myVec[myVec[i+1]] * myVec[myVec[i+2]];
					}
					// IF IT'S 99 EXIT THE PROGRAM
					if(myVec[i] == 99 || myVec[0] == goal)
					{
						if(myVec[0] == goal)
						{
							cout << "THIS IS THE ANSWER: " << k << " + " << x <<endl;
						}
						break;
					}
				}
			}
			if(myVec[0]  == goal)
			{
				cout << "THIS IS THE ANSWER: " << k << " + " << x <<endl;
				break;
			}
		}
	}
	return 0;
}

