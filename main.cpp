#include <linkedlist.h>
using namespace std;

int main()
{
    linkedlist z;
    linkedlist c;
    z.push_front(52);
    z.push_front(24);
    z.push_front(62);
    z.pop_front();
    c.push_back(52);
    c.push_back(24);
    c.push_back(62);
    c.pop_back();
    z.print();
    c.print();
    return 0;
}
