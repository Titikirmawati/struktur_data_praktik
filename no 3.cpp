#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
	string kata;
	cout<<"Masukkan kata : ";
	cin>>kata;
	cout<<endl;

	int a=kata.length()-1;
	for(a;a>=0;a--){
	for(int b=0;b<=a;b++){
	cout<<kata[b];
	}
	cout<<endl;
	}
	getch();
}
