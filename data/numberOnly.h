#include <iostream>
#include <sstream>

using namespace std;

void genPass(char* destination_buffer)	//Desinaion buffer stores the location where the password is to tried
{	for(int i=0;i<999999999;i++)
	{	ostringstream s;
		s<<i;
		string temp=s.str();
		for(int i=0;i<temp.length();i++)
			destination_buffer[i]=temp.at(i);
		cout<<destination_buffer<<endl;
	}
}
int main()
{	char* dest=(char*)malloc(sizeof(char));	
	genPass(dest);
}
	
	
	
