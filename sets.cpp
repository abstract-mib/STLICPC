/** Sets store the data in binary search tree format
  * That is why we cannot control the order of data in sets
  * It is always sorted in ascending order
  * Set is immutable i.e they are read only 
  * So to change the value, you need to erase the value
  * add the new one
  */

#include <iostream>
#include <set>

using namespace std;

int main(void) {
	set<int> s;

	// Adding value in descending order
	for (int i = 0; i < 10; i++) {
		s.insert(10 - i);
	}

	set <int> :: iterator it;
	it = s.find(6);

	s.erase(it);

	// Getting output in ascending order
	// Thus sets are sorted always
	for(set <int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}

