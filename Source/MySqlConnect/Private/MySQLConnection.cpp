#include "MySQLConnection.h"
#include "MySQLConnector.h"


UMySQLConnection::UMySQLConnection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UMySQLConnection::MySQLCheckConnection()
{
	if (globalCon)
	{
		return mysql_ping(globalCon) == 0;
	}
	return false;
}

// works with 5,0 or higher
bool UMySQLConnection::MySQLCloseConnection(UMySQLConnection* Connection)
{
	return false;
}
/*
bool UMySQLConnection::MySQLCloseConnection(UMySQLConnection* Connection)
{
	try {

		if (Connection == nullptr)
		{
			mysql_library_end();
			return false;
		}

		if (Connection->globalCon != nullptr) {

			if (Connection->MySQLCheckConnection())
			{
				mysql_close(Connection->globalCon);
				Connection->globalCon = nullptr;
				mysql_library_end();
				return true;
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("MySQLCloseConnection: Connection is valid but Server does no respond!"));
			}

		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("MySQLCloseConnection: Connection is null!"));
		}
		return false;
	}
	catch (...) {
		UE_LOG(LogTemp, Error, TEXT("MySQLCloseConnection: Catch Error!"));
		return false;
	}

	return false;
}
*/