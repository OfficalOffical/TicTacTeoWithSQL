#include "ConMake.h"

int ConMake::mainCon(MYSQL * conn)
{
    MYSQL_ROW row;
    MYSQL_RES* res;

    conn = mysql_real_connect(conn, "foo", "bar", "foo", "bar", 3306, NULL, 0);
   
    if (conn) {
        cout << "Successfully connected to Database"<<endl;
        return 1;
    }
    else {
        cout << "Unable to connect Database";
        return 0;
    }
}

