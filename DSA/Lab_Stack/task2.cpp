//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class t>
//class AbstractStack {
//public:
//    AbstractStack(int max) {
//        this->max = max;
//        arr = new t[max];
//        currentSize = 0;
//    }
//    virtual void push(t value) = 0;
//    virtual t pop() = 0;
//    virtual t top() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//    virtual ~AbstractStack() { delete[] arr; }
//protected:
//    int currentSize;
//    int max;
//    t* arr;
//};
//
//template<class t>
//class myStack : public AbstractStack<t> {
//public:
//    myStack(int max) : AbstractStack<t>(max) {}
//
//    t pop() override {
//        if (!this->isEmpty()) {
//            this->currentSize--;
//            return this->arr[this->currentSize];
//        }
//        else {
//            cout << "Stack is empty\n";
//            return t();  
//        }
//    }
//
//    void push(t value)  {
//        if (!this->isFull()) {
//            this->arr[this->currentSize] = value;
//            this->currentSize++;
//        }
//        else {
//            cout << "Stack is full\n";
//        }
//    }
//
//    t top() const  {
//        if (!this->isEmpty()) {
//            return this->arr[this->currentSize - 1];
//        }
//        else {
//            cout << "Stack is empty\n";
//            return t();  
//        }
//    }
//
//    bool isEmpty() const  {
//        return this->currentSize == 0;
//    }
//
//    bool isFull() const  {
//        return this->currentSize == this->max;
//    }
//
//    void display() const {
//        for (int i = 0; i < this->currentSize; i++) {
//            cout << this->arr[i] << " ";
//        }
//        cout << endl;
//    }
//
//    ~myStack() {
//        cout << "Stack destroyed\n";
//    }
//};
//
//template <class t>
//void reverse(AbstractStack<t>*& obj, AbstractStack<t>*& obj1) {
//    while (!obj->isEmpty()) {
//        obj1->push(obj->pop());
//        cout << obj1->top() << endl;
//    }
//    
//
//}
//
//int main() {
//    AbstractStack<string>* obj = new myStack<string>(5);
//    AbstractStack<string>* objreverse = new myStack<string>(5);
//
//    while (true) {
//        cout << "\nSelect an option:\n";
//        cout << "1: Add Book Name\n";
//        cout << "2: Remove Last Book\n";
//        cout << "3: Check if Space is Available\n";
//        cout << "4: Check if Stack is Full\n";
//        cout << "5: Display Books\n";
//        cout << "6: Display Books in Reverse Order\n";
//        cout << "Any other key to EXIT\n";
//
//        int n;
//        cin >> n;
//        cin.ignore();  
//
//        if (n == 1) {
//            string value;
//            cout << "Enter book name: ";
//            getline(cin, value);  
//            obj->push(value);
//        }
//        else if (n == 2) {
//            cout << "Removed book: " << obj->pop() << endl;
//        }
//        else if (n == 3) {
//            cout << (obj->isEmpty() ? "Stack is empty\n" : "Stack has space\n");
//        }
//        else if (n == 4) {
//            cout << (obj->isFull() ? "Stack is full\n" : "Stack is not full\n");
//        }
//        else if (n == 5) {
//            cout << "Books in stack:\n";
//            dynamic_cast<myStack<string>*>(obj)->display();
//        }
//        else if (n == 6) {
//            cout << "Books in reverse order:\n";
//            reverse(obj, objreverse);
//            dynamic_cast<myStack<string>*>(objreverse)->display();
//            reverse(objreverse, obj);
//        }
//        else {
//            break;
//        }
//    }
//
//    delete obj;
//    delete objreverse;
//
//    return 0;
//}
