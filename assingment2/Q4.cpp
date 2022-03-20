#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main(){
	fstream file;
	int count=0;
	string str;
	char a[50];
	file.open("file1.txt",ios::in);
	if(!file){
		cout<<"please open the file first !!"<<endl;
	}
	else{
		while(file>>str){
			int l = str.length()-1;
			if(str.at(l)=='s'){
				count++;
			}
		}
		cout<<"total words that end with letter s are "<<count<<endl;
	}
	return 0;
}