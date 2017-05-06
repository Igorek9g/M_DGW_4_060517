#include <RunGen.hh>
#include <EventAct.hh>
#include "ActionInit.hh"
#include <RunAct.hh>
#include <RunGen.hh>
#include <Run.hh>

ActionInit::ActionInit()
{ }

ActionInit::~ActionInit()
{ }

void ActionInit::Build() const
{
    SetUserAction(new PrimaryGen());
    SetUserAction(new RunGen());


    EventAct* eventAction = new EventAct;
    SetUserAction(eventAction);
}