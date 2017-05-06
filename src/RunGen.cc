//
// Created by student on 29.04.17.
//
#include <G4ios.hh>
#include <EventAct.hh>
#include "RunAct.hh"
#include "RunGen.hh"

/*void RunAct::BeginOfRunAction (const G4Run *aRun) {
    G4cout << "\n\t Begin works\n = " << "\n";
}
*/

RunGen::RunGen()
{
    G4cout<<"Run generator is created successfully\t\t\t\t\tOK!!!"<<G4endl;
}

RunGen::~RunGen()
{ }

G4Run* RunGen::GenerateRun()
{
    return new Run;
}