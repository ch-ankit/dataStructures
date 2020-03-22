#include <iostream>
#include "circularQueue.h"
int main()
{
    circularQueue queue1;
    queue1.enqueue(1), queue1.enqueue(2), queue1.enqueue(3), queue1.enqueue(4);
    queue1.display();
    queue1.dequeue();
    queue1.display();
    //Circular queue
    queue1.enqueue(5);
    //Queue Overflow
    queue1.enqueue(6);
    queue1.display();
    //Dequeue and underflow;
    for (int i = 0; i < 4; i++)
    {
        std::cout << queue1.dequeue() << " ";
    }
    std::cout << " \n";
    queue1.dequeue();
    queue1.display();
}
