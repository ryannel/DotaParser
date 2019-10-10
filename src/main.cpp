#include <sqlite3.h>
#include <stdio.h>
#include "namePrinter.h"
#include "testLib/testLib.h"

int main()
{
    NamePrinter obj; 
    obj.printname("boo");

    TestLib testLib;
    testLib.printname("testLib");

    printf("%s\n", sqlite3_libversion());
    return 0;
}