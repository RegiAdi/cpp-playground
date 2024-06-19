compiler := cl
compiler_options := /Wall /EHsc

hello:
	${compiler} ${compiler_options} hello.cpp
	.\hello.exe