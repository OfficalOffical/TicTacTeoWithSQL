#pragma once

#include <iostream>
#include <sstream>
#include "mysql.h"

using namespace std;

class ConMake {
   public:
      static int mainCon(MYSQL * conn); // connects everything
      static void deleteInside(MYSQL * conn);
      static void showInside(MYSQL * conn);
};
