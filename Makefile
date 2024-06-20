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

header-cpp:
	${compiler} ${compiler_options} header/*.cpp /link /out:header.exe
	.\header.exe

sizeof-cpp:
	${compiler} ${compiler_options} sizeof.cpp 
	.\sizeof.exe