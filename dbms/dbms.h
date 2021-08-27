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

Table table_constructor(FILE *fileTbl, __uint128_t pk)
{
    Table table;
    table.fileTbl = fileTbl;
    table.pk = pk;

    return table;
}

Table *openTable(string tableName)
{
    string fileName = "..//.records//";
    strcat(fileName, tableName);
    strcat(fileName, ".db");
    string fileMode = "w+";
    FILE *fileTbl = tryOpening(fileName, fileMode);

    __uint128_t pk = getLastPK(tableName);
    if(pk == 0)
    {
        //createTable();
    }

    Table table = table_constructor(fileTbl, pk);
    return &table;
}



FILE *tryOpening(string fileName, string fileMode)
{
    FILE *fp = fopen(fileName, fileMode);

    if(fp == NULL)
        perror("Exiting....\nFILE error :"), exit(1);

    return fp;
}






void closeTable(Table *table)
{
    fclose(table->fileTbl);
}








__uint128_t getLastPK(string tableName)
{
    Database db;
    return 0;
}