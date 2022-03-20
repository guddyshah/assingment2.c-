#include<iostream>
#include<fstream>
using namespace std;

class student{
	public:
	char name[10],branch[50],location[10];
	int r_no;
	
	void getdata(){
		cout<<"enter roll no"<<endl;
		cin>>r_no;
		cout<<"enter name"<<endl;
		cin>>name;
		cout<<"enter branch"<<endl;
		cin>>branch;
		cout<<"enter location"<<endl;
		cin>>location;
	}
	void adddata(){
		fstream file;
		student s2;
		file.open("file2.dat",ios::app|ios::binary);
		s2.getdata();
		file.write((char *)&s2,sizeof(s2));
		file.close();
	}
	void display(){
		fstream file;
		student s;
		int temp,flag=0;
		cout<<"enter roll no"<<endl;
		cin>>temp;
		file.open("file2.dat",ios::in | ios::binary);
		try{
			if(file){
				cout<<"file opened"<<endl;
			}
			else{
				throw 1;
			}
		}
		catch(int x){
			cout<<"file can not be opened"<<endl;
		}
		while(file.read((char *)&s,sizeof(s))){
			if(s.r_no == temp){
				cout<<"student no"<<s.r_no<<endl;
				cout<<"student name"<<s.name<<endl;
				cout<<"student branch"<<s.branch<<endl;
				cout<<"student location"<<s.location<<endl;
				flag=1;
			}
		}
		if(flag==0){
			cout<<"no student with id entered"<<endl;
		}
		file.close();
	}
};

int main(){
	student s1;
	int i;
	while(1){
		cout<<"enter 1 to add student"<<endl;
		cout<<"enter 2 to display student"<<endl;
		cout<<"enter 3 if you want to exit"<<endl;
		cin>>i;
		switch(i){
			case 1:
			s1.adddata();
			break;
			case 2:
			s1.display();
			break;
			case 3:
			exit(1);
			default:
			cout<<"please enter between 1 to 3"<<endl;
			break;
		}
	}
	return 0;
}