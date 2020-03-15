//
// Created by keeganpalmieri on 3/14/20.
//

#include "catch.hpp"
#include "Bowling.hpp"
#include <string>

TEST_CASE("Single frame"){
    std::string strike = "strike";
    std::string spare = "spare";
    std::string standard = "";
    REQUIRE(singleFrame(0, 0, 0, standard) == 0);
    REQUIRE(singleFrame(3, 0, 0, standard) == 3);
    REQUIRE(singleFrame(3, 3, 0, standard) == 6);
    REQUIRE(singleFrame(10, 0, 20, strike) == 40);
    REQUIRE(singleFrame(2, 2, 4, strike) == 12);
    REQUIRE(singleFrame(5, 0, 10, spare) == 20);

}
TEST_CASE("Total Game"){
    REQUIRE(fullGame(4,0,0,0,0,0,0,0,0,0) == 4);
    REQUIRE(fullGame(9,0,9,0,2,0,10,0,2,2) == 38);
    REQUIRE(fullGame(9,1,5,0,0,0,0,0,0,0) == 20);
    REQUIRE(fullGame(9,1,5,4,0,0,0,0,0,0) == 24);

}