#include "stack.cpp"
int main()
{
    stack<int> obj;
    int x, y;
    obj.isEmpty();
    std::cout << "Enter the data to push in the stack:\n";
    for (y = 0; y < MAX_SIZE; y++)
    {
        std::cin >> x;
        obj.push(x);
    }
    obj.isFull();
    obj.up();
    for (y = MAX_SIZE; y > 0; y--)
    {
        std::cout << obj.pop() << std::endl;
    }
}