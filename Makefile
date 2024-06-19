compiler := cl
compiler_options := /Wall /EHsc /Zi
debug := devenv /DebugExe

hello:
	${compiler} ${compiler_options} hello.cpp
	.\hello.exe

debug-hello:
	${debug} .\hello.exe