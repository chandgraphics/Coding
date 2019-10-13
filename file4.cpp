#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;

int main(){
	char line[20];
	ifstream inf;
	inf.open("zzz.txt", ios::in);
	while(!inf.eof()){
		inf.getline(line,20);
	}
	cout<<line;
	inf.close();
}

