#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Classes.h"
TEST_CASE( "Arguments initialized") {
    B b1(1, 2);
    REQUIRE( b1.get_y() == 2);
}
