#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
	char name[20]="Hello world2";
	ofstream outf;
	outf.open("zzz.txt" , ios::out);
	int l=strlen(name);
	for(int i=0;i<l;i++){
		outf.put(name[i]);
	}
	outf.close();
	ifstream inf;
	inf.open("zzz.txt" , ios::in);
	char ch;
	while(!inf.eof()){
		ch=inf.get();
		cout<<ch;
	}	
	inf.close();
}

