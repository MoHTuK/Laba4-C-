#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	using namespace std;
	string str = "";
	cout << "Enter your string " << endl;
	getline(cin, str);
	char symbol = '!';
	std::stringstream ss;
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == symbol)
			ss << i;
		else
			ss << str.at(i);
	}
	str = ss.str();

	cout << str << endl;
	return 0;
}