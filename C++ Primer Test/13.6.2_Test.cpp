#include <iostream>  
#include <vector>
#include "String.h"
using namespace std;

int main() //��ϰ13.50   //�������ƶ����캯����	�伸������������ԭ�еĿ������캯��
{
	String s0;
	String s1("hello");
	String s2(s0);
	String s3 = s1;
	s2 = s1;
	for (auto &s : s1)
		cout << s;
	cout << s1.size() << endl;

	cout << endl;

	foo(s1);
	bar(s1);

	cout << endl;

	foo("temporary");
	bar("temporary");
	String s4 = baz();   //��baz��������ʱ��ԭ�еĿ������캯����������ƶ����캯������Ϊ���ڷ���ʱΪ�ַ���������ɵ���ֵ����
	String &s5 = baz();
	baz();//baz()��ʼ��һ��C���Ȼ�������β�ʵ��ת��һ�ο������캯��

	cout << endl;

	std::vector<String> svec;        //���ڴ浽���ڴ��ת�����̾�������ƶ����캯�����������ݵĶ������ھ�Ϊ��ֵ�ı���������Ϊ��������
	cout << svec.capacity() << endl;
	svec.push_back(s0);  //�����ݶ��룬���������Ŀ������캯��
	cout << svec.capacity() << endl;
	svec.push_back(s1);  //svec�ڴ����󣬾��ڴ��Ԫ�ص����ڴ���ƶ�����һ�Σ������ݶ��룬���������Ŀ������캯��һ��
	cout << svec.capacity() << endl;
	svec.push_back(baz()); //svec�ڴ����󣬾��ڴ��Ԫ�ص����ڴ���ƶ��������Σ������ݶ��룬���������Ŀ������캯��һ�Σ�baz()��������һ��Cһ�ο�������
	cout << svec.capacity() << endl;
	svec.push_back("good job");  //svec�ڴ����󣬾��ڴ��Ԫ�ص����ڴ���ƶ��������Σ������ݶ��룬���������Ŀ������캯��һ�Σ�good job��ΪC�ַ���һ��Cһ�ο�������
	cout << svec.capacity() << endl;
	svec.push_back(s1);//svec�ڴ����󣬾��ڴ��Ԫ�ص����ڴ�Ŀ����ƶ��ĴΣ������ݶ��룬���������Ŀ������캯��һ�Σ�
	cout << svec.capacity() << endl;
	svec.push_back(s1);//�����ݶ��룬���������Ŀ������캯��һ��//��Ϊ��ʱ��cap�Ѿ������6�������ݲ���ʱ����Ҫ�����ڴ��С��
	cout << svec.capacity() << endl;
	svec.push_back(s1);//svec�ڴ����󣬾��ڴ��Ԫ�ص����ڴ���ƶ��������Σ������ݶ��룬���������Ŀ������캯��һ�Σ�
	cout << svec.capacity() << endl;

	for (auto &s : svec)
	{
		for (auto &ss : s)
			cout << ss;
		cout << " " << s.size() << " ";
	}
	cout << endl;
}