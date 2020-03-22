#include "linkedList.cpp"
int main()
{
    linkedList list;
    //addToHead and addToTail done;
    list.addToHead(4), list.addToTail(5), list.addToHead(3), list.addToHead(2), list.addToHead(1), list.addToTail(6);
    //display done
    list.display();
    //data search done
    std::cout << list.search(4) << "\n";
    //node deleted
    list.deleteNode(4);
    list.display();
    std::cout << list.search(4) << "\n";
    //adding 4 after 3
    node *newNode = new node();
    newNode = list.predecessor(3);
    list.add(newNode, 4);
    list.display();
}