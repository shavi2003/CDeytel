#include <iostream>
#include "human.h"
using namespace std;

Human::Human(int h, int w, bool high, bool secondary, bool jew, bool edx)
{
    setHuman(h, w, high, secondary, jew, edx);
}

//----------------------------------------------------------------------------------------

void Human::setHeight(int h)
{Height = (h >= 150 && h <= 210) ? h : 180; }

void Human::setWeight(int w)
{Weight = (w >= 50 && w <= 200) ? w : 75; }

void Human::setHigher(bool high)
{HigherEducation = (high == true || high == false) ? high : true; }

void Human::setSecondary(bool secondary)
{SecondaryEducation = (secondary == true || secondary == false) ? secondary : true; }

void Human::setJewishHeritage(bool jew)
{FromJewishFamily = (jew == true || jew == false) ? jew : true; }

void Human::setEdX(bool edx)
{EdXcertificate = (edx == true || edx == false) ? edx : true; }

void Human::setHuman(int h, int w, bool high, bool secondary, bool jew, bool edx)
{
    Height = (h >= 150 && h <= 210) ? h : 180;
    Weight = (w >= 50 && w <= 200) ? w : 75;
    HigherEducation = (high == true || high == false) ? high : true;
    SecondaryEducation = (secondary == true || secondary == false) ? secondary : true;
    FromJewishFamily = (jew == true || jew == false) ? jew : true;
    EdXcertificate = (edx == true || edx == false) ? edx : true;
}

//----------------------------------------------------------------------------------------

int Human::getHeight() const {return Height;};
int Human::getWeight() const {return Weight;};
bool Human::getHigher() const {return HigherEducation;};
bool Human::getSecondary() const {return SecondaryEducation;};
bool Human::getJewishHeritage() const {return FromJewishFamily;};
bool Human::getEdX() const {return EdXcertificate;};

//----------------------------------------------------------------------------------------

void Human::SkillChecker()
{
    if(EdXcertificate == true)
        HumanHas[5] = OOP;
    if(FromJewishFamily == true)
        HumanHas[4] = Running;
    if(SecondaryEducation == true)
        HumanHas[3] = Communicative;
    if(HigherEducation == true)
        HumanHas[3] = Reading;
    if(Height >= 178 && Weight <= 80)
        HumanHas[2] = Swimming;
    
}

//----------------------------------------------------------------------------------------
// Ignore this part; I initially thought I may use it but I haven't; anyways keeping just in case



void Human::insertAtEnd(Skill arr[],int sizeOfArray, Skill element)
{
    arr[sizeOfArray-1] = element;
}

//----------------------------------------------------------------------------------------

void Human::getHumanHas() const
{
    cout << "This individual has the following skills:" << endl;
    for(int i = 0; i <= 5; i++)
    {
        if(HumanHas[i] == 0)
            cout << "Swimming" << endl;
        else if(HumanHas[i] == 1)
            cout << "OOP" << endl;
        else if(HumanHas[i] == 2)
            cout << "Reading" << endl;
        else if(HumanHas[i] == 3)
            cout << "Running" << endl;
        else if(HumanHas[i] == 4)
            cout << "Communicative" << endl;
        else
        {}
    }
}

//----------------------------------------------------------------------------------------
// Ignore this part below


/*

void Human::SkillChecker()
{
    if(EdXcertificate == true)
        insertAtEnd(HumanHas, sizeof(HumanHas), OOP);
    if(FromJewishFamily == true)
        insertAtEnd(HumanHas, sizeof(HumanHas), Running);
    if(SecondaryEducation == true)
        insertAtEnd(HumanHas, sizeof(HumanHas), Communicative);
    if(HigherEducation == true)
        insertAtEnd(HumanHas, sizeof(HumanHas), Reading);
    if(Height >= 178 && Weight <= 80)
        insertAtEnd(HumanHas, sizeof(HumanHas), Swimming);
    
}




void Human::getHumanHas() const
{
    int i = 0;
    cout << "skills that this person has are: " << endl;
    while(i < int(sizeof(HumanHas)))
    {
        cout << HumanHas[i] << endl;
        i++;
    }
}

*/