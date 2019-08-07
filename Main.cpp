#include <iostream>
#include "ErrorHandler.h"
#include <map>

using namespace std;

int main(int argc,char** argv)
{
   // format for the tool
   // [toolname] [-filetype] [filepath] [...added options...]		
   int status=func1(argc);
   if(status!=0)
   {	cout<<"Too few arguments"<<endl;
   		return -1;
   }
   	
   map<string,int>file_map;	//maps file type to integer	
   file_map["--pdf"]=1;			//Pdf file is to be cracked
   file_map["--wd"]=2;			//Word document is to be cracked	
   file_map["--eacc"]=3;		//Email account is to be cracked
   file_map["--usracc"]=4;		//User acount is to be cracked
   file_map["--fbacc"]=5;		//Facebook account is to be cracked
   
   map<string,int>attack_map;	//Maps attack type to integer
   attack_map["--method1"]=1;	
   attack_map["--method2"]=2;	
   attack_map["--method3"]=3;
   attack_map["--method4"]=4;

   int ch=file_map[argv[1]];
   char* filepath=argv[2];
   int attack=attack_map[argv[3]];
      
	switch(ch)
	{
		case 1:
			cout<<"This will crack by 1st encryption algorithm\n";
			cout<<filepath<<endl;	
			cout<<argv[1]<<endl;
			cout<<attack<<endl;
			break;
		case 2:
			cout<<"This will crack by 2nd encryption algorithm\n";
			cout<<filepath<<endl;			
			cout<<argv[1]<<endl;	
			cout<<attack<<endl;		
			break;
		case 3:
			cout<<"This will crack by 3rd encryption algorithm\n";
			cout<<filepath<<endl;			
			cout<<argv[1]<<endl;
			cout<<attack<<endl;			
			break;
		case 4:
			cout<<"This will crack by 4th encryption algorithm\n";
			cout<<filepath<<endl;			
			cout<<argv[1]<<endl;	
			cout<<attack<<endl;		
			break;
		case 5:
			cout<<"This will crack by 5th encryption algorithm\n";
			cout<<filepath<<endl;			
			cout<<argv[1]<<endl;	
			cout<<attack<<endl;		
			break;
		default:
			cout<<argv[1]<<" is not a valid flag"<<endl;
	}	
	return 0;
   
}



 

