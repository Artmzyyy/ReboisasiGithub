#include <iostream>
using namespace std;

int main(){
	int f1 = 0;
	int f2 = 1;
	int temp, n;
	
	cout << "Masukkan jumlah suku: ";
	cin >> n;
	
	cout << f1 << ", " << f2 << ", ";
	for(int i = 0; i <= n; i++){
		temp = f1 + f2;
		cout << temp << ", ";
		f1 = f2;
		f2 = temp;
	}
	
}
