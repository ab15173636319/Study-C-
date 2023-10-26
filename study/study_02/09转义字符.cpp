#include <iostream>
using namespace std;

int main9()
{
	//转义字符

	//换行符 \n
	cout << "hello \n world \n";
	
	//反斜杠 \\;
	cout << "\\" << endl;

	//水平制表符 \t   作用是可以整齐的输出数据
	cout << "hello\tworld" << endl;
	cout << "hellohello\tworld" << endl;
	cout << "hellohellohello\tworld" << endl;
	

	system("pause");

	return 0;
}