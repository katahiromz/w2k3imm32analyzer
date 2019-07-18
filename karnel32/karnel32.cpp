#include <windows.h>

extern "C"
{

HINSTANCE WINAPI HookedLoadLibraryW(LPCWSTR lpName)
{
    HINSTANCE ret = LoadLibraryW(lpName);
    return ret;
}

LPTOP_LEVEL_EXCEPTION_FILTER WINAPI
HookedSetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpFilter)
{
    LPTOP_LEVEL_EXCEPTION_FILTER ret = SetUnhandledExceptionFilter(lpFilter);
    return ret;
}

LONG WINAPI HookedUnhandledExceptionFilter(EXCEPTION_POINTERS *lpInfo)
{
    LONG ret = UnhandledExceptionFilter(lpInfo);
    return ret;
}

HANDLE WINAPI HookedGetCurrentProcess(VOID)
{
    HANDLE ret = GetCurrentProcess();
    return ret;
}

BOOL WINAPI HookedTerminateProcess(HANDLE hProcess, UINT uExitCode)
{
    BOOL ret = TerminateProcess(hProcess, uExitCode);
    return ret;
}

VOID WINAPI HookedGetSystemTimeAsFileTime(LPFILETIME lpft)
{
    GetSystemTimeAsFileTime(lpft);
}

DWORD WINAPI HookedGetTickCount(VOID)
{
    DWORD ret = GetTickCount();
    return ret;
}

BOOL WINAPI HookedQueryPerformanceCounter(LARGE_INTEGER *lpCount)
{
    BOOL ret = QueryPerformanceCounter(lpCount);
    return ret;
}

DWORD WINAPI HookedGetModuleFileNameW(HMODULE hModule, LPWSTR lpName, DWORD nSize)
{
    DWORD ret = GetModuleFileNameW(hModule, lpName, nSize);
    return ret;
}

INT WINAPI HookedlstrcmpiW(LPCWSTR lpsz1, LPCWSTR lpsz2)
{
    INT ret = lstrcmpiW(lpsz1, lpsz2);
    return ret;
}

HANDLE WINAPI HookedCreateThread(LPSECURITY_ATTRIBUTES lpsa, DWORD dwStackSize,
    LPTHREAD_START_ROUTINE lpAddr, LPVOID lpParam, DWORD dwCreation, LPDWORD lpThrseadID)
{
    HANDLE ret = CreateThread(lpsa, dwStackSize, lpAddr, lpParam, dwCreation, lpThrseadID);
    return ret;
}

VOID WINAPI HookedSleep(DWORD dwMilliseconds)
{
    Sleep(dwMilliseconds);
}

LPVOID WINAPI HookedTlsGetValue(DWORD dwIndex)
{
    LPVOID ret = TlsGetValue(dwIndex);
    return ret;
}

BOOL WINAPI HookedTlsSetValue(DWORD dwIndex, LPVOID lpValue)
{
    BOOL ret = TlsSetValue(dwIndex, lpValue);
    return ret;
}

DWORD WINAPI HookedTlsAlloc(VOID)
{
    DWORD ret = TlsAlloc();
    return ret;
}

HANDLE WINAPI HookedOpenFileMappingW(DWORD dwAccess, BOOL bInherit, LPCWSTR lpName)
{
    HANDLE ret = OpenFileMappingW(dwAccess, bInherit, lpName);
    return ret;
}

DWORD WINAPI HookedGetCurrentProcessId(VOID)
{
    DWORD ret = GetCurrentProcessId();
    return ret;
}

HANDLE WINAPI HookedCreateFileMappingW(HANDLE hFile, LPSECURITY_ATTRIBUTES lpsa, DWORD dwProtect,
                                       DWORD dwHigh, DWORD dwLow, LPCWSTR lpName)
{
    HANDLE ret = CreateFileMappingW(hFile, lpsa, dwProtect, dwHigh, dwLow, lpName);
    return ret;
}

LPVOID WINAPI HookedMapViewOfFile(HANDLE hFileMapping, DWORD dwAccess, DWORD dwHigh, DWORD dwLow, DWORD cbBytes)
{
    LPVOID ret = MapViewOfFile(hFileMapping, dwAccess, dwHigh, dwLow, cbBytes);
    return ret;
}

