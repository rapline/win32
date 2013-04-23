#include "stdafx.h"

void ReloadEnv()
{
	DWORD dwReturnValue = 0;
	SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0, (LPARAM) "Environment", SMTO_NORMAL, 4000, &dwReturnValue);
}
