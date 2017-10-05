/** Like Pointers
 *  Carry Address info not value
 *  To iterate over a set of values
 *  iterators are of different types as of containers
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(void) {
	vector <int> v;
	for(int i = 0; i < 10; i++) {
		v.push_back(rand() % 100);
	}

	for(vector<int> :: iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	cout << "Set copying..." << endl;
	set<int> s;
	copy(v.begin(), v.end(), inserter(s, s.begin()));

	for(set<int> :: iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
	
	return 0;
}
