#include <windows.h>

extern "C"
{

LRESULT WINAPI HookedSendMessageW(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    LRESULT ret = SendMessageW(hwnd, uMsg, wParam, lParam);
    return ret;
}

BOOL WINAPI HookedGetClassInfoW(HINSTANCE hInstance, LPCWSTR lpClassName, LPWNDCLASSW lpWndClass)
{
    BOOL ret = GetClassInfoW(hInstance, lpClassName, lpWndClass);
    return ret;
}

BOOL WINAPI HookedUser32InitializeImmEntryTable(DWORD dw)
{
    BOOL ret = User32InitializeImmEntryTable(dw);
    return ret;
}

LPWSTR WINAPI HookedCharUpperW(LPWSTR lpsz)
{
    LPWSTR ret = CharUpperW(lpsz);
    return ret;
}

BOOL WINAPI HookedUnloadKeyboardLayout(HKL hkl)
{
    BOOL ret = UnloadKeyboardLayout(hkl);
    return ret;
}

HBITMAP WINAPI HookedLoadBitmapW(HINSTANCE hInstance, LPCWSTR lpBitmapName)
{
    HBITMAP ret = LoadBitmapW(hInstance, lpBitmapName);
    return ret;
}

INT WINAPI HookedReleaseDC(HWND hWnd, HDC hDC)
{
    INT ret = ReleaseDC(hWnd, hDC);
    return ret;
}

HDC WINAPI HookedGetDC(HWND hWnd)
{
    HDC ret = GetDC(hWnd);
    return ret;
}

BOOL WINAPI HookedGetClientRect(HWND hWnd, LPRECT lpRect)
{
    BOOL ret = GetClientRect(hWnd, lpRect);
    return ret;
}

LONG WINAPI HookedSetWindowLongW(HWND hWnd, INT nIndex, LONG dwNewLong)
{
    LONG ret = SetWindowLongW(hWnd, nIndex, dwNewLong);
    return ret;
}

LONG WINAPI HookedGetWindowLongW(HWND hWnd, INT nIndex)
{
    LONG ret = GetWindowLongW(hWnd, nIndex);
    return ret;
}

INT WINAPI HookedDrawTextExW(HDC hDC, LPTSTR lpchText, INT cchText, LPRECT lprc, UINT uFormat, LPDRAWTEXTPARAMS lpParams)
{
    INT ret = DrawTextExW(hDC, lpchText, cchText, lprc, uFormat, lpParams);
    return ret;
}

BOOL WINAPI HookedGetWindowRect(HWND hWnd, LPRECT lpRect)
{
    BOOL ret = GetWindowRect(hWnd, lpRect);
    return ret;
}

INT WINAPI HookedGetSystemMetrics(INT nIndex)
{
    INT ret = GetSystemMetrics(nIndex);
    return ret;
}

BOOL WINAPI HookedMessageBeep(UINT uType)
{
    BOOL ret = MessageBeep(uType);
    return ret;
}

HWND WINAPI HookedSetCapture(HWND hWnd)
{
    HWND ret = SetCapture(hWnd);
    return ret;
}

BOOL WINAPI HookedScreenToClient(HWND hWnd, LPPOINT lpPoint)
{
    BOOL ret = ScreenToClient(hWnd, lpPoint);
    return ret;
}

BOOL WINAPI HookedGetCursorPos(LPPOINT lpPoint)
{
    BOOL ret = GetCursorPos(lpPoint);
    return ret;
}

HCURSOR WINAPI HookedSetCursor(HCURSOR hCursor)
{
    HCURSOR ret = SetCursor(hCursor);
    return ret;
}

HCURSOR WINAPI HookedLoadCursorW(HINSTANCE hInstance, LPCWSTR lpName)
{
    HCURSOR ret = LoadCursorW(hInstance, lpName);
    return ret;
}

VOID WINAPI Hookedkeybd_event(BYTE bVK, BYTE bScan, DWORD dwFlags, DWORD dwExtraInfo)
{
    keybd_event(bVK, bScan, dwFlags, dwExtraInfo);
}

LRESULT WINAPI HookedSendMessageTimeoutW(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, UINT uFlags, UINT uTimeout, LPDWORD lpdwResult)
{
    LRESULT ret = SendMessageTimeoutW(hWnd, uMsg, wParam, lParam, uFlags, uTimeout, lpdwResult);
    return ret;
}

HWND WINAPI HookedGetDesktopWindow(VOID)
{
    HWND ret = GetDesktopWindow();
    return ret;
}

BOOL WINAPI HookedIsWindowUnicode(HWND hWnd)
{
    BOOL ret = IsWindowUnicode(hWnd);
    return ret;
}

LPWSTR WINAPI HookedCharNextW(LPCWSTR lpsz)
{
    LPWSTR ret = CharNextW(lpsz);
    return ret;
}

LPSTR WINAPI HookedCharNextA(LPCSTR lpsz)
{
    LPSTR ret = CharNextA(lpsz);
    return ret;
}

INT WINAPI HookedMapWindowPoints(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints)
{
    INT ret = MapWindowPoints(hWndFrom, hWndTo, lpPoints, cPoints);
    return ret;
}

HWND WINAPI HookedGetForegroundWindow(VOID)
{
    HWND ret = GetForegroundWindow();
    return ret;
}

BOOL WINAPI HookedClientToScreen(HWND hWnd, LPOINT lpPoint)
{
    BOOL ret = ClientToScreen(hWnd, lpPoint);
    return ret;
}

HWND WINAPI HookedGetFocus(VOID)
{
    HWND ret = GetFocus();
    return ret;
}

BOOL WINAPI HookedGetKeyboardState(PBYTE lpKeyState)
{
    BOOL ret = GetKeyboardState(lpKeyState);
    return ret;
}

INT WINAPI HookedToUnicode(UINT uVKey, UINT uScan, PBYTE lpKeyState, LPWSTR pszBuff, INT cchBuff, UINT uFlags)
{
    INT ret = ToUnicode(uVKey, uScan, lpKeyState, pszBuff, cchBuff, uFlags);
    return ret;
}

INT WINAPI HookedToAsciiEx(UINT uVKey, UINT uScan, PBYTE lpKeyState, LPWORD lpChar, UINT uFlags, HKL hkl)
{
    INT ret = ToAsciiEx(uVKey, uScan, lpKeyState, lpChar, uFlags, hkl);
    return ret;
}

BOOL WINAPI HookedDestroyWindow(HWND hWnd)
{
    BOOL ret = DestroyWindow(hWnd);
    return ret;
}

UINT WINAPI HookedMapVirtualKeyW(UINT uCode, UINT uType)
{
    UINT ret = MapVirtualKeyW(uCode, uType);
    return ret;
}

HWND WINAPI HookedCreateWindowExW(DWORD exstyle, LPCWSTR lpClass, LPCWSTR lpText, DWORD style, INT x, INT y, INT cx, INT cy,
                                  HWND parent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam)
{
    HWND ret = CreateWindowExW(exstyle, lpClass, lpText, style, x, y, cx, cy, parent, hMenu, hInstance, lpParam);
    return ret;
}

BOOL WINAPI HookedShowWindow(HWND hWnd, INT nCmdShow)
{
    BOOL ret = ShowWindow(hWnd, nCmdShow);
    return ret;
}

BOOL WINAPI HookedUpdateWindow(HWND hWnd)
{
    BOOL ret = UpdateWindow(hWnd);
    return ret;
}

HMONITOR WINAPI HookedMonitorFromWindow(HWND hWnd, DWORD dwFlags)
{
    HMONITOR ret = MonitorFromWindow(hWnd, dwFlags);
    return ret;
}

BOOL WINAPI HookedGetMonitorInfoW(HMONITOR hMonitor, LPMONITORINFO lpInfo)
{
    BOOL ret = GetMonitorInfoW(hMonitor, lpInfo);
    return ret;
}

BOOL WINAPI HookedSystemParametersInfoW(UINT uiAction, UINT uiParam, PVOID pvParam, UINT fWinIni)
{
    BOOL ret = SystemParametersInfoW(uiAction, uiParam, pvParam, fWinIni);
    return ret;
}

BOOL WINAPI HookedGetClassInfoExW(HINSTANCE hInstance, LPCWSTR lpClass, LPWNDCLASSEX lpwcx)
{
    BOOL ret = GetClassInfoExW(hInstance, lpClass, lpwcx);
    return ret;
}

HICON WINAPI HookedLoadIconW(HINSTANCE hInstance, LPCWSTR lpName)
{
    HICON ret = LoadIconW(hInstance, lpName);
    return ret;
}

ATOM WINAPI HookedRegisterClassExW(CONST WNDCLASSEXW *lpwcx)
{
    ATOM ret = RegisterClassExW(lpwcx);
    return ret;
}

HWND WINAPI HookedGetParent(HWND hWnd)
{
    HWND ret = GetParent(hWnd);
    return ret;
}

HWND WINAPI HookedGetCapture(VOID)
{
    HWND ret = GetCapture();
    return ret;
}

BOOL WINAPI HookedDrawEdge(HDC hDC, LPRECT lprc, UINT edge, UINT flags)
{
    BOOL ret = DrawEdge(hDC, lprc, edge, flags);
    return ret;
}

HDC WINAPI HookedBeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
{
    HDC ret = BeginPaint(hWnd, lpPaint);
    return ret;
}

BOOL WINAPI HookedEndPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
{
    BOOL ret = EndPaint(hWnd, lpPaint);
    return ret;
}

BOOL WINAPI HookedInvalidateRect(HWND hWnd, CONST RECT *lpRect, BOOL bErase)
{
    BOOL ret = InvalidateRect(hWnd, lpRect, bErase);
    return ret;
}

LRESULT WINAPI HookedDefWindowProcW(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    LRESULT ret = DefWindowProcW(hWnd, uMsg, wParam, lParam);
    return ret;
}

BOOL WINAPI HookedReleaseCapture(VOID)
{
    BOOL ret = ReleaseCapture();
    return ret;
}

BOOL WINAPI HookedSetWindowPos(HWND hWnd, HWND insertAfter, INT x, INT y, INT cx, INT cy, UINT uFlags)
{
    BOOL ret = SetWindowPos(hWnd, insertAfter, x, y, cx, cy, uFlags);
    return ret;
}

INT WINAPIV HookedwsprintfW(LPWSTR lpOut, LPCWSTR fmt, ...)
{
    va_list va;
    va_start(va, fmt);
    INT ret = wvsprintfW(lpOut, fmt, va);
    va_end(va);
    return ret;
}

HKL WINAPI HookedLoadKeyboardLayoutW(LPCWSTR lpszID, UINT uFlags)
{
    HKL ret = LoadKeyboardLayoutW(lpszID, uFlags);
    return ret;
}

DWORD WINAPI HookedGetWindowThreadProcessId(HWND hWnd, LPDWORD lpdwProcessID)
{
    DWORD ret = GetWindowThreadProcessId(hWnd, lpdwProcessID);
    return ret;
}

UINT WINAPI HookedGetKeyboardLayoutList(INT nBuff, HKL *lpList)
{
    UINT ret = GetKeyboardLayoutList(nBuff, lpList);
    return ret;
}

LRESULT WINAPI HookedSendMessageA(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    LRESULT ret = SendMessageA(hWnd, uMsg, wParam, lParam);
    return ret;
}

BOOL WINAPI HookedPostMessageW(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    BOOL ret = PostMessageW(hWnd, uMsg, wParam, lParam);
    return ret;
}

BOOL WINAPI HookedPostMessageA(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    BOOL ret = PostMessageA(hWnd, uMsg, wParam, lParam);
    return ret;
}

DWORD WINAPI WCSToMBEx(WORD, LPWSTR, LONG, LPSTR *, LONG, BOOL);

DWORD WINAPI HookedWCSToMBEx(WORD CodePage, LPWSTR UnicodeString, LONG UnicodeSize, LPSTR *MBString, LONG MBSize, BOOL Allocate)
{
    DWORD ret = WCSToMBEx(CodePage, UnicodeString, UnicodeSize, MBString, MBSize, Allocate);
    return ret;
}

HKL WINAPI HookedGetKeyboardLayout(DWORD dwLayout)
{
    HKL ret = GetKeyboardLayout(dwLayout);
    return ret;
}

BOOL WINAPI HookedIsWindow(HWND hWnd)
{
    BOOL ret = IsWindow(hWnd);
    return ret;
}

HWND WINPAI HookedGetWindow(HWND hWnd, UINT uCmd)
{
    HWND ret = GetWindow(hWnd, uCmd);
    return ret;
}

} // extern "C"
