//#include<iostream>
//using namespace std;
//template <class t>
//class AbstractStack
//{
//public:
//	AbstractStack(int max)
//	{
//		this->max = max;
//		arr = new t[max];
//		currentSize = 0;
//	}
//	virtual void push(t value) = 0;
//	virtual t pop() = 0;
//	virtual t top() const = 0;
//	virtual bool isEmpty()const = 0;
//	virtual bool isFull() const = 0;
//	virtual ~AbstractStack() { delete[]arr; }
//protected:
//	int currentSize;
//	int max;
//	t* arr;
//
//};
//template<class t>
//class myStack:public AbstractStack<t>
//{
//public:
//	myStack(int max) : AbstractStack <t> (max){}
//	 t pop()
//	 {
//		this->currentSize--;
//		return this->arr[this->currentSize];
//	 }
//	void  push(t value)
//	{
//		if (!this->isFull())
//		{
//			
//			this->arr[this->currentSize] = value;
//			this->currentSize++;
//			
//		}
//		else
//		{
//			cout << "stack is full ";
//			
//		}
//	}
//	t top() const
//	{
//		return this->arr[this->currentSize];
//	}
//	bool isEmpty() const
//	{
//		return this->currentSize == 0;
//	}
//	bool isFull() const
//	{
//		return this->currentSize == this->max;
//	}
//	void display()
//	{
//		
//		for (int i = 0; i < this->currentSize; i++)
//		{
//			cout << this->arr[i]<<" ";
//		}
//		cout << endl;
//	}
//	~myStack()
//	{
//		cout << "end";
//	}
//};
//
//int main()
//{
//	AbstractStack<int>* obj = new myStack<int>(5);
//  while (true)
//  {
//
//	cout << " Select the following options:\n";
//	cout << "press 1 to push value in stack: \n";;
//	cout << "press 2 to pop value from stack: \n";
//	cout << "press 3 to check that stack is empty or not: \n";
//	cout << "press 4 to check that stack is full or not: \n";
//	cout << "press 5 to display value of stack : " << endl;
//	cout << "press any other key for EXIT \n";
//	int n;
//	cin >> n;
//	if (n == 1)
//	{
//		int value;
//		cout << "enter  value :";
//		cin >> value;
//		obj->push(value);
//	}
//	else if (n == 2)
//	{
//		cout << obj->pop();
//	}
//	else if (n == 3)
//	{
//		cout << obj->isEmpty();
//	}
//	else if(n==4)
//	{
//		cout << obj->isFull();
//	}
//	else if (n == 5)
//	{
//		dynamic_cast<myStack<int>*>(obj)->display();
//	}
//	else
//	{
//		break;
//	}
//		
//  }
//		delete obj;
//}