#include <iostream>
#include "Utility/Command_Parser.hpp"

#define HOTELS_PATH 1

using namespace std;

int main(int argc , char*argv[]) {

	Command_Parser* parser = new Command_Parser(argv[HOTELS_PATH]);

    return 0;
}