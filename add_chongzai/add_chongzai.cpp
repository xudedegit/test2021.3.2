#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//加号运算符重载
using namespace std;
class person
{
public:
	person operator+ (person&p)
	{
		person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
public:
	int m_A;
	int m_B;
};
//person operator+(person& p1, person& p2)
//{
//	person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//
//}
person operator+(person& p1, int num)
{
	person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;

}
int main()
{

	person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	person p2;
	p2.m_A = 11;
	p2.m_B = 11;
	person p;
	/*p = p1 + p2;*/
	/*p = operator+(p1, p2);*/
	p = p1 + p2;
	person p3;
	p3 = p1 + 100;
	cout << "p的m_A值为：" << p.m_A << endl;
	cout << "p的m_B值为：" << p.m_B << endl;

	cout << "p3的m_A值为：" << p3.m_A << endl;
	cout << "p3的m_B值为：" << p3.m_B << endl;
	system("pause");
	return 0;
}