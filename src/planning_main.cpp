#include <iostream>
#include"process.h"
#include"show_result.h"
using std::cout,std::endl;

int main(int argc, char** argv)
{
    cout<<"planing start"<<endl;
    Process pro;
    pro.planProcess();
    cout<<"planing end"<<endl;

    ShowResult sh;
    sh.drawResult();
    
    return 0;
}