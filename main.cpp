#include <linkedlist.h>
using namespace std;

int main()
{
    linkedlist z;
    linkedlist c;
    z.push_back(52);
    z.push_back(24);
    z.push_back(82);
    z.push_back(28);
    z.insert(55, 2);
    z.print();
    return 0;
}
