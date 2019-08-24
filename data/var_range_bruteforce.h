#include <iostream>

using namespace std;

char* printArray(char* arr,int l,int pointer)
{
	char* string=(char*)malloc((l-pointer)*sizeof(char));
	string=&arr[pointer];
	int j=0;	
	for(int i=pointer;i<l;i++)
	{
		string[j]=arr[i];
		j++;
	}
	string[j]='\0';		
	return string;	
}		

int increment(char* arr,int l,int low, int high)	//returns the length of the current password
{
	int i=l-1;
	int length=0;
	while(arr[i]==high)
	{	arr[i]=(char)low;
		i--;
		length++;
	}
	if(arr[i]==' ')
		arr[i]=(char)low;
	else
		arr[i]=(char)(arr[i]+1);
	length++;
	return length;	
}			
	
void gen(char* destination_buffer,int max_size)	//tries password by putting it in  destination_buffer(which may betarget)  
																	//whose maximum size is max_size	
{	
	char index[max_size];
	int low,high;
	cin>>low>>high;	
	
	for(int i=0;i<max_size;i++)
		index[i]=' ';
	for(int i=0;i<=26*26*26*26*26;i++)
	{	
		int pointer=increment(index,max_size,low,high);
		destination_buffer=printArray(index,max_size,pointer);
		cout<<destination_buffer<<endl;
	}
}
int main()
{	char* buf;
	gen(buf,10);
}	
		
	
