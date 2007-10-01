#ifndef COMMANDMAKEANDACTIVATEEVENT_H
#define COMMANDMAKEANDACTIVATEEVENT_H

#include "Task.h"
#include "Event.h"
#include "CharmCommand.h"

class QObject;

class CommandMakeAndActivateEvent : public CharmCommand
{
    Q_OBJECT

public:
    explicit CommandMakeAndActivateEvent( const Task&, QObject* parent );
    ~CommandMakeAndActivateEvent();

    bool prepare();
    bool execute( ControllerInterface* );
    bool finalize();

private:
    Task m_task; // the task we send to the controller
    Event m_event; // the event the controller has created
};

#endif
