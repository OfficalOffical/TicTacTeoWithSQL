#include "ConMake.h"

int ConMake::mainCon(MYSQL * conn) {
   conn = mysql_real_connect(conn, "srvc65.turhost.com", "sefakalk_sef", "sefakalkan!", "sefakalk_HomeWork", 3306, NULL, 0);

   if (conn) {
      cout << "Successfully connected to Database" << endl;

      return 1;
   } else {
      cout << "Unable to connect Database";
      return 0;
   }
}

void ConMake::deleteInside(MYSQL * conn) {

   // DELETE FROM `Game2`
   mysql_query(conn, "DELETE FROM `Game2`"); // could be improved by adding Game + int like did in main so could be deleted on like  (DELETE FROM Game+int)
}

void ConMake::showInside(MYSQL * conn) {

   MYSQL_ROW row;
   MYSQL_RES * res;

   mysql_query(conn, "SELECT * FROM Game2"); // We could also do the same thing to game2 
   res = mysql_store_result(conn);
   while (row = mysql_fetch_row(res)) {
      printf("ID: %s, Name: %s\n", row[0], row[1]);
   }
}
