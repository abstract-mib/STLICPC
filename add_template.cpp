#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

int main(void) {
	int x = 20, y = 10;
	float a = 10.2, b = 20.3;
	cout << add<int>(x, y) << endl;
	cout << add<float>(a, b) << endl;
	return 0;
}
