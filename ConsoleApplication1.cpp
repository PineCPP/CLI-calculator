#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {

	if (argc < 4) {

		printf("USE THIS FORMAT: --operation x y\nEXAMPLE: --m 100 2\n\nOPERATIONS:\n--a (FOR ADDITION)\n--s (FOR SUBTRACTION)\n--m (FOR MULTIPLICATION\n--d (FOR DIVISION)");

	} else if (strcmp(argv[1], "--a") == false){

		double x = stod(argv[2]);
		double y = stod(argv[3]);
		double output = (x + y);
		string outputprint = to_string(output);
		const char* outputprintc = outputprint.c_str();

		printf(outputprintc);

	}
	else if (strcmp(argv[1], "--s") == false) {

		double x = stod(argv[2]);
		double y = stod(argv[3]);
		double output = (x - y);
		string outputprint = to_string(output);
		const char* outputprintc = outputprint.c_str();

		printf(outputprintc);

	}
	else if (strcmp(argv[1], "--m") == false) {

		double x = stod(argv[2]);
		double y = stod(argv[3]);
		double output = (x * y);
		string outputprint = to_string(output);
		const char* outputprintc = outputprint.c_str();

		printf(outputprintc);

	}
	else if (strcmp(argv[1], "--d") == false) {

		double x = stod(argv[2]);
		double y = stod(argv[3]);
		double output = (x / y);
		string outputprint = to_string(output);
		const char* outputprintc = outputprint.c_str();

		printf(outputprintc);

	}
	else {
		printf("USE THIS FORMAT: --operation x y\nEXAMPLE: --m 100 2\n\nOPERATIONS:\n--a (FOR ADDITION)\n--s (FOR SUBTRACTION)\n--m (FOR MULTIPLICATION\n--d (FOR DIVISION)");
	}

	return 0;
}