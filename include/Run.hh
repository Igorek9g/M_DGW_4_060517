//
// Created by student on 29.04.17.
//

#include <G4Run.hh>
#include <map>

#ifndef CPROJECT_RUN_HH
#define CPROJECT_RUN_HH

class Run : public G4Run
{
public:
    Run():result(G4int(0)){};
    ~Run(){};
    void SetNewEvent(){result++;}
    int GetResult () const {return result;}
private:
    G4int result;

};




#endif //CPROJECT_RUN_HH