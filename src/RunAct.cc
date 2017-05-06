//
// Created by student on 29.04.17.
//

#include <G4ios.hh>
#include <EventAct.hh>
#include "RunAct.hh"
//#include "RunGen.hh"
#include "Run.hh"
#include "G4UserSteppingAction.hh"
#include "StepAction.hh"


void RunAct::EndOfRunAction (const G4Run *aRun){
    G4int result;
    std::cout<<"\n\n STD number of threads = "<<"\n";


    const  Run* run2 = static_cast<const Run*>(aRun);

    std::cout<<"number of threads = "<<result<<"\n";
}

G4Run* RunAct::GenerateRun(){
    return new Run;
}


/*void RunAct::EndOfRunAction (const G4Run *aRun){
    G4int result;
    G4cout<<"number of threads = "<<result<<"\n";

}

G4Run* RunAct::GenerateRun(){
    return new Run;
}
*/
/*class StepAct: public G4UserSteppingAction {
    StepAct(EventAct *act) {}

    ~StepAct() {}

    void UserSteppingAction(const G4Step *step) {
        G4String vname = step->GetTrack()->GetVolume()->GetLogicalVolume()->GetName();
    if(vname =="Log_Tubs")
        Act->SetFlag();
    }
};*/