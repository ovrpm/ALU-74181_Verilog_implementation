#include "Valu.h"
#include "alu_tests.h"
#include <iostream>

bool test_logic(Valu* dut)
{
	dut->mode = 1;

	for (int i = 0; i < 1000; i++)
	{
		int rand_a = rand() % 65536;
		int rand_b = rand() % 65536;

		dut->in_a = rand_a;
		dut->in_b = rand_b;

		//select operation
		//dut->sel = 0;
		if (i < 63) 
			dut->sel = 0; 			//0
		else if (i < 127 ) 
			dut->sel = 1;
		else if (i < 190) 
			dut->sel = 2;
		else if (i < 254) 
			dut->sel = 3;
		else if (i < 317) 
			dut->sel = 4;
		else if (i < 381) 
			dut->sel = 5;
		else if (i < 444) 
			dut->sel = 6;
		else if (i < 508) 
			dut->sel = 7;
		else if (i < 571) 
			dut->sel = 8;
		else if (i < 645) 
			dut->sel = 9;
		else if (i < 708) 
			dut->sel = 10;
		else if (i < 772) 
			dut->sel = 11;
		else if (i < 835) 
			dut->sel = 12;
		else if (i < 899) 
			dut->sel = 13;
		else if (i < 962) 
			dut->sel = 14;
		else 
			dut->sel = 15;

		//evaluate
		dut->eval();

		//expected outputs
		int expected_output;
		if (i < 63)	expected_output = 65535 - rand_a; 			//0
		else if (i < 127 ) expected_output = 65535 - (rand_a | rand_b);	//1
		else if (i < 190) expected_output = (65535 - rand_a) & rand_b;	//2
		else if (i < 254) expected_output = 0;				//3
        	else if (i < 317) expected_output = 65535 - (rand_a & rand_b);	//4
	        else if (i < 381) expected_output = 65535 - rand_b;			//5
        	else if (i < 444) expected_output = rand_a ^ rand_b;			//6
	        else if (i < 508) expected_output = rand_a & (65535 - rand_b);	//7
        	else if (i < 571) expected_output = (65535 - rand_a) | rand_b;	//8
	        else if (i < 645) expected_output = 65535 - (rand_a ^ rand_b);	//9
        	else if (i < 708) expected_output = rand_b;				//10
	        else if (i < 772) expected_output = rand_a & rand_b;			//11
        	else if (i < 835) expected_output = 1;				//12
	        else if (i < 899) expected_output = rand_a | (65535 - rand_b);	//13
        	else if (i < 962) expected_output = rand_a | rand_b;			//14
		else expected_output = rand_a;				//15

		int expected_compare = (rand_a == rand_b);
		int dut_compare = (int)dut->compare;

		int dut_output = (int)dut->alu_out;

		if (expected_output == dut_output && expected_compare == dut_compare){
			std::cout << "OK" << std::endl;
			//std::cout << "expected = " << expected_output << " dut = " << dut_output << '\n';
		}else{
			std::cout << "hi!\na = " << rand_a << " b = " << rand_b << " alu = " << dut_output << " cpp = " << expected_output<< std::endl;
			return false;
	    }
	}
	return true;
}

//operation 0: in_a
bool test_arithmetic_0(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 0;


	for (int i = 0; i < 1000; i++)
	{
		rand_a = rand() % 65536; //2^16 = 65536

		dut->in_a = rand_a;
		dut->eval();
	
		int expected_output = rand_a;
		int dut_output = (int)dut->alu_out;

		if (expected_output == dut_output)
		{
			std::cout << "OK" << std::endl;
		}
		else
		{
			std::cout << "Fail! ar0" << std::endl;
			return false;
		}
	}
	return true;
}

// operation 1: in_a | in_b
bool test_arithmetic_1(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 1;

	for (int i = 0; i < 1000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->eval();

		int expected_output = rand_a | rand_b;
		int dut_output = (int)dut->alu_out;

		if (expected_output == dut_output)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "Fail! ar0" << std::endl;
			return false;
		}
	}
	return true;
}

// operation 2: in_a | ~in_b
bool test_arithmetic_2(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 2;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->eval();

		int expected_output = rand_a | (65535 - rand_b);
		int dut_output = (int)dut->alu_out;

		if (expected_output == dut_output)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << 
				" alu = " << dut_output << " cpp = " << expected_output << std::endl;
			return false;
		}
	}
	return true;
}

