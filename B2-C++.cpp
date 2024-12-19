#include <iostream>
#include <cmath>
using namespace std;

class daysonguyento {
	private:
		int N, i;
	public:
		void nhapbp() {
			cin >> N;
		}
		bool kiemtra() {
			i = 2;
			int bien_kiemtra = (N > 1);
			while (i <= sqrt(N)) {
				while(N % i == 0){
					bien_kiemtra = 0;
					break;
				}
				++i;
			}
			return bien_kiemtra;
		}
};

int main() {
	int T;
	cin >> T;
	while(T) {
		daysonguyento d;
		d.nhapbp();
		cout << (d.kiemtra() ? "YES" : "NO") << endl;
		--T;
	}
}
