#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char name[20],name1[20];
	float cost,cost1;
	
	ofstream outf("data.txt");
	
	cout<<"Enter item name"<<endl;
	cin>>name;
	
	cout<<"Enter item price"<<endl;
	cin>>cost;
	
	outf<<name<<"\n";
	outf<<cost<<"\n";
	
	outf.close();
	
	ifstream inf("data.txt");
	inf>>name1;
	inf>>cost1;
	
	cout<<"Item 1 : "<<name1<<endl;
	cout<<"Price 1 : "<<cost1<<endl;
}
