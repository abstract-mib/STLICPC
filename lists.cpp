#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void) {
	// Internally it is doubly linked lists
	list<int> l;
	l.push_back(0);

	for (int i = 0; i < 10; i++) {
		l.push_back(i+1);
	}

	//Using Iterators
	// Included in algorithm standard library
	list<int> :: iterator itr = find(l.begin(), l.end(), 8);
	l.insert(itr, 5);
	itr = find(l.begin(), l.end(), 7);
	l.erase(itr);

	for(list<int>::iterator it=l.begin(); it!=l.end(); it++) {
		cout << *it << endl;
	}

	// Splice (Order of O(n);
	// No Other container has this property
	return 0;
}
