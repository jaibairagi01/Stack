#include <iostream>
#include <stack>
using namespace std;

class TwoStack
{

    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initalize TwoStack
    TwoStack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[size];
    }

    // Push Stack1
    void push1(int num)
    {
        if (top2 - top1 > 0)
        {
            top1++;
            arr[top1] = num;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Push Stack2
    void push2(int num)
    {
        if (top2 - top1 > 0)
        {
            top2--;
            arr[top2] = num;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop from stack1 and return popped element
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack2 and return popped element
    int pop2()
    {
        if (top2 >= 0)
        {
            int ans = arr[top2];
            top2++;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{

    TwoStack st(6);

    st.push1(22);
    st.push1(18);
    cout << st.pop1();
    st.push2(68);
    st.push2(10);
    cout << st.pop2();

    return 0;
}