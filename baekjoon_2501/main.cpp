#include <iostream>
using namespace std;

int main()
{
	int p, q, qn, c = 0;
	cin >> p >> q;
	for (int i = 1; i <= p; i++) {
		if (p % i == 0) {
			c++;
			qn = i;
			if (q == c) {
				cout << qn;
				return 0;
			}
		}
	}
	cout << 0;
	return 0;
}