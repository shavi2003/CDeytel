#include <iostream>
using namespace std;
#include "human.h"
#include "human.cpp"

int main()
{
    
    // declaring humans by human class
    Human Rishi_Sunak(170, 70, true, true, false, true), 
    Alice_Schmidt(179, 55, false, true, false, false), Kyle_Broflowski;
    

    //test to see if our get-set functions work
    //------------------------------------------------------------------------------------
    /*
    cout << Rishi_Sunak.getJewishHeritage(); 
    
    Rishi_Sunak.setHeight(199);
    cout << Rishi_Sunak.getHeight();*/

    //------------------------------------------------------------------------------------

    Rishi_Sunak.SkillChecker();
    Rishi_Sunak.getHumanHas();


}
