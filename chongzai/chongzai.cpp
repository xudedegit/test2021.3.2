#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;

};
person operator+(person& p1, person& p2)
{
	person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
	
}
int main()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 5;
	person p2;
	p2.m_a = 5;
	p2.m_b = 5;
	person p = p1 + p2;
	cout << "p的m_a为: " << p.m_a << endl;
	cout << "p的m_b为: " << p.m_b << endl;
	system("pause");
	return 0;
}