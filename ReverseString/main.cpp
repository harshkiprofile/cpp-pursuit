#include <iostream>
using namespace std;

void reverseString(string& str) {
	int n = int(str.length());
	int i = 0;

	for (i; i < n / 2; i++) {
		char temp  = str[i];
		str[i]     = str[n-i-1];
		str[n-i-1] = temp;
	}
}

int main() {
	string reverseIt = "Hello World";
	reverseString(reverseIt);
	cout << reverseIt;
}
