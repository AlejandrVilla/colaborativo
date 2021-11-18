#include <iostream>
#include "bheap.h"
using namespace std;

int main()
{
    BHeaps<int> BH;
    BH.Insert(7);
    BH.print();
    BH.Insert(3);
    BH.print();
    BH.Insert(8);
    BH.print();
    BH.Insert(2);
    BH.print();
    BH.Show_Dot();

    return 1;
}