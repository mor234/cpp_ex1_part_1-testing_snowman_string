/**
 *Test.cpp for snowman
 * AUTHORS: mor234
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>
//#include <algorithm>

/*correct build:

 HHHHH
 HHHHH
X(LNR)Y
X(TTT)Y
 (BBB)

 H- Hat 
 N- Nose/Mouth
 L- Left Eye
 R- Right Eye
 X- Left Arm
 Y- Right Arm
 T- Torso
 B- Base


 HNLRXYTB

*/



/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
std::string nospaces(std::string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {

    //genral:
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));//base case;  
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    //H- Hat
    CHECK(nospaces(snowman(21111111)) == nospaces(" ___ \n.....\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(31111111)) == nospaces("_ \n /_\\ \n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(41111111)) == nospaces(" ___ \n(_*_)\n (.,.)\n<( : )>\n( : )"));

    //N- Nose/Mouth
    CHECK(nospaces(snowman(12111111)) == nospaces("_===_\n(...)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(13111111)) == nospaces("_===_\n(._.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(14111111)) == nospaces("_===_\n(. .)\n<( : )>\n( : )"));

    //L- Left Eye
    CHECK(nospaces(snowman(11211111)) == nospaces("_===_\n(o,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11311111)) == nospaces("_===_\n(O,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11411111)) == nospaces("_===_\n(-,.)\n<( : )>\n( : )"));


    //R- Right Eye
    CHECK(nospaces(snowman(11121111)) == nospaces("_===_\n(.,o)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11131111)) == nospaces("_===_\n(.,O)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11141111)) == nospaces("_===_\n(.,-)\n<( : )>\n( : )"));

    //X- Left Arm
    CHECK(nospaces(snowman(11112111)) == nospaces("_===_\n\(.,.)\n( : )>\n( : )"));
    CHECK(nospaces(snowman(11113111)) == nospaces("_===_\n/(.,.)\n( : )>\n( : )"));
    CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));

    //Y- Right Arm
    CHECK(nospaces(snowman(11111211)) == nospaces("_===_\n(.,.)/\n<( : )\n( : )"));
    CHECK(nospaces(snowman(11111311)) == nospaces("_===_\n(.,.)\\n<( : )\n( : )"));
    CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : )\n( : )"));

    //T- Torso--- fix!!!
    CHECK(nospaces(snowman(11111121)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11111131)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11111141)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));

    //B- Base
    CHECK(nospaces(snowman(11111112)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11111113)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(11111114)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));

    /* Add more checks here */
}


/* Add more test cases here */