#ifndef INCLUDEDcDataTypes
    #include "..//headers//cDataTypes.h"
    #define INCLUDEDcDataTypes
#endif
#ifndef INCLUDEDtypedefs
    #include "..//dbms//typedefs.h"
    #define INCLUDEDtypedefs
#endif
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

// For Table
Table table_constructor(FILE *fileTbl, __uint128_t pk)
{
    Table table;
    table.fileTbl = fileTbl;
    table.pk = pk;

    return table;
}

__uint128_t createTable(string tableName)
{
    //create table logic
    return 1;
}

//End For Table

// For FILE
FILE *tryOpening(string fileName, string fileMode)
{
    FILE *fp = fopen(fileName, fileMode);

    if(fp == NULL)
        perror("Exiting....\nError :"), exit(1);

    return fp;
}
//End For FILE

//For Database
__uint128_t getLastPK(string tableName)
{
    Database db;
    return 0;
}
//End For Database