//operation 3: -a
bool test_arithmetic_3(Valu* dut)
{
	dut->mode = 0;
	dut->sel = 3;
	dut->eval();

	std::cout << (int)dut->alu_out << std::endl;
	return true;
}

// operation 4: in_a | in_a & ~in_b
bool test_arithmetic_4(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 4;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->eval();

		int expected_output = rand_a | rand_a & (65535 - rand_b);
		int dut_output = (int)dut->alu_out;

		if (expected_output == dut_output)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << 
				" alu = " << dut_output << " cpp = " << expected_output << std::endl;
			return false;
		}
	}
	return true;
}

// operation 5: (in_a | in_b) + (in_a & ~in_b)
bool test_arithmetic_5(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 5;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = ((rand_a | rand_b) + (rand_a & ~rand_b) + rand_cin) % 65536;
		int expected_cout;
		if ((rand_a | rand_b) + (rand_a & ~rand_b) + rand_cin >= 65536) expected_cout = 1;
		else expected_cout = 0;
		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << 
				" cin = " << rand_cin << " alu = " << dut_output << " cpp = " << expected_output << std::endl;
			return false;
		}
	}
	return true;
}

// operation 6: in_a - in_b - 1
bool test_arithmetic_6(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 6;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = rand_a - rand_b - 1 + rand_cin;
		int expected_cout;

		if (expected_output < 0) 
			expected_output += 65536;

		if (rand_a - rand_b - 1 + rand_cin >= 65536) 
			expected_cout = 1;
		else 
			expected_cout = 0;

		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else{
			std::cout << "a = " << rand_a << " b = " << rand_b << 
				" cin = " << rand_cin << " alu = " << dut_output << " cpp = " << expected_output << std::endl;
			return false;
		}
	}
	return true;
}

// operation 7: in_a & ~in_b - 1
bool test_arithmetic_7(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 7;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = (rand_a & (65535 - rand_b)) - 1 + rand_cin;
		int expected_cout;
		if (expected_output < 0)
			expected_output += 65536;

		if ((rand_a & (65535 - rand_b)) - 1 + rand_cin >= 65536) 
			expected_cout = 1;
		else if ( ( (rand_a & (65535 - rand_b)) - 1 + rand_cin == 0) && (rand_cin == 1) ) 
			expected_cout = 1;
		else 
			expected_cout = 0;

		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
				" cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
			return false;
		}
	}
	return true;
}

//operation 8: in_a + in_a & in_b
bool test_arithmetic_8(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 8;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = (rand_a + (rand_a & rand_b) + rand_cin) % 65536;
		int expected_cout;

		if (expected_output < 0)
			expected_output += 65536;
		if (rand_a + (rand_a & rand_b) + rand_cin >= 65536) 
			expected_cout = 1;
		else 
			expected_cout = 0;

		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
				" cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
			return false;
		}
	}
	return true;
}

//operation 9: in_a + in_b
bool test_arithmetic_9(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 9;

	for (int i = 0; i < 10000; i++){
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = (rand_a + rand_b + rand_cin) % 65536;
		int expected_cout;

		if (expected_output < 0) 
			expected_output += 65536;

		if (rand_a + rand_b + rand_cin >= 65536) 
			expected_cout = 1;
		else 
			expected_cout = 0;

		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
				" cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
			return false;
		}
	}
	return true;
}

//operation 10: (in_a | ~in_b) + (in_a & in_b)
bool test_arithmetic_10(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 10;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = ((rand_a | (65535 - rand_b)) + (rand_a & rand_b) + rand_cin) % 65536;
		int expected_cout;
		
		if (((rand_a | (65535 - rand_b)) + (rand_a & rand_b) + rand_cin) >= 65536) 
			expected_cout = 1;
		else 
			expected_cout = 0;

		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
				" cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
			return false;
		}
	}
	return true;
}

