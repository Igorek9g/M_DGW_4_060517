//
// Created by student on 29.04.17.
//

#include "EventAct.hh"
#include "Run.hh"

void EventAct::BeginOfEventAction(const G4Event *event)
{
    flag = 0;
    /*G4cout<<"\n\t Begin Works IN EVENTACT.CC\n";
    Run* run = static_cast<Run*>(G4RunManager::GetRunManager()->GetNonConstCurrentRun());
    run->SetNewEvent();*/
}

void EventAct::EndOfEventAction(const G4Event *event)
{
    G4cout<<"\t EndWorks\n";
    Run* run = static_cast<Run*>(G4RunManager::GetRunManager()->GetNonConstCurrentRun());
    run->SetNewEvent();

}