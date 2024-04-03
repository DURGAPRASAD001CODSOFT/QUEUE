#include<iostream>
using namespace std;

//implement using linked list
class Node
{
    public:
    int data;
    Node* next;

    Node(int value)
    {
        data =value;
        next =NULL;
    }
};

class queue
{
    Node *front;
    Node *rear;
    public:

    queue()
    {
        front=rear=NULL;
    }

    //queue is empty
    bool IsEmpty()
    {
        return front==NULL;
    }

    //push operation
    void push(int x)
    {
        if(IsEmpty())
        {
            cout<<"pushed "<<x<<" into the queue\n";
            front = new Node(x);
            rear = front;
            return;
        }
        else
        {
            rear->next = new Node(x);
            if(rear->next==NULL)
            {
                cout<<"overflow\n";
                return;
            }
            cout<<"pushed "<<x<<" into the queue\n";
            rear = rear->next;
        }
    }

    //pop operation
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"queue underflow\n";
            return;
        }
        else
        {
            cout<<"popped "<<front->data<<" from the queue\n";
            Node *temp= front;
            front = front->next;
            delete temp;
        }
    }

    //start element find
    int start()
    {
        if(IsEmpty())
        {
            cout<<"queue is empty\n";
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};

int main()
{
    queue q;
    q.push(5);
    q.push(51);
    q.push(52);
    q.push(54);
    q.pop();
    cout<<q.start()<<endl;
    

}