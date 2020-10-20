#pragma once
#include "Connection.h"

// Interface between database and reservations for both types
class CombinedConnection :
    public Connection
{
public:
    // Initializers

    // Inits database
    CombinedConnection();

private:
    void InitDatabase() override;
};
