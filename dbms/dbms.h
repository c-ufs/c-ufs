#ifndef INCLUDEDcDataTypes
    #include "..//headers//cDataTypes.h"
    #define INCLUDEDcDataTypes
#endif

// #region -> Primary Data Files
#ifndef INCLUDEDSTDIO_H
    #include <stdio.h>
    #define INCLUDEDSTDIO_H
#endif

#ifndef INCLUDEDSTRING_H
    #include <string.h>
    #define INCLUDEDSTRING_H
#endif

#ifndef INCLUDEDSTDLIB_H
    #include <stdlib.h>
    #define INCLUDEDSTDLIB_H
#endif
// #endregion -> Primary Data Files

typedef struct st_Database
{
    FILE *fileDb;
    __uint128_t lastpk;
    char name[25];
} Database;

typedef struct st_Table
{
    FILE *fileTbl;
    __uint128_t pk;
} Table;

Table table_consructor(FILE *fileTbl, __uint128_t pk)
{
    Table table;
    table.fileTbl = fileTbl;
    table.pk = pk;

    return table;
}

Table openTable(string tableName)
{
    string fileName = "..//.records//";
    strcat(fileName, tableName);
    strcat(fileName, ".db");
    string fileMode = "w+";
    FILE *fileTbl = tryOpening(fileName, fileMode);

    __uint128_t pk = getLastPK(tableName);

    Table table; //= table_constructor(fileTbl,...);
    return table;
}

FILE *tryOpening(string fileName, string fileMode)
{
    FILE *fp = fopen(fileName, fileMode);

    if(fp == NULL)
        perror("Exiting....\nFILE error :"), exit(1);

    return fp;
}

void closeTable(Table table)
{
    FILE *fp = table.fileTbl;
    fclose(fp);
}

__uint128_t getLastPK(string tableName)
{
    return 0;
}