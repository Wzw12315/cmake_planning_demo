#include <iostream>
#include"process.h"
#include"show_result.h"
using std::cout,std::endl;

int main()
{
    cout<<"planing start"<<endl;
    Process pro;
    pro.planProcess();
    cout<<"planing end"<<endl;

    ShowResult sh;
    sh.drawResult();
    
    return 0;
}