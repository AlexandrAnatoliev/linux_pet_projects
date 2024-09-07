# test_scripts - functions unit testing bash script example of creating

The project folder contains the following files:
* header.h		- header file containing function definitions
* funcs.c		- functions sourse code file
* README_rus.md	- Russian-language documentation
* README.md		- documentation in English

The project contains two folders also: 
* tests 	- tests to check the functionality of functions
* scripts	- contains bash scripts for testing

## header.h and funcs.c
Three "stub" functions created without any functionality, as an example. When they are called, the message "function is run" is displayed only. Functions call each other when launched, for example also.

## /tests/
The directory contains three source code files, each running its own function.

## /scripts/
Contains two scripts:
* `compile_and_run`	- takes test sourse code file name (`test.c`), compiles it and runs it. At the same time, messages are displayed in console about what is happing in script: "compilling test.c", "running test.c".
* `run_tests`		- a list of test files is written to its script. It is compilled and run by calling the `compile_and_run` script. The temporary file `a.out` is deleted at the script end also.

The script files must be made executable after script writing by following commands:
`chmod +x compile_and_run`
`chmod +x run_tests`

Scripts are launched by using following commands:
`./compile_and_run test.c` - where `test.c` is the source code test file
`./run_tests`
