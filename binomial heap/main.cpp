#include <iostream>
#include <fstream>
#include "bheap.h"
using namespace std;

int main()
{
    BHeaps<int> BH;
    BH.Insert(7);
    // BH.print();
    BH.Insert(3);
    // BH.print();
    BH.Insert(8);
    // BH.print();
    BH.Insert(4);
    BH.Insert(64);
    BH.Insert(1);
    BH.Insert(10);
    // BH.print();
    BH.Show_Dot();

    return 1;
}