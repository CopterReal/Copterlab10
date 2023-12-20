#include<iostream>
#include<string>
using namespace std;

int main(){
	int i=1;
	int A=0,B=0,C=0,D=0,F=0;
	char grade;
	int count[5] = {A,B,C,D,F}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i++ << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		cin.ignore();
		if(grade=='0'){
			break;
		}
		if(grade=='A'){
			A = A+1;
		}else if(grade=='B'){
			B = B+1;
		}else if(grade=='C'){
			C = C+1;
		}else if(grade=='D'){
			D = D+1;
		}else if(grade=='F'){
			F = F+1;
		}else if(grade != count[5]){ 
			cout << "Wrong input. Please input again.\n";
			i=i-1;

		}
	}while(true);{

	}
	
	
	cout << "In total " << i-2 << " students.\n";
	cout << "A = " << A <<", ";
	cout << "B = " << B <<", ";	
	cout << "C = " << C <<", ";
	cout << "D = " << D <<", ";	
	cout << "F = " << F;
	
	return 0;
}
