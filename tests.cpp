#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "unindent.h"
#include "indent.h"

TEST_CASE("unindent.cpp"){
    CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
}//end funcs.cpp test cases

TEST_CASE("indent.cpp"){
    CHECK(countChar("SIASOOOAPPP", 'O') == 3);
}//end indent.cpp test cases