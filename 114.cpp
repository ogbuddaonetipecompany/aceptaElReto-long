#include <iostream>


using namespace std;

int main() {
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		int num;
		cin >> num;
		if (num > 4)
			cout << 0 << endl;
		else if (num == 4)
			cout << 4 << endl;
		else if (num == 3)
			cout << 6 << endl;
		else if (num == 2)
			cout << 2 << endl;
		else
			cout << 1 << endl;
	}
	return 0;
}
