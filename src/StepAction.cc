

#include "StepAction.hh"
#include <G4Step.hh>
#include "Run.hh"

void StepAct::UserSteppingAction(const G4Step * step) {

    G4String vname = step->GetTrack()->GetVolume()->GetLogicalVolume()->GetName();

    //if (vname =="Log_Tubs") {
        std::cout <<vname<< "\n STEP WORKS\n";
        Act->SetFlag();
    //}


}