// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

/*
Este DLL interliga o GATEWAY com o Servidor
Memoria partilhada
	* Zona de mensagens
	* Zona de dados do jogo
*/

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

