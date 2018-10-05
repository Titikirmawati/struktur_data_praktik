#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

	class rata_std {
	friend ostream& operator<<(ostream&, rata_std&);
	friend istream& operator>>(istream&, rata_std&);
	
	public:
	float rata();
	float STD();
	private:
	long sqrt(int n) { return(n*n); }
	int n; 
	int A[20]; 
	};

	istream& operator>>(istream& in, rata_std & a){
	cout << "Banyaknya data : ";
	cin >> a.n;
	for (int i = 0; i < a.n; i++){
		cout << "Masukkan Data : " << i+1 << " = ";
		cin >> a.A[i];
	}
	return in;
	}

	float rata_std ::rata(){
		float total=0;
	for (int i = 0; i<n; i++) total = total + A[i];
		return(total/n);
	}

	float rata_std::STD (){
		 float rerata = rata();
	float jumlah=0.0;
	for (int i = 0; i<n; i++)
		jumlah = jumlah + sqrt(A[i] - rerata);
	return(sqrt (jumlah/(n-1)));
	}

	ostream& operator<<(ostream& out, rata_std& a) {
	cout<<"\nBilangan adalah	= " << a.rata();
	cout <<"\nStandar deviasi	= " << a.STD();
	
	return out;
	}

	int main() {
	rata_std  run;
	cin >> run;
	cout << run;
}
