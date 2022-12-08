#include <iostream>
#include "String.h"
using namespace std;

int main() {
	String str;
	str.setstr();
	cout << str.getstr();

	String str2("Hello");
	cout << str2.getstr()<<endl;
	str2.setstr();
	cout << str2.getstr();
}

