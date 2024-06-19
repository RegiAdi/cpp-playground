compiler := cl
compiler_options := /Wall /EHsc /Zi /std:c++20
debug := devenv /DebugExe

hello-cpp:
	${compiler} ${compiler_options} hello.cpp
	.\hello.exe

debug-hello-cpp:
	${debug} .\hello.exe

function-cpp:
	${compiler} ${compiler_options} function.cpp
	.\function.exe

debug-function-cpp:
	${debug} .\function.exe

header-cpp:
	${compiler} ${compiler_options} header/*.cpp /link /out:header.exe
	.\header.exe
