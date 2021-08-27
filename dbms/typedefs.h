#ifndef INCLUDEDSTDIO_H
    #include <stdio.h>
    #define INCLUDEDSTDIO_H
#endif

typedef struct st_Database{ FILE *fileDb; __uint128_t lastpk; char name[25]; int DB_STATUS; } Database;

typedef struct st_Table{ FILE *fileTbl; __uint128_t pk; } Table;