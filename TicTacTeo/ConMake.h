#pragma once

#include <iostream>
#include <sstream>
#include "mysql.h"

using namespace std;

class ConMake {
   public:
      static int mainCon(MYSQL * conn);
      static void deleteInside(MYSQL * conn);
      static void showInside(MYSQL * conn);
};
