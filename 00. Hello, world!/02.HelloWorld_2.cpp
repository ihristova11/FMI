//Write a program which asks the user to enter his name and then print 'Hello, [whatever the user entered]!'

#include<iostream>
#include<string>

using namespace std;

int main() {
	string input;
	cin >> input;
	cout << "Hello, " << input << "!" << endl;
}