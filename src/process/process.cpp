#include<iostream>
#include "process.h"
using std::cout,std::endl;

void Process::planProcess()
{
    cout<<"Planning Process"<<endl;
    my_map.mapInfo();
    cout<<"Planning Done!"<<endl;    
}

