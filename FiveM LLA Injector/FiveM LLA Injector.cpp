
#include <iostream>
#include <Windows.h>
#include "inject.h"
int main()
{
	SetConsoleTitleA("FiveM Injector");

	std::cout << "Wating for FiveM...\n";
	while (!FindWindowA((_window), 0));
	std::cout << "FiveM found, trying to inject.\n";
	Injection::Inject();
	system("pause >nul");
}