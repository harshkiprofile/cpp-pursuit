#include <iostream>
#include <string>
using namespace std;
#define Log(x) cout << x << endl;

class MyStr {
private:
	string p_str;

public:
	MyStr(const char* p_str)
		: p_str(string(p_str)) {
	}

	void upper() {
		int i = 0;
		while (p_str[i] != '\0') {
			p_str[i] = (p_str[i] > 96 && p_str[i] < 123) ? p_str[i] - 32 : p_str[i];
			i++;
		}
	}

	void lower() {
		int i = 0;
		while (p_str[i] != '\0') {
			p_str[i] = (p_str[i] > 64 && p_str[i] < 91) ? p_str[i] + 32 : p_str[i];
			i++;
		}
	}
	
	void print() {
		Log(p_str);
	}
};

int main() {
	MyStr MyStr1 = "hello world";
	MyStr1.upper();
	MyStr1.print();
	MyStr1.lower();
	MyStr1.print();
	
}
