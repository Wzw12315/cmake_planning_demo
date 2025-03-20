#include <iostream>
#include "show_result.h"
#include <graphics.h>

using namespace std;

void ShowResult::drawResult(){
    initgraph(1000, 800);
    setbkcolor(WHITE);
    cleardevice();
    cout<<"Drawing Result: "<<endl;
    setlinecolor(BLUE);
    setlinestyle(PS_DASH,4);
    circle(500,400,300);
    circle(500,400,200);
    
    system("pause");
    
    closegraph();

}