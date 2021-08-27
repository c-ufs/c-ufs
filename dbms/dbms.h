#include "llAPIs.h"

// Usage :: Database *db = getConnection(string databaseName, string userName, string password);
Database *getConnection(string databaseName, string userName, string password)
{
    Database *db;
    db->DB_STATUS = 0;

    if(db->DB_STATUS)
        return db;
}

//For Table

// Usage :: Table *table = openTable(string tableName);
Table *openTable(string tableName)
{
    //if(CONN == 1)
    string fileName = "..//.records//";
    strcat(fileName, tableName);
    strcat(fileName, ".db");
    string fileMode = "w+";
    FILE *fileTbl = tryOpening(fileName, fileMode);

    __uint128_t pk = getLastPK(tableName);
    if(pk == 0)
    {
        pk = createTable(tableName);
    }

    Table *table = table_constructor(fileTbl, pk);
    return table;
}

// Usage :: int res = closeTable(Table *table);
int closeTable(Table *table)
{
    if(fclose(table->fileTbl))
        return 1;
    return 0;
}
//End For Table