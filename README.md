# ALU-74181
## Description
The following implementation is a variation of ALU-74181 borrowing it's instruction set and expanding it's input size from 4-bits to 16-bits.
The ALU unit's functionallity is verified using the verilator utility with testcases written in C++.
## Features
- 16-bit operation - extended from the original 4-bit architecture
- 16 arithmetic operations - including addition, substraction and others
- 16 logic operations - bitwise OR, XOR, NAND and others
- Carry in/out support - for multi-word arithmetic operations
- Modular design
- Comprehensive C++ validation on randomized data
## How to run
To run the program, fork this repository and build the system using bitty_run.py script.
Run the executable Valu in the obj_dir directory to see validation output.
## Program Overview
### Top-Level Module: alu
The main module operates by feeding appropriate signals to arithmetic and logic units and selecting the output using a simple multiplexer based on the mode signal.

<img width="600" height="441" alt="image" src="https://github.com/user-attachments/assets/4d4b857a-a748-4d63-a305-67d4eba8500e" />

### Operation Table
The arithmetics and logics submodules operate according to the following operations table:
| sel   | Logic (mode = 1)   | Arithmetic (mode = 2)   |
|:-----:|:------------------:|:-----------------------:|
|0000   |~A                  |A                        |
|0001   |~(A or B)           |A or B                   |
|0010   |~A and B            |A or ~B                  |
|0011   |0                   |1                        |
|0100   |~(A and B)          |A or (A and ~B)          |
|0101   |~B                  |(A or B) + (A and ~B)    |
|0110   |A xor B             |A - B - 1                |
|0111   |A and ~B            |(A and ~B) - 1           |
|1000   |~A or B             |A + (A & B)              |
|1001   |~(A xor B)          |A + B                    |
|1010   |B                   |(A or ~B) + (A and B)    |
|1011   |A and B             |(A and B) - 1            |
|1100   |1                   |A + A                    |
|1101   |A or ~B             |(A or B) + A             |
|1110   |A or B              |(A or ~B) + A            |
|1111   |A                   |A - 1                    |

### cout16 submodule
The cout16 module implements a 16-bit carry adder for accurate carry calculation in arithmetic operations.
### Testing on randomized data
The alu_tb.cpp implements testing of the ALU module by running 1000 tests for each of the arithmetics operations and 1000 tests on logic module between it's 16 operations.