BOOL WINAPI HookedUnmapViewOfFile(LPVOID lpAddress)
{
    BOOL ret = UnmapViewOfFile(lpAddress);
    return ret;
}

BOOL WINAPI HookedCloseHandle(HANDLE hObject)
{
    BOOL ret = CloseHandle(hObject);
    return ret;
}

DWORD WINAPI HookedGetLastError(VOID)
{
    DWORD ret = GetLastError();
    return ret;
}

INT WINAPI HookedlstrlenA(LPCSTR lpsz)
{
    INT ret = lstrlenA(lpsz);
    return ret;
}

BOOL WINAPI HookedIsDBCSLeadByte(BYTE bChar)
{
    BOOL ret = IsDBCSLeadByte(bChar);
    return ret;
}

UINT WINAPI HookedGetProfileIntW(LPCWSTR lpAppName, LPCWSTR lpKeyName, INT nDefault)
{
    UINT ret = GetProfileIntW(lpAppName, lpKeyName, nDefault);
    return ret;
}

INT WINAPI HookedlstrcmpW(LPCWSTR lpsz1, LPCWSTR lpsz2)
{
    INT ret = lstrcmpW(lpsz1, lpsz2);
    return ret;
}

VOID WINAPI HookedSetLastError(DWORD dwError)
{
    SetLastError(dwError);
}

LPWSTR WINAPI HookedlstrcpynW(LPWSTR lpsz1, LPCWSTR lpsz2, INT cchMax)
{
    LPWSTR ret = lstrcpynW(lpsz1, lpsz2, cchMax);
    return ret;
}

HGLOBAL WINAPI HookedGlobalAlloc(UINT uFlags, DWORD dwBytes)
{
    HGLOBAL ret = GlobalAlloc(uFlags, dwBytes);
    return ret;
}

LPVOID WINAPI HookedGlobalLock(HGLOBAL hGlobal)
{
    LPVOID ret = GlobalLock(hGlobal);
    return ret;
}

HGLOBAL WINAPI HookedGlobalFree(HGLOBAL hGlobal)
{
    HGLOBAL ret = GlobalFree(hGlobal);
    return ret;
}

BOOL WINAPI HookedGlobalUnlock(HGLOBAL hGlobal)
{
    BOOL ret = GlobalUnlock(hGlobal);
    return ret;
}

LONG WINAPI HookedInterlockedDecrement(LPLONG lpdw)
{
    LONG ret = InterlockedDecrement(lpdw);
    return ret;
}

INT WINAPI HookedGetLocaleInfoW(LCID lcid, LCTYPE LCType, LPWSTR lpData, INT cchData)
{
    INT ret = GetLocaleInfoW(lcid, LCType, lpData, cchData);
    return ret;
}

LPVOID WINAPI HookedHeapAlloc(HANDLE hHeap, DWORD dwFlags, DWORD dwBytes)
{
    LPVOID ret = HeapAlloc(hHeap, dwFlags, dwBytes);
    return ret;
}

UINT WINAPI HookedLocalSize(HLOCAL hLocal)
{
    UINT ret = LocalSize(hLocal);
    return ret;
}

HLOCAL WINAPI HookedLocalReAlloc(HLOCAL hLocal, UINT uBytes, UINT uFlags)
{
    HLOCAL ret = LocalReAlloc(hLocal, uBytes, uFlags);
    return ret;
}

UINT WINAPI HookedLocalFlags(HLOCAL hLocal)
{
    UINT ret = LocalFlags(hLocal);
    return ret;
}

BOOL WINAPI HookedLocalUnlock(HLOCAL hLocal)
{
    BOOL ret = LocalUnlock(hLocal);
    return ret;
}

LPVOID WINAPI HookedLocalLock(HLOCAL hLocal)
{
    LPVOID ret = LocalLock(hLocal);
    return ret;
}

DWORD WINAPI HookedGetFullPathNameW(LPCWSTR lpName, DWORD cchBuff, LPWSTR lpBuff, LPWSTR *lpPart)
{
    DWORD ret = GetFullPathNameW(lpName, cchBuff, lpBuff, lpPart);
    return ret;
}

HFILE WINAPI HookedOpenFile(LPCSTR lpName, LPOFSTRUCT lpStruct, UINT uStyle)
{
    HFILE ret = OpenFile(lpName, lpStruct, uStyle);
    return ret;
}

HFILE WINAPI Hooked_lclose(HFILE hFile)
{
    HFILE ret = _lclose(hFile);
    return ret;
}

INT WINAPI HookedlstrlenW(LPCWSTR lpsz)
{
    INT ret = lstrlenW(lpsz);
    return ret;
}

LCID WINAPI HookedGetThreadLocale(VOID)
{
    LCID ret = GetThreadLocale();
    return ret;
}

UINT WINAPI HookedGetSystemDirectoryW(LPWSTR lpBuff, UINT cchSize)
{
    UINT ret = GetSystemDirectoryW(lpBuff, cchSize);
    return ret;
}

HLOCAL WINAPI HookedLocalAlloc(UINT uFlags, UINT uBytes)
{
    HLOCAL ret = LocalAlloc(uFlags, uBytes);
    return ret;
}

UINT WINAPI HookedGetACP(VOID)
{
    UINT ret = GetACP();
    return ret;
}

BOOL WINAPI HookedFreeLibrary(HMODULE hModule)
{
    BOOL ret = FreeLibrary(hModule);
    return ret;
}

BOOL WINAPI BaseCheckAppcompatCache(PWCHAR ApplicationName, HANDLE FileHandle, PWCHAR Environment, PULONG Reason)

BOOL WINAPI
HookedBaseCheckAppcompatCache(PWCHAR ApplicationName, HANDLE FileHandle, PWCHAR Environment, PULONG Reason)
{
    BOOL ret = BaseCheckAppcompatCache(ApplicationName, FileHandle, Environment, Reason);
    return ret;
}

HMODULE WINAPI HookedGetModuleHandleW(LPCWSTR lpName)
{
    HMODULE ret = GetModuleHandleW(lpName);
    return ret;
}

BOOL WINAPI HookedIsDBCSLeadByteEx(UINT uCodePage, BYTE TestChar)
{
    BOOL ret = IsDBCSLeadByteEx(uCodePage, TestChar);
    return ret;
}

BOOL WINAPI HookedHeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
{
    BOOL ret = HeapFree(hHeap, dwFlags, lpMem);
    return ret;
}

LONG WINAPI HookedInterlockedIncrement(LPLONG lpdw)
{
    LONG ret = InterlockedIncrement(lpdw);
    return ret;
}

DWORD WINAPI HookedGetCurrentThreadId(VOID)
{
    DWORD ret = GetCurrentThreadId();
    return ret;
}

INT WINAPI HookedWideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPWSTR lpWide, INT cchWide,
                                     LPSTR lpMulti, INT cchMulti,
                                     LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)
{
    INT ret = WideCharToMultiByte(CodePage, dwFlags, lpWide, cchWide, lpMulti, cchMulti,
                                  lpDefaultChar, lpUsedDefaultChar);
    return ret;
}

INT WINAPI HookedMultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMulti, INT cchMulti,
                                     LPWSTR lpWide, INT cchWide)
{
    INT ret = MultiByteToWideChar(CodePage, dwFlags, lpMulti, cchMulti, lpWide, cchWide);
    return ret;
}

FARPROC WINAPI HookedGetProcAddress(HMODULE hModule, LPCSTR lpName)
{
    FARPROC ret = GetProcAddress(hModule, lpName);
    return ret;
}

LCID WINAPI HookedGetSystemDefaultLCID(VOID)
{
    LCID ret = GetSystemDefaultLCID();
    return ret;
}

HLOCAL WINAPI HookedLocalFree(HLOCAL hLocal)
{
    HLOCAL ret = LocalFree(hLocal);
    return ret;
}

BOOL WINAPI HookedIsBadWritePtr(LPVOID lp, UINT cb)
{
    BOOL ret = IsBadWritePtr(lp, cb);
    return ret;
}

} // extern "C"
