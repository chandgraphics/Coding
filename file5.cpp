#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;

int main(){
	char ch[20],ch2[20];
	int n;
	float l;
	
	ifstream inf;
	inf.open("zzz.txt", ios::in);
	while(!inf.eof()){
		inf>>ch;
		inf>>n;
		inf>>l;
		inf>>ch2;
		cout<<ch<<endl;
		cout<<n<<endl;
		cout<<l<<endl;
		cout<<ch2<<endl;
	}
	inf.close();
}

