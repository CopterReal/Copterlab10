#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string textline;
	getline(source,textline);
	dest << "-------------------- BOOM ---------------------\n";
	dest << "AR CHI\n";
	while(getline(source,textline)){
		cout << textline << '\n';
	}
	getline(source,textline);
	dest << "-------------------- HA!! ---------------------";
	

    source.close();
    dest.close();
	return 0;
}
