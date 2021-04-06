// laba 2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//(ax+b)^n//

#include <iostream>
#include <math.h>
using namespace std;

int f(int n)
{
	if (n <= 1) return 1;
	else return f(n - 1) * n;
}

//int P()
//{
//	long long int a, b;
//	long long int c, s, n, N, d;
//	cout << "(ax+b)^N" << endl;
//	cout << "a: ";
//	cin >> a; cout << endl;
//	cout << "b: ";
//	cin >> b;  cout << endl;
//	cout << "N: ";
//	cin >> N;
//	s = 0;
//
//	for (long long int i = N, K = 0; i >= 0, K <= N; i--, K++)
//	{
//		s = f(N) / (f(K) * f(N - K)) * pow(a, i) * pow(b, K);
//		cout << s << endl;
//	}
//	return 0;
//	//cout << pow(a + b, N) << endl;
//}

struct Node {
	int size = 0;
	int data;
	Node* prev;
	Node* pNext /*= nullptr*/;

};

struct List {
	Node* head = nullptr;
	Node* tail = nullptr;

	int size = 0;
	void push_back(int data)
	{
		Node* temp = new Node;
		temp->pNext = NULL;
		temp->data = data;

		if (head != NULL)
		{
			temp->prev = tail;
			tail->pNext = temp;
			tail = temp;
		}
		else
		{
			temp->prev = NULL;
			head = tail = temp;
		}
	}

	void print()
	{
		Node* copy = head;
		while (copy)
		{
			cout << copy->data << " ";
			copy = copy->pNext;
		}
	}
};


int main()
{

	List list;
	Node Polinom;
	cout << "Polinom: " << endl;
	long long int a, b;
	long long int c, s, n, N, d;
	cout << "(ax+b)^N" << endl;
	cout << "a: ";
	cin >> a; cout << endl;
	cout << "b: ";
	cin >> b;  cout << endl;
	cout << "N: ";
	cin >> N;
	s = 0;

	for (long long int i = N, K = 0; i >= 0, K <= N; i--, K++)
	{
		s = f(N) / (f(K) * f(N - K)) * pow(a, i) * pow(b, K);
		list.push_back(s);
		/*cout << s << endl;*/
	}

	list.print();
}

