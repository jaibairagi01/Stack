#include <iostream>
#include <stack>
using namespace std;

int main(){
     
    //creation of stack
    stack<int> s;

    //push operatio 
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //pop
    s.pop();
    s.pop();
    s.pop();

    cout << "Printing the top element " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty " << endl;
    }

    cout << "Size of stack is " << s.size() << endl;


    return 0;
}