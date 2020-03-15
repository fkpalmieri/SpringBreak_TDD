#include <iostream>
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
#include <vector>
using std::vector;
#define CATCH_CONFIG_MAIN
#include "catch.hpp"


std::string frameCheck(int first, int second){
    if (first == 10 || second == 10){
        return (std::string)"strike";
    } else if (first + second == 10){
        return (std::string)"spare";
    }
    else{
        return (std::string)"";
    }
}

int singleFrame(int first, int second, int previousTotal, std::string& special){
    if(special == "strike"){
        previousTotal += 2*(first+second);
        special = frameCheck(first, second);
    }
    else if(special == "spare"){
        previousTotal += 2*first+second;
        special = frameCheck(first, second);
    }
    else{
        previousTotal += first+second;
        special = frameCheck(first, second);
    }
    return previousTotal;
}

int fullGame(int t1, int t2, int t3, int t4, int t5,
              int t6, int t7, int t8, int t9, int t10){
    string special = (std::string)"";
    int total=0;
    total = singleFrame(t1,t2,total,special);
    total = singleFrame(t3,t4,total,special);
    total = singleFrame(t5,t6,total,special);
    total = singleFrame(t7,t8,total,special);
    total = singleFrame(t9,t10,total,special);
    return total;
}