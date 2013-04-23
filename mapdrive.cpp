#include "stdafx.h"

void MapDrive(LPWSTR remoteName, LPWSTR localName, LPWSTR username, LPWSTR password)
{
	NETRESOURCE net = {0};

	net.dwType = RESOURCETYPE_DISK;
	net.lpLocalName = localName;
	net.lpRemoteName = remoteName;
	net.lpProvider = NULL;

	DWORD dw = WNetAddConnection2(&net, password, username, FALSE);

}
