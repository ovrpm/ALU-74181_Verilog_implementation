// Author: Matvey Oborotov
// This is a golden model emulator for alu74181 used for verification
// The emulator runs 1000 tests on random values for each operation in each mode of alu74181

#include "Valu.h"
#include "alu_tests.h"

#include <iostream>

int main()
{
    // instance of alu
    Valu* dut = new Valu();

    if(!test_arithmetic(dut)){
        std::cout << "Failed in arithmetic\n";

        return 0;
    }
    if(!test_logic(dut)){
        std::cout << "Failed in logic\n";

        return 0;
    }

    return 0;
}
