#include <iostream>
#include <string>
using namespace std;
/***********************************************************************************
功能：输出输入串的反串
作者：Side
时间：2017/11/11
***********************************************************************************/
string f(string s)
{
	if (s.length() <= 1)
		return s;
	return f(s.substr(1)) + s.substr(0,1);
}

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	cout << f(s) << endl;

	return 0;
}