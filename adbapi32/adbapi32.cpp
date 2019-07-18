#include <windows.h>

extern "C"
{

BOOL WINAPI HookedCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOL IsMember)
{
    BOOL ret = CheckTokenMembership(TokenHandle, SidToCheck, IsMember);
    return ret;
}

PVOID WINAPI HookedFreeSid(PSID pSid)
{
    PVOID ret = FreeSid(pSid);
    return ret;
}

LONG WINAPI HookedRegCreateKeyW(HKEY hKey, LPCWSTR lpSubKey, PHKEY phkResult)
{
    LONG ret = RegCreateKeyW(hKey, lpSubKey, phkResult);
    return ret;
}

LONG WINAPI HookedRegSetValueExW(HKEY hKey, LPCWSTR lpValueName, DWORD Reserved,
                                 DWORD dwType, CONST BYTE *lpData, DWORD cbData)
{
    LONG ret = RegSetValueExW(hKey, lpValueName, Reserved, dwType, lpData, cbData);
    return ret;
}

LONG WINAPI HookedRegDeleteKeyW(HKEY hKey, LPCWSTR lpSubKey)
{
    LONG ret = RegDeleteKeyW(hKey, lpSubKey);
    return ret;
}

LONG WINAPI HookedRegEnumKeyW(HKEY hKey, DWORD dwIndex, LPWSTR lpName, DWORD cbName)
{
    LONG ret = RegEnumKeyW(hKey, dwIndex, lpName, cbName);
    return ret;
}

LONG WINAPI HookedRegOpenKeyW(HKEY hKey, LPCWSTR lpSubKey, PHKEY phkResult)
{
    LONG ret = RegOpenKeyW(hKey, lpSubKey, phkResult);
    return ret;
}

LONG WINAPI HookedRegQueryValueExW(HKEY hKey, LPWSTR lpName, LPDWORD lpReserved,
                                   LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData)
{
    LONG ret = RegQueryValueExW(hKey, lpName, lpReserved, lpType, lpData, lpcbData);
    return ret;
}

LONG WINAPI HookedRegCloseKey(HKEY hKey)
{
    LONG ret = RegCloseKey(hKey);
    return ret;
}

BOOL WINAPI HookedAllocateAndInitializeSid(PSID_IDENTIFIER_AUTHORITY lpAuth, BYTE bCount,
    DWORD dwAuth0, DWORD dwAuth1, DWORD dwAuth2, DWORD dwAuth3, DWORD dwAuth4,
    DWORD dwAuth5, DWORD dwAuth6, DWORD dwAuth7, PSID pSid)
{
    BOOL ret = AllocateAndInitializeSid(lpAuth, bCount,
        dwAuth0, dwAuth1, dwAuth2, dwAuth3, dwAuth4, dwAuth5, dwAuth6, dwAuth7, pSid);
    return ret;
}

} // extern "C"
