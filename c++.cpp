#include <iostream>

using namespace std;

class Check{
	private:
		int n;
	public:
		void nhap() {
			cout << "Nhap so n kiem tra: "; cin >> this -> n;
		}
		int sum(int);
		void xuat() {
			cout << "Tong chu so bang" << sum(n) << endl;
		}
};

int Check::sum(int n){
	int dem = 0;
	while(n != 0){
		dem += n % 10;
		n /= 10;
	}
	return dem;
}

int main(){
	Check x;
	x.nhap();
	x.xuat();
	return 0;
	
}
