#include<iostream>
using namespace std;

//implementation using array
class queue
{
    int *arr;
    int front,rear;
    int size;

    public:
    //constroctor

    queue(int n)
    {
        arr = new int[n];
        size = n;
        front=rear=-1;
    }

    //agr queue empty hai
    bool IsEmpty()
    {
        return front==-1;
    }

    //agr queue full hai
    bool IsFull()
    {
        return (rear+1)%size==front ;
    }

    //push operation
    void push(int x)
    {
       
        if(IsEmpty())
        {
             cout<<"pushed "<<x<<" into the queue\n";
            front=rear=0;
            arr[0]=x;
        }
        else if(IsFull())
        {
            cout<<"queue is overflow\n";
            return ;
        }
        else
        {
            rear = (rear+1)%size;
            arr[rear]=x;
            cout<<"pushed "<<x<<" into the queue\n";
        }
    }
    //pop operation 
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"queue underflow";
            return;
        }

        else
        {
            if(front==rear)
            {
                cout<<"popped "<<arr[front]<<" into the queue\n";
            front=rear=-1;
            }

            else
            {
                cout<<"popped "<<arr[front]<<" into the queue\n";
            front =(front+1)%size;
            }
        }
    }

    //starting me konsa element rakha hai
    int start()
    {
        if(IsEmpty())
        {
            cout<<"queue is empty";
            return -1;
        }
        else
        return arr[front];
    }
};

int main()
{
  queue q(5);
  q.push(51);
  q.push(52);
  q.push(88);
  q.push(33);
  q.pop();
  q.push(88);
  q.push(23);
  q.pop(); 
  
  
}