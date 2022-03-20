#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	fstream file;
	char a[50];
	int count=0;
	string str;
	file.open("file1.txt",ios::in);
	if(!file){
		cout<<"you have not opened file yet how can you expect to count the word !!"<<endl;
	}
	else{
		while(file>>str){
			if(str=="the" || str=="The"){
				count++;
			}
		}
		cout<<"total number of the in the given file is "<<count<<endl;
		
	}
	return 0;
}