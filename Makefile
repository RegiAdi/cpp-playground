compiler := cl
compiler_options := /Wall /EHsc /Zi /std:c++20
debug := devenv /DebugExe

hello_cpp:
	${compiler} ${compiler_options} hello.cpp
	.\hello.exe

debug_hello_cpp:
	${debug} .\hello.exe

function_cpp:
	${compiler} ${compiler_options} function.cpp
	.\function.exe

header_cpp:
	${compiler} ${compiler_options} header/*.cpp /link /out:header.exe
	.\header.exe

sizeof_cpp:
	${compiler} ${compiler_options} sizeof.cpp 
	.\sizeof.exe

unique_ptr_cpp:
	${compiler} ${compiler_options} smart_pointers/unique_ptr.cpp
	.\unique_ptr.exe