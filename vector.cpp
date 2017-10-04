/** Containers: First is vectors which are
  * similar to arrays.
  */

#include <iostream>
#include <vector>


using namespace std;

int main(void) {
	vector<int> v(10);

	for(int i = 0; i < v.size(); i++) {
		v[i] = i * 10;
	}
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << v.empty() << endl;
	return 0;
}