//operation 11: in_a & in_b - 1
bool test_arithmetic_11(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 11;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = ((rand_a & rand_b) - 1 + rand_cin) % 65536;
		int expected_cout;

		if (expected_output < 0) 
			expected_output += 65536; 

		if (((rand_a & rand_b) - 1 + rand_cin) >= 65536) 
			expected_cout = 1;
		else if (((rand_a & rand_b) - 1 + rand_cin == 0) && (rand_cin == 1)) 
			expected_cout = 1;
		else 
			expected_cout = 0;
		
		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
				" cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
			return false;
		}
	}
	return true;
}

//operation 12: in_a + in_a
bool test_arithmetic_12(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 12;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = (rand_a + rand_a + rand_cin) % 65536;
		int expected_cout;
		 
		if ((rand_a + rand_a + rand_cin) >= 65536) 
			expected_cout = 1;
		else 
			expected_cout = 0;
		
		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
				" cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
			return false;
		}
	}
	return true;
}

//operation 13: (in_a | in_b) + in_a
bool test_arithmetic_13(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 13;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = ((rand_a | rand_b) + rand_a + rand_cin) % 65536;
		int expected_cout;

		if (((rand_a | rand_b) + rand_a + rand_cin) >= 65536) 
			expected_cout = 1;
		else 
			expected_cout = 0;
		
		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
			std::cout << "OK" << std::endl;
		else
		{
			std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
				" cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
			return false;
		}
	}
	return true;
}

//operation 14: (in_a | ~in_b) + in_a
bool test_arithmetic_14(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 14;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = ((rand_a | (65535 - rand_b)) + rand_a + rand_cin) % 65536;
		int expected_cout;

		if (((rand_a | (65535 - rand_b)) + rand_a + rand_cin) >= 65536) 
			expected_cout = 1;
		else 
			expected_cout = 0;
		
		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
		    std::cout << "OK" << std::endl;
		else{
		    std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
			    " cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
		    return false;
		}
	}
	return true;
}

//operation 15: in_a - 1
bool test_arithmetic_15(Valu* dut)
{
	int rand_a, rand_b, rand_cin;
	dut->mode = 0;
	dut->sel = 15;

	for (int i = 0; i < 10000; i++)
	{
		rand_a = rand() % 65536;
		rand_b = rand() % 65536;
		rand_cin = rand() % 2;

		dut->in_a = rand_a;
		dut->in_b = rand_b;
		dut->carry_in = rand_cin;
		dut->eval();

		int expected_output = (rand_a - 1 + rand_cin) % 65536;
		int expected_cout;

		if (expected_output < 0) 
			expected_output += 65536; 

		if ((rand_a - 1 + rand_cin) >= 65536) 
			expected_cout = 1;
		else if ((rand_a - 1 + rand_cin == 0) && (rand_cin == 1)) 
			expected_cout = 1;
		else 
			expected_cout = 0;
		
		int dut_output = (int)dut->alu_out;
		int dut_cout = (int)dut->carry_out;

		if (expected_output == dut_output && expected_cout == dut_cout)
		    std::cout << "OK" << std::endl;
		else{
		    std::cout << "a = " << rand_a << " b = " << rand_b << " cin = " << rand_cin << " alu = " << dut_output << 
			    " cpp = " << expected_output << " alu_c = " << dut_cout << " cpp_c = " << expected_cout<< std::endl;
		    return false;
		}
	}
	return true;
}

bool test_arithmetic(Valu* dut)
{
	if(!test_arithmetic_0(dut)) 
		return false;
	if(!test_arithmetic_1(dut)) 
		return false;
	if(!test_arithmetic_2(dut)) 
		return false;
	if(!test_arithmetic_3(dut)) 
		return false;
	if(!test_arithmetic_4(dut)) 
		return false;
	if(!test_arithmetic_5(dut)) 
		return false;
	if(!test_arithmetic_6(dut)) 
		return false;
	if(!test_arithmetic_7(dut)) 
		return false;
	if(!test_arithmetic_8(dut)) 
		return false;
	if(!test_arithmetic_9(dut)) 
		return false;
	if(!test_arithmetic_10(dut)) 
		return false;
	if(!test_arithmetic_11(dut)) 
		return false;
	if(!test_arithmetic_12(dut)) 
		return false;
	if(!test_arithmetic_13(dut)) 
		return false;
	if(!test_arithmetic_14(dut)) 
		return false;
	if(!test_arithmetic_15(dut)) 
		return false;

	return true;
}
