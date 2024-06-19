compiler := cl
compiler_options := /Wall /EHsc /Zi /std:c++20
debug := devenv /DebugExe

hello:
	${compiler} ${compiler_options} hello.cpp
	.\hello.exe

debug-hello:
	${debug} .\hello.exe