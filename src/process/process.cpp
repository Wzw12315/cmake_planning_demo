#include<iostream>
#include "process.h"
#include <Eigen/Dense>
using std::cout,std::endl;
using namespace Eigen;
void Process::planProcess()
{
    cout<<"Planning Process"<<endl;
    my_map.mapInfo();

    MatrixXd m(2,2);
    m(0,0)=3;
    m(0,1)=2;
    m(1,0)=4;
    m(1,1)= m(1,0)+ m(0,1);
    cout<<m<<endl;


    cout<<"Planning Done!"<<endl;    
}

