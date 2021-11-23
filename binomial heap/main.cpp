#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <set>
#include "bheap.h"

using namespace std;

int main(){
    srand(time(NULL));
    BHeaps<int> BH;
    set<int> norep;
    for(int i=0;i<50;++i){
        norep.insert(250+rand()%(421-250));
    }
    for(int i:norep){
        BH.Insert(i);
    }
    BH.Show_Dot();
    BH.Extrac_Min();
    //BH.Show_Dot();
    return 1;
}