// int16.c
// Generated by decompiling int16.dll
// using Reko decompiler version 0.7.1.0.

#include "int16.h"

// 10071000: Register int32 get(Stack int32 dwArg04)
int32 A::get(int32 dwArg04)
{
	return this->dw0000 + dwArg04;
}

// 10071010: Register Eq_9 DllMain(Stack Eq_10 hModule, Stack Eq_11 dwReason, Stack Eq_12 lpReserved)
BOOL DllMain(HANDLE hModule, DWORD dwReason, LPVOID lpReserved)
{
	return 0x01;
}

