#include <iostream>


using namespace std;
// 2460
// 1234
// 2
// -1

// SI
// NO
// SI
int main() {
	string str = "";
	do{
		bool ok = true;
		getline(cin, str);
		if(str[0] != '-'){

					if (int(str[str.length() - 1])%2 != 0)
						ok = false;

				cout << (ok? ("SI"):("NO")) << endl;
		}
	}while(str[0] != '-');


	return 0;
}
