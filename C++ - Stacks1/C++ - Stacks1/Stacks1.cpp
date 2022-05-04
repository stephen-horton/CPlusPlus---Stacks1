#include <iostream> 
#include <stack> 
using namespace std;

int main() {

	stack<int> st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	while (!st.empty()) {
		cout << ' ' << st.top();
		st.pop();
	}
	//output:
	// 4 3 2 1

	cout << "\n";

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	st.pop();
	st.pop();

	while (!st.empty()) {
		cout << ' ' << st.top();
		st.pop();
	}
	//output:
	// 2 1

	return 0;
}