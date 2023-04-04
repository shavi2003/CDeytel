#ifndef HUMAN_H
#define HUMAN_H

//creating human class; enums are skills

class Human{
public:


    //enums and the constructor of a class with initial vaulues

    enum Skill {Swimming, OOP, Reading, Running, Communicative, nothing};

    Human(int = 180, int = 75, bool = true, bool = true, bool = true, bool = true);

    //----------------------------------------------------------------------------------------
    // function which checks if some particular individual has some particular skills based on some parameters
    void SkillChecker();

    //----------------------------------------------------------------------------------------
    //utility function
    void setHuman(int, int, bool, bool, bool, bool);
    

    //----------------------------------------------------------------------------------------
    //setter functions

    void setHeight(int);
    void setWeight(int);
    void setHigher(bool);
    void setSecondary(bool);
    void setJewishHeritage(bool);
    void setEdX(bool);

    //----------------------------------------------------------------------------------------
    // getter funcions

    int getHeight() const;
    int getWeight() const;
    bool getHigher() const;
    bool getSecondary() const;
    bool getJewishHeritage() const;
    bool getEdX() const;
    void getHumanHas() const;

     //----------------------------------------------------------------------------------------
     //again, utility function, used for SkillCheck function

    void insertAtEnd(Skill [], int, Skill);

     //----------------------------------------------------------------------------------------

private:

    // array of skill type is used for saving skills of each human

    int Height;
    int Weight;
    bool HigherEducation;
    bool SecondaryEducation;
    bool FromJewishFamily;
    bool EdXcertificate;
    Skill HumanHas[6] = {nothing, nothing, nothing, nothing, nothing, nothing};
};





#endif