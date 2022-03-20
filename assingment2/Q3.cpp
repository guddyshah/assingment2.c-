#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	fstream file;
	string str;
	char a[100];
	int count=0;
	file.open("file1.txt",ios::in);
	if(!file){
		cout<<"if you want to count the words start with e then you have to open file"<<endl;
	}
	else{
		while(file>>str){
			if(str.at(0) == 'e'){
				count++;
			}
		}
	cout<<"total words that start with e are"<<count<<endl;
	}
	return 0;
}