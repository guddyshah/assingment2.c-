#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	fstream file;
	string str;
	char a[50];
	int count=0;
	file.open("file1.txt",ios::in);
	if(!file){
		cout<<"please open the file first bro !!"<<endl;
	}
	else{
		while(file>>str){
		for(int i=0;i<str.length();i++){
			if(str.at(i) == 'a'){
				count++;
				break;
			}
		}
	}
	cout<<"total number of words containg a are "<<count<<endl;
	}
	return 0;
}