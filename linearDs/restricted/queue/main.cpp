#include "queue.cpp"
int main()
{
    queue<int> obj;
    int x;
    std::cout << "Enter the elements in the queue:\n";
    if (obj.isEmpty())
        std::cout << "The Queue is empty. Nothing to dequeue\n";
    for (int i = 0; i < MAX_SIZE; i++)
    {
        std::cin >> x;
        obj.enqueue(x);
    }
    if (obj.isFull())
        std::cout << "The Queue is full. Overflow~~~~\n";
    for (int i = MAX_SIZE; i > 0; i--)
    {
        std::cout << obj.dequeue() << "\t" << std::endl;
    }
}