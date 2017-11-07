/*
  Incomplete project design 001
*/

struct HDC__;
struct tagWINDOWPLACEMENT;
struct HWND__;
struct HMENU__;
struct HBITMAP__;
struct _SHELLEXECUTEINFOW;
struct HINSTANCE__;
struct HKEY__;
struct tagACTCTXW;
struct tagMODULEENTRY32W;
struct _BLENDFUNCTION;
struct tagLOGBRUSH;
struct tagLOGFONTW;
struct _ITEMIDLIST;
union _LARGE_INTEGER;
struct tagPROPVARIANT;
struct tagCLIPDATA;
struct IUnknown;
struct IUnknownVtbl;
struct IDispatch;
struct IDispatchVtbl;
struct ITypeInfo;
struct ITypeInfoVtbl;
struct tagTYPEATTR;
struct tagTYPEDESC;
struct tagARRAYDESC;
struct ITypeComp;
struct ITypeCompVtbl;
union tagBINDPTR;
struct tagFUNCDESC;
struct tagELEMDESC;
struct tagPARAMDESCEX;
struct tagVARIANT;
struct tagSAFEARRAY;
struct tagDEC;
struct IRecordInfo;
struct IRecordInfoVtbl;
struct tagVARDESC;
struct tagDISPPARAMS;
struct tagEXCEPINFO;
struct ITypeLib;
struct ITypeLibVtbl;
struct tagTLIBATTR;
struct IStream;
struct IStreamVtbl;
struct tagSTATSTG;
struct IStorage;
struct IStorageVtbl;
struct IEnumSTATSTG;
struct IEnumSTATSTGVtbl;
struct tagVersionedStream;
struct tagSCROLLINFO;
struct tagBITMAPINFO;
struct tagXFORM;
struct _RTL_CRITICAL_SECTION_DEBUG;
struct _EXCEPTION_RECORD;
struct tagWNDCLASSW;
struct HICON__;
struct HBRUSH__;
struct tagWNDCLASSEXW;

/* 1 */
enum __TI_flags
{
  TI_IsConst = 0x1,
  TI_IsVolatile = 0x2,
  TI_IsUnaligned = 0x4,
  TI_IsPure = 0x8,
  TI_IsWinRT = 0x10,
};

/* 2 */
enum __CT_flags
{
  CT_IsSimpleType = 0x1,
  CT_ByReferenceOnly = 0x2,
  CT_HasVirtualBase = 0x4,
  CT_IsWinRTHandle = 0x8,
  CT_IsStdBadAlloc = 0x10,
};

/* 3 */
struct _GUID
{
  unsigned int Data1;
  unsigned __int16 Data2;
  unsigned __int16 Data3;
  unsigned __int8 Data4[8];
};

/* 4 */
typedef struct _GUID GUID;

/* 6 */
typedef unsigned int DWORD;

/* 5 */
struct _FILETIME
{
  DWORD dwLowDateTime;
  DWORD dwHighDateTime;
};

/* 8 */
typedef HDC__ *HDC;

/* 10 */
typedef int BOOL;

/* 13 */
typedef int LONG;

/* 12 */
struct tagRECT
{
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
};

/* 11 */
typedef tagRECT RECT;

/* 14 */
typedef unsigned __int8 BYTE;

/* 7 */
struct tagPAINTSTRUCT
{
  HDC hdc;
  BOOL fErase;
  RECT rcPaint;
  BOOL fRestore;
  BOOL fIncUpdate;
  BYTE rgbReserved[32];
};

/* 9 */
struct HDC__
{
  int unused;
};

/* 15 */
typedef tagWINDOWPLACEMENT WINDOWPLACEMENT;

/* 17 */
typedef unsigned int UINT;

/* 19 */
struct tagPOINT
{
  LONG x;
  LONG y;
};

/* 18 */
typedef tagPOINT POINT;

/* 16 */
struct tagWINDOWPLACEMENT
{
  UINT length;
  UINT flags;
  UINT showCmd;
  POINT ptMinPosition;
  POINT ptMaxPosition;
  RECT rcNormalPosition;
};

/* 21 */
typedef HWND__ *HWND;

/* 24 */
typedef unsigned __int64 UINT_PTR;

/* 23 */
typedef UINT_PTR WPARAM;

/* 26 */
typedef __int64 LONG_PTR;

/* 25 */
typedef LONG_PTR LPARAM;

/* 20 */
struct tagMSG
{
  HWND hwnd;
  UINT message;
  WPARAM wParam;
  LPARAM lParam;
  DWORD time;
  POINT pt;
};

/* 22 */
struct HWND__
{
  int unused;
};

/* 28 */
typedef HMENU__ *HMENU;

/* 30 */
typedef HBITMAP__ *HBITMAP;

/* 32 */
typedef unsigned __int64 ULONG_PTR;

/* 35 */
typedef unsigned __int16 wchar_t;

/* 34 */
typedef wchar_t WCHAR;

/* 33 */
typedef WCHAR *LPWSTR;

/* 27 */
struct tagMENUITEMINFOW
{
  UINT cbSize;
  UINT fMask;
  UINT fType;
  UINT fState;
  UINT wID;
  HMENU hSubMenu;
  HBITMAP hbmpChecked;
  HBITMAP hbmpUnchecked;
  ULONG_PTR dwItemData;
  LPWSTR dwTypeData;
  UINT cch;
  HBITMAP hbmpItem;
};

/* 29 */
struct HMENU__
{
  int unused;
};

/* 31 */
struct HBITMAP__
{
  int unused;
};

/* 36 */
typedef _SHELLEXECUTEINFOW SHELLEXECUTEINFOW;

/* 38 */
typedef unsigned int ULONG;

/* 39 */
typedef const WCHAR *LPCWSTR;

/* 40 */
typedef HINSTANCE__ *HINSTANCE;

/* 42 */
typedef HKEY__ *HKEY;

/* 45 */
typedef void *HANDLE;

/* 44 */
union _SHELLEXECUTEINFOW::$D915D6B2B775D926C11EEA321E8940B4
{
  HANDLE hIcon;
  HANDLE hMonitor;
};

/* 37 */
struct _SHELLEXECUTEINFOW
{
  DWORD cbSize;
  ULONG fMask;
  HWND hwnd;
  LPCWSTR lpVerb;
  LPCWSTR lpFile;
  LPCWSTR lpParameters;
  LPCWSTR lpDirectory;
  int nShow;
  HINSTANCE hInstApp;
  void *lpIDList;
  LPCWSTR lpClass;
  HKEY hkeyClass;
  DWORD dwHotKey;
  union
  {
    HANDLE hIcon;
    HANDLE hMonitor;
  };
  HANDLE hProcess;
};

/* 41 */
struct HINSTANCE__
{
  int unused;
};

/* 43 */
struct HKEY__
{
  int unused;
};

/* 46 */
typedef tagACTCTXW ACTCTXW;

/* 48 */
typedef unsigned __int16 USHORT;

/* 50 */
typedef unsigned __int16 WORD;

/* 49 */
typedef WORD LANGID;

/* 51 */
typedef HINSTANCE HMODULE;

/* 47 */
struct tagACTCTXW
{
  ULONG cbSize;
  DWORD dwFlags;
  LPCWSTR lpSource;
  USHORT wProcessorArchitecture;
  LANGID wLangId;
  LPCWSTR lpAssemblyDirectory;
  LPCWSTR lpResourceName;
  LPCWSTR lpApplicationName;
  HMODULE hModule;
};

/* 53 */
typedef __int64 __time64_t;

/* 52 */
struct __timeb64
{
  __time64_t time;
  unsigned __int16 millitm;
  __int16 timezone;
  __int16 dstflag;
};

/* 54 */
typedef tagMODULEENTRY32W MODULEENTRY32W;

/* 55 */
struct tagMODULEENTRY32W
{
  DWORD dwSize;
  DWORD th32ModuleID;
  DWORD th32ProcessID;
  DWORD GlblcntUsage;
  DWORD ProccntUsage;
  BYTE *modBaseAddr;
  DWORD modBaseSize;
  HMODULE hModule;
  WCHAR szModule[256];
  WCHAR szExePath[260];
};

/* 57 */
typedef WORD FILEOP_FLAGS;

/* 58 */
typedef void *LPVOID;

/* 56 */
struct _SHFILEOPSTRUCTW
{
  HWND hwnd;
  UINT wFunc;
  LPCWSTR pFrom;
  LPCWSTR pTo;
  FILEOP_FLAGS fFlags;
  BOOL fAnyOperationsAborted;
  LPVOID hNameMappings;
  LPCWSTR lpszProgressTitle;
};

/* 59 */
struct tagSIZE
{
  LONG cx;
  LONG cy;
};

/* 61 */
typedef WORD ATOM;

/* 60 */
struct tagWINDOWINFO
{
  DWORD cbSize;
  RECT rcWindow;
  RECT rcClient;
  DWORD dwStyle;
  DWORD dwExStyle;
  DWORD dwWindowStatus;
  UINT cxWindowBorders;
  UINT cyWindowBorders;
  ATOM atomWindowType;
  WORD wCreatorVersion;
};

/* 62 */
struct tagMONITORINFO
{
  DWORD cbSize;
  RECT rcMonitor;
  RECT rcWork;
  DWORD dwFlags;
};

/* 64 */
typedef _FILETIME FILETIME;

/* 63 */
struct _WIN32_FIND_DATAW
{
  DWORD dwFileAttributes;
  FILETIME ftCreationTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime;
  DWORD nFileSizeHigh;
  DWORD nFileSizeLow;
  DWORD dwReserved0;
  DWORD dwReserved1;
  WCHAR cFileName[260];
  WCHAR cAlternateFileName[14];
};

/* 68 */
typedef __int16 SHORT;

/* 67 */
struct _COORD
{
  SHORT X;
  SHORT Y;
};

/* 66 */
typedef _COORD COORD;

/* 70 */
struct _SMALL_RECT
{
  SHORT Left;
  SHORT Top;
  SHORT Right;
  SHORT Bottom;
};

/* 69 */
typedef _SMALL_RECT SMALL_RECT;

/* 65 */
struct _CONSOLE_SCREEN_BUFFER_INFO
{
  COORD dwSize;
  COORD dwCursorPosition;
  WORD wAttributes;
  SMALL_RECT srWindow;
  COORD dwMaximumWindowSize;
};

/* 72 */
typedef ULONG_PTR SIZE_T;

/* 71 */
struct _MEMORYSTATUS
{
  DWORD dwLength;
  DWORD dwMemoryLoad;
  SIZE_T dwTotalPhys;
  SIZE_T dwAvailPhys;
  SIZE_T dwTotalPageFile;
  SIZE_T dwAvailPageFile;
  SIZE_T dwTotalVirtual;
  SIZE_T dwAvailVirtual;
};

/* 73 */
typedef _BLENDFUNCTION BLENDFUNCTION;

/* 74 */
struct _BLENDFUNCTION
{
  BYTE BlendOp;
  BYTE BlendFlags;
  BYTE SourceConstantAlpha;
  BYTE AlphaFormat;
};

/* 75 */
typedef tagLOGBRUSH LOGBRUSH;

/* 77 */
typedef DWORD COLORREF;

/* 76 */
struct tagLOGBRUSH
{
  UINT lbStyle;
  COLORREF lbColor;
  ULONG_PTR lbHatch;
};

/* 78 */
#pragma pack(push, 4)
struct tagTEXTMETRICW
{
  LONG tmHeight;
  LONG tmAscent;
  LONG tmDescent;
  LONG tmInternalLeading;
  LONG tmExternalLeading;
  LONG tmAveCharWidth;
  LONG tmMaxCharWidth;
  LONG tmWeight;
  LONG tmOverhang;
  LONG tmDigitizedAspectX;
  LONG tmDigitizedAspectY;
  WCHAR tmFirstChar;
  WCHAR tmLastChar;
  WCHAR tmDefaultChar;
  WCHAR tmBreakChar;
  BYTE tmItalic;
  BYTE tmUnderlined;
  BYTE tmStruckOut;
  BYTE tmPitchAndFamily;
  BYTE tmCharSet;
};
#pragma pack(pop)

/* 79 */
typedef tagLOGFONTW LOGFONTW;

/* 80 */
struct tagLOGFONTW
{
  LONG lfHeight;
  LONG lfWidth;
  LONG lfEscapement;
  LONG lfOrientation;
  LONG lfWeight;
  BYTE lfItalic;
  BYTE lfUnderline;
  BYTE lfStrikeOut;
  BYTE lfCharSet;
  BYTE lfOutPrecision;
  BYTE lfClipPrecision;
  BYTE lfQuality;
  BYTE lfPitchAndFamily;
  WCHAR lfFaceName[32];
};

/* 83 */
typedef _ITEMIDLIST ITEMIDLIST;

/* 82 */
typedef const ITEMIDLIST *LPCITEMIDLIST;

/* 87 */
typedef int (__stdcall *BFFCALLBACK)(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData);

/* 81 */
#pragma pack(push, 8)
struct _browseinfoW
{
  HWND hwndOwner;
  LPCITEMIDLIST pidlRoot;
  LPWSTR pszDisplayName;
  LPCWSTR lpszTitle;
  UINT ulFlags;
  BFFCALLBACK lpfn;
  LPARAM lParam;
  int iImage;
};
#pragma pack(pop)

/* 86 */
#pragma pack(push, 1)
struct _SHITEMID
{
  USHORT cb;
  BYTE abID[1];
};
#pragma pack(pop)

/* 85 */
typedef _SHITEMID SHITEMID;

/* 84 */
#pragma pack(push, 1)
struct _ITEMIDLIST
{
  SHITEMID mkid;
};
#pragma pack(pop)

/* 88 */
struct _SYSTEMTIME
{
  WORD wYear;
  WORD wMonth;
  WORD wDayOfWeek;
  WORD wDay;
  WORD wHour;
  WORD wMinute;
  WORD wSecond;
  WORD wMilliseconds;
};

/* 90 */
typedef unsigned __int64 DWORD64;

/* 97 */
typedef unsigned __int64 ULONGLONG;

/* 98 */
typedef __int64 LONGLONG;

/* 96 */
struct __declspec(align(16)) _M128A
{
  ULONGLONG Low;
  LONGLONG High;
};

/* 95 */
typedef _M128A M128A;

/* 94 */
struct __declspec(align(16)) _XSAVE_FORMAT
{
  WORD ControlWord;
  WORD StatusWord;
  BYTE TagWord;
  BYTE Reserved1;
  WORD ErrorOpcode;
  DWORD ErrorOffset;
  WORD ErrorSelector;
  WORD Reserved2;
  DWORD DataOffset;
  WORD DataSelector;
  WORD Reserved3;
  DWORD MxCsr;
  DWORD MxCsr_Mask;
  M128A FloatRegisters[8];
  M128A XmmRegisters[16];
  BYTE Reserved4[96];
};

/* 93 */
typedef _XSAVE_FORMAT XSAVE_FORMAT;

/* 92 */
typedef XSAVE_FORMAT XMM_SAVE_AREA32;

/* 99 */
struct _CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414
{
  M128A Header[2];
  M128A Legacy[8];
  M128A Xmm0;
  M128A Xmm1;
  M128A Xmm2;
  M128A Xmm3;
  M128A Xmm4;
  M128A Xmm5;
  M128A Xmm6;
  M128A Xmm7;
  M128A Xmm8;
  M128A Xmm9;
  M128A Xmm10;
  M128A Xmm11;
  M128A Xmm12;
  M128A Xmm13;
  M128A Xmm14;
  M128A Xmm15;
};

/* 91 */
union _CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB
{
  XMM_SAVE_AREA32 FltSave;
  struct
  {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
  };
};

/* 89 */
struct __declspec(align(16)) _CONTEXT
{
  DWORD64 P1Home;
  DWORD64 P2Home;
  DWORD64 P3Home;
  DWORD64 P4Home;
  DWORD64 P5Home;
  DWORD64 P6Home;
  DWORD ContextFlags;
  DWORD MxCsr;
  WORD SegCs;
  WORD SegDs;
  WORD SegEs;
  WORD SegFs;
  WORD SegGs;
  WORD SegSs;
  DWORD EFlags;
  DWORD64 Dr0;
  DWORD64 Dr1;
  DWORD64 Dr2;
  DWORD64 Dr3;
  DWORD64 Dr6;
  DWORD64 Dr7;
  DWORD64 Rax;
  DWORD64 Rcx;
  DWORD64 Rdx;
  DWORD64 Rbx;
  DWORD64 Rsp;
  DWORD64 Rbp;
  DWORD64 Rsi;
  DWORD64 Rdi;
  DWORD64 R8;
  DWORD64 R9;
  DWORD64 R10;
  DWORD64 R11;
  DWORD64 R12;
  DWORD64 R13;
  DWORD64 R14;
  DWORD64 R15;
  DWORD64 Rip;
  union
  {
    XMM_SAVE_AREA32 FltSave;
    struct
    {
      M128A Header[2];
      M128A Legacy[8];
      M128A Xmm0;
      M128A Xmm1;
      M128A Xmm2;
      M128A Xmm3;
      M128A Xmm4;
      M128A Xmm5;
      M128A Xmm6;
      M128A Xmm7;
      M128A Xmm8;
      M128A Xmm9;
      M128A Xmm10;
      M128A Xmm11;
      M128A Xmm12;
      M128A Xmm13;
      M128A Xmm14;
      M128A Xmm15;
    };
  };
  M128A VectorRegister[26];
  DWORD64 VectorControl;
  DWORD64 DebugControl;
  DWORD64 LastBranchToRip;
  DWORD64 LastBranchFromRip;
  DWORD64 LastExceptionToRip;
  DWORD64 LastExceptionFromRip;
};

/* 100 */
struct _PROCESS_INFORMATION
{
  HANDLE hProcess;
  HANDLE hThread;
  DWORD dwProcessId;
  DWORD dwThreadId;
};

/* 101 */
typedef _LARGE_INTEGER LARGE_INTEGER;

/* 103 */
struct _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E
{
  DWORD LowPart;
  LONG HighPart;
};

/* 102 */
union _LARGE_INTEGER
{
  struct
  {
    DWORD LowPart;
    LONG HighPart;
  };
  _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E u;
  LONGLONG QuadPart;
};

/* 104 */
typedef tagPROPVARIANT PROPVARIANT;

/* 108 */
typedef unsigned __int16 VARTYPE;

/* 109 */
typedef WORD PROPVAR_PAD1;

/* 110 */
typedef WORD PROPVAR_PAD2;

/* 111 */
typedef WORD PROPVAR_PAD3;

/* 113 */
typedef char CHAR;

/* 114 */
typedef unsigned __int8 UCHAR;

/* 115 */
typedef int INT;

/* 118 */
struct _ULARGE_INTEGER::$0354AA9C204208F00D0965D07BBE7FAC
{
  DWORD LowPart;
  DWORD HighPart;
};

/* 117 */
union _ULARGE_INTEGER
{
  struct
  {
    DWORD LowPart;
    DWORD HighPart;
  };
  _ULARGE_INTEGER::$0354AA9C204208F00D0965D07BBE7FAC u;
  ULONGLONG QuadPart;
};

/* 116 */
typedef _ULARGE_INTEGER ULARGE_INTEGER;

/* 119 */
typedef float FLOAT;

/* 120 */
typedef double DOUBLE;

/* 121 */
typedef __int16 VARIANT_BOOL;

/* 122 */
typedef LONG SCODE;

/* 125 */
struct tagCY::$983F061E0B702DD8AE0B4B955735A6A3
{
  unsigned int Lo;
  int Hi;
};

/* 124 */
union tagCY
{
  struct
  {
    unsigned int Lo;
    int Hi;
  };
  LONGLONG int64;
};

/* 123 */
typedef tagCY CY;

/* 126 */
typedef double DATE;

/* 127 */
typedef GUID CLSID;

/* 128 */
typedef tagCLIPDATA CLIPDATA;

/* 131 */
typedef WCHAR OLECHAR;

/* 130 */
typedef OLECHAR *BSTR;

/* 133 */
struct tagBSTRBLOB
{
  ULONG cbSize;
  BYTE *pData;
};

/* 132 */
typedef tagBSTRBLOB BSTRBLOB;

/* 135 */
struct tagBLOB
{
  ULONG cbSize;
  BYTE *pBlobData;
};

/* 134 */
typedef tagBLOB BLOB;

/* 136 */
typedef CHAR *LPSTR;

/* 226 */
typedef tagVersionedStream *LPVERSIONEDSTREAM;

/* 183 */
typedef tagSAFEARRAY SAFEARRAY;

/* 228 */
typedef SAFEARRAY *LPSAFEARRAY;

/* 230 */
#pragma pack(push, 8)
struct tagCAC
{
  ULONG cElems;
  CHAR *pElems;
};
#pragma pack(pop)

/* 229 */
typedef tagCAC CAC;

/* 232 */
#pragma pack(push, 8)
struct tagCAUB
{
  ULONG cElems;
  UCHAR *pElems;
};
#pragma pack(pop)

/* 231 */
typedef tagCAUB CAUB;

/* 234 */
#pragma pack(push, 8)
struct tagCAI
{
  ULONG cElems;
  SHORT *pElems;
};
#pragma pack(pop)

/* 233 */
typedef tagCAI CAI;

/* 236 */
#pragma pack(push, 8)
struct tagCAUI
{
  ULONG cElems;
  USHORT *pElems;
};
#pragma pack(pop)

/* 235 */
typedef tagCAUI CAUI;

/* 238 */
#pragma pack(push, 8)
struct tagCAL
{
  ULONG cElems;
  LONG *pElems;
};
#pragma pack(pop)

/* 237 */
typedef tagCAL CAL;

/* 240 */
#pragma pack(push, 8)
struct tagCAUL
{
  ULONG cElems;
  ULONG *pElems;
};
#pragma pack(pop)

/* 239 */
typedef tagCAUL CAUL;

/* 242 */
#pragma pack(push, 8)
struct tagCAH
{
  ULONG cElems;
  LARGE_INTEGER *pElems;
};
#pragma pack(pop)

/* 241 */
typedef tagCAH CAH;

/* 244 */
#pragma pack(push, 8)
struct tagCAUH
{
  ULONG cElems;
  ULARGE_INTEGER *pElems;
};
#pragma pack(pop)

/* 243 */
typedef tagCAUH CAUH;

/* 246 */
#pragma pack(push, 8)
struct tagCAFLT
{
  ULONG cElems;
  FLOAT *pElems;
};
#pragma pack(pop)

/* 245 */
typedef tagCAFLT CAFLT;

/* 248 */
#pragma pack(push, 8)
struct tagCADBL
{
  ULONG cElems;
  DOUBLE *pElems;
};
#pragma pack(pop)

/* 247 */
typedef tagCADBL CADBL;

/* 250 */
#pragma pack(push, 8)
struct tagCABOOL
{
  ULONG cElems;
  VARIANT_BOOL *pElems;
};
#pragma pack(pop)

/* 249 */
typedef tagCABOOL CABOOL;

/* 252 */
#pragma pack(push, 8)
struct tagCASCODE
{
  ULONG cElems;
  SCODE *pElems;
};
#pragma pack(pop)

/* 251 */
typedef tagCASCODE CASCODE;

/* 254 */
#pragma pack(push, 8)
struct tagCACY
{
  ULONG cElems;
  CY *pElems;
};
#pragma pack(pop)

/* 253 */
typedef tagCACY CACY;

/* 256 */
#pragma pack(push, 8)
struct tagCADATE
{
  ULONG cElems;
  DATE *pElems;
};
#pragma pack(pop)

/* 255 */
typedef tagCADATE CADATE;

/* 258 */
#pragma pack(push, 8)
struct tagCAFILETIME
{
  ULONG cElems;
  FILETIME *pElems;
};
#pragma pack(pop)

/* 257 */
typedef tagCAFILETIME CAFILETIME;

/* 260 */
#pragma pack(push, 8)
struct tagCACLSID
{
  ULONG cElems;
  CLSID *pElems;
};
#pragma pack(pop)

/* 259 */
typedef tagCACLSID CACLSID;

/* 262 */
#pragma pack(push, 8)
struct tagCACLIPDATA
{
  ULONG cElems;
  CLIPDATA *pElems;
};
#pragma pack(pop)

/* 261 */
typedef tagCACLIPDATA CACLIPDATA;

/* 264 */
#pragma pack(push, 8)
struct tagCABSTR
{
  ULONG cElems;
  BSTR *pElems;
};
#pragma pack(pop)

/* 263 */
typedef tagCABSTR CABSTR;

/* 266 */
#pragma pack(push, 8)
struct tagCABSTRBLOB
{
  ULONG cElems;
  BSTRBLOB *pElems;
};
#pragma pack(pop)

/* 265 */
typedef tagCABSTRBLOB CABSTRBLOB;

/* 268 */
#pragma pack(push, 8)
struct tagCALPSTR
{
  ULONG cElems;
  LPSTR *pElems;
};
#pragma pack(pop)

/* 267 */
typedef tagCALPSTR CALPSTR;

/* 270 */
#pragma pack(push, 8)
struct tagCALPWSTR
{
  ULONG cElems;
  LPWSTR *pElems;
};
#pragma pack(pop)

/* 269 */
typedef tagCALPWSTR CALPWSTR;

/* 272 */
#pragma pack(push, 8)
struct tagCAPROPVARIANT
{
  ULONG cElems;
  PROPVARIANT *pElems;
};
#pragma pack(pop)

/* 271 */
typedef tagCAPROPVARIANT CAPROPVARIANT;

/* 186 */
typedef tagDEC DECIMAL;

/* 112 */
#pragma pack(push, 8)
union tagPROPVARIANT::$::$1A0FF913CB6A2700FBDFFDCC16233417::$C55E7FD68DDBD4820BEEA04B5D0E46A7
{
  CHAR cVal;
  UCHAR bVal;
  SHORT iVal;
  USHORT uiVal;
  LONG lVal;
  ULONG ulVal;
  INT intVal;
  UINT uintVal;
  LARGE_INTEGER hVal;
  ULARGE_INTEGER uhVal;
  FLOAT fltVal;
  DOUBLE dblVal;
  VARIANT_BOOL boolVal;
  SCODE scode;
  CY cyVal;
  DATE date;
  FILETIME filetime;
  CLSID *puuid;
  CLIPDATA *pclipdata;
  BSTR bstrVal;
  BSTRBLOB bstrblobVal;
  BLOB blob;
  LPSTR pszVal;
  LPWSTR pwszVal;
  IUnknown *punkVal;
  IDispatch *pdispVal;
  IStream *pStream;
  IStorage *pStorage;
  LPVERSIONEDSTREAM pVersionedStream;
  LPSAFEARRAY parray;
  CAC cac;
  CAUB caub;
  CAI cai;
  CAUI caui;
  CAL cal;
  CAUL caul;
  CAH cah;
  CAUH cauh;
  CAFLT caflt;
  CADBL cadbl;
  CABOOL cabool;
  CASCODE cascode;
  CACY cacy;
  CADATE cadate;
  CAFILETIME cafiletime;
  CACLSID cauuid;
  CACLIPDATA caclipdata;
  CABSTR cabstr;
  CABSTRBLOB cabstrblob;
  CALPSTR calpstr;
  CALPWSTR calpwstr;
  CAPROPVARIANT capropvar;
  CHAR *pcVal;
  UCHAR *pbVal;
  SHORT *piVal;
  USHORT *puiVal;
  LONG *plVal;
  ULONG *pulVal;
  INT *pintVal;
  UINT *puintVal;
  FLOAT *pfltVal;
  DOUBLE *pdblVal;
  VARIANT_BOOL *pboolVal;
  DECIMAL *pdecVal;
  SCODE *pscode;
  CY *pcyVal;
  DATE *pdate;
  BSTR *pbstrVal;
  IUnknown **ppunkVal;
  IDispatch **ppdispVal;
  LPSAFEARRAY *pparray;
  PROPVARIANT *pvarVal;
};
#pragma pack(pop)

/* 107 */
#pragma pack(push, 8)
struct tagPROPVARIANT::$B01A803922ACEB71FC353E1ACAA1539E::$1A0FF913CB6A2700FBDFFDCC16233417
{
  VARTYPE vt;
  PROPVAR_PAD1 wReserved1;
  PROPVAR_PAD2 wReserved2;
  PROPVAR_PAD3 wReserved3;
  #pragma pack(push, 8)
  union
  {
    CHAR cVal;
    UCHAR bVal;
    SHORT iVal;
    USHORT uiVal;
    LONG lVal;
    ULONG ulVal;
    INT intVal;
    UINT uintVal;
    LARGE_INTEGER hVal;
    ULARGE_INTEGER uhVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    FILETIME filetime;
    CLSID *puuid;
    CLIPDATA *pclipdata;
    BSTR bstrVal;
    BSTRBLOB bstrblobVal;
    BLOB blob;
    LPSTR pszVal;
    LPWSTR pwszVal;
    IUnknown *punkVal;
    IDispatch *pdispVal;
    IStream *pStream;
    IStorage *pStorage;
    LPVERSIONEDSTREAM pVersionedStream;
    LPSAFEARRAY parray;
    CAC cac;
    CAUB caub;
    CAI cai;
    CAUI caui;
    CAL cal;
    CAUL caul;
    CAH cah;
    CAUH cauh;
    CAFLT caflt;
    CADBL cadbl;
    CABOOL cabool;
    CASCODE cascode;
    CACY cacy;
    CADATE cadate;
    CAFILETIME cafiletime;
    CACLSID cauuid;
    CACLIPDATA caclipdata;
    CABSTR cabstr;
    CABSTRBLOB cabstrblob;
    CALPSTR calpstr;
    CALPWSTR calpwstr;
    CAPROPVARIANT capropvar;
    CHAR *pcVal;
    UCHAR *pbVal;
    SHORT *piVal;
    USHORT *puiVal;
    LONG *plVal;
    ULONG *pulVal;
    INT *pintVal;
    UINT *puintVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    DECIMAL *pdecVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    IUnknown **ppunkVal;
    IDispatch **ppdispVal;
    LPSAFEARRAY *pparray;
    PROPVARIANT *pvarVal;
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 189 */
struct tagDEC::$64EC678C49E7BE49873AFBFB7A849D34::$7F8459940C2B08BD5D82B0F27239141B
{
  BYTE scale;
  BYTE sign;
};

/* 188 */
union tagDEC::$64EC678C49E7BE49873AFBFB7A849D34
{
  struct
  {
    BYTE scale;
    BYTE sign;
  };
  USHORT signscale;
};

/* 191 */
struct tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301::$674876891A86A76F12C10005982BCA56
{
  ULONG Lo32;
  ULONG Mid32;
};

/* 190 */
union tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301
{
  struct
  {
    ULONG Lo32;
    ULONG Mid32;
  };
  ULONGLONG Lo64;
};

/* 187 */
struct tagDEC
{
  USHORT wReserved;
  union
  {
    struct
    {
      BYTE scale;
      BYTE sign;
    };
    USHORT signscale;
  };
  ULONG Hi32;
  union
  {
    struct
    {
      ULONG Lo32;
      ULONG Mid32;
    };
    ULONGLONG Lo64;
  };
};

/* 106 */
#pragma pack(push, 8)
union tagPROPVARIANT::$B01A803922ACEB71FC353E1ACAA1539E
{
  #pragma pack(push, 8)
  struct
  {
    VARTYPE vt;
    PROPVAR_PAD1 wReserved1;
    PROPVAR_PAD2 wReserved2;
    PROPVAR_PAD3 wReserved3;
    #pragma pack(push, 8)
    union
    {
      CHAR cVal;
      UCHAR bVal;
      SHORT iVal;
      USHORT uiVal;
      LONG lVal;
      ULONG ulVal;
      INT intVal;
      UINT uintVal;
      LARGE_INTEGER hVal;
      ULARGE_INTEGER uhVal;
      FLOAT fltVal;
      DOUBLE dblVal;
      VARIANT_BOOL boolVal;
      SCODE scode;
      CY cyVal;
      DATE date;
      FILETIME filetime;
      CLSID *puuid;
      CLIPDATA *pclipdata;
      BSTR bstrVal;
      BSTRBLOB bstrblobVal;
      BLOB blob;
      LPSTR pszVal;
      LPWSTR pwszVal;
      IUnknown *punkVal;
      IDispatch *pdispVal;
      IStream *pStream;
      IStorage *pStorage;
      LPVERSIONEDSTREAM pVersionedStream;
      LPSAFEARRAY parray;
      CAC cac;
      CAUB caub;
      CAI cai;
      CAUI caui;
      CAL cal;
      CAUL caul;
      CAH cah;
      CAUH cauh;
      CAFLT caflt;
      CADBL cadbl;
      CABOOL cabool;
      CASCODE cascode;
      CACY cacy;
      CADATE cadate;
      CAFILETIME cafiletime;
      CACLSID cauuid;
      CACLIPDATA caclipdata;
      CABSTR cabstr;
      CABSTRBLOB cabstrblob;
      CALPSTR calpstr;
      CALPWSTR calpwstr;
      CAPROPVARIANT capropvar;
      CHAR *pcVal;
      UCHAR *pbVal;
      SHORT *piVal;
      USHORT *puiVal;
      LONG *plVal;
      ULONG *pulVal;
      INT *pintVal;
      UINT *puintVal;
      FLOAT *pfltVal;
      DOUBLE *pdblVal;
      VARIANT_BOOL *pboolVal;
      DECIMAL *pdecVal;
      SCODE *pscode;
      CY *pcyVal;
      DATE *pdate;
      BSTR *pbstrVal;
      IUnknown **ppunkVal;
      IDispatch **ppdispVal;
      LPSAFEARRAY *pparray;
      PROPVARIANT *pvarVal;
    };
    #pragma pack(pop)
  };
  #pragma pack(pop)
  DECIMAL decVal;
};
#pragma pack(pop)

/* 105 */
#pragma pack(push, 8)
struct tagPROPVARIANT
{
  #pragma pack(push, 8)
  union
  {
    #pragma pack(push, 8)
    struct
    {
      VARTYPE vt;
      PROPVAR_PAD1 wReserved1;
      PROPVAR_PAD2 wReserved2;
      PROPVAR_PAD3 wReserved3;
      #pragma pack(push, 8)
      union
      {
        CHAR cVal;
        UCHAR bVal;
        SHORT iVal;
        USHORT uiVal;
        LONG lVal;
        ULONG ulVal;
        INT intVal;
        UINT uintVal;
        LARGE_INTEGER hVal;
        ULARGE_INTEGER uhVal;
        FLOAT fltVal;
        DOUBLE dblVal;
        VARIANT_BOOL boolVal;
        SCODE scode;
        CY cyVal;
        DATE date;
        FILETIME filetime;
        CLSID *puuid;
        CLIPDATA *pclipdata;
        BSTR bstrVal;
        BSTRBLOB bstrblobVal;
        BLOB blob;
        LPSTR pszVal;
        LPWSTR pwszVal;
        IUnknown *punkVal;
        IDispatch *pdispVal;
        IStream *pStream;
        IStorage *pStorage;
        LPVERSIONEDSTREAM pVersionedStream;
        LPSAFEARRAY parray;
        CAC cac;
        CAUB caub;
        CAI cai;
        CAUI caui;
        CAL cal;
        CAUL caul;
        CAH cah;
        CAUH cauh;
        CAFLT caflt;
        CADBL cadbl;
        CABOOL cabool;
        CASCODE cascode;
        CACY cacy;
        CADATE cadate;
        CAFILETIME cafiletime;
        CACLSID cauuid;
        CACLIPDATA caclipdata;
        CABSTR cabstr;
        CABSTRBLOB cabstrblob;
        CALPSTR calpstr;
        CALPWSTR calpwstr;
        CAPROPVARIANT capropvar;
        CHAR *pcVal;
        UCHAR *pbVal;
        SHORT *piVal;
        USHORT *puiVal;
        LONG *plVal;
        ULONG *pulVal;
        INT *pintVal;
        UINT *puintVal;
        FLOAT *pfltVal;
        DOUBLE *pdblVal;
        VARIANT_BOOL *pboolVal;
        DECIMAL *pdecVal;
        SCODE *pscode;
        CY *pcyVal;
        DATE *pdate;
        BSTR *pbstrVal;
        IUnknown **ppunkVal;
        IDispatch **ppdispVal;
        LPSAFEARRAY *pparray;
        PROPVARIANT *pvarVal;
      };
      #pragma pack(pop)
    };
    #pragma pack(pop)
    DECIMAL decVal;
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 129 */
struct tagCLIPDATA
{
  ULONG cbSize;
  int ulClipFmt;
  BYTE *pClipData;
};

/* 137 */
#pragma pack(push, 8)
struct IUnknown
{
  IUnknownVtbl *lpVtbl;
};
#pragma pack(pop)

/* 140 */
typedef int HRESULT;

/* 139 */
typedef GUID IID;

/* 138 */
#pragma pack(push, 8)
struct IUnknownVtbl
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IUnknown *This);
  ULONG (__stdcall *Release)(IUnknown *This);
};
#pragma pack(pop)

/* 141 */
#pragma pack(push, 8)
struct IDispatch
{
  IDispatchVtbl *lpVtbl;
};
#pragma pack(pop)

/* 143 */
typedef DWORD LCID;

/* 150 */
typedef OLECHAR *LPOLESTR;

/* 149 */
typedef LONG DISPID;

/* 207 */
typedef tagDISPPARAMS DISPPARAMS;

/* 178 */
typedef tagVARIANT VARIANT;

/* 209 */
typedef tagEXCEPINFO EXCEPINFO;

/* 142 */
#pragma pack(push, 8)
struct IDispatchVtbl
{
  HRESULT (__stdcall *QueryInterface)(IDispatch *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IDispatch *This);
  ULONG (__stdcall *Release)(IDispatch *This);
  HRESULT (__stdcall *GetTypeInfoCount)(IDispatch *This, UINT *pctinfo);
  HRESULT (__stdcall *GetTypeInfo)(IDispatch *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
  HRESULT (__stdcall *GetIDsOfNames)(IDispatch *This, const IID *const riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
  HRESULT (__stdcall *Invoke)(IDispatch *This, DISPID dispIdMember, const IID *const riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
};
#pragma pack(pop)

/* 144 */
#pragma pack(push, 8)
struct ITypeInfo
{
  ITypeInfoVtbl *lpVtbl;
};
#pragma pack(pop)

/* 146 */
typedef tagTYPEATTR TYPEATTR;

/* 168 */
typedef tagFUNCDESC FUNCDESC;

/* 202 */
typedef tagVARDESC VARDESC;

/* 148 */
typedef DISPID MEMBERID;

/* 159 */
typedef DWORD HREFTYPE;

/* 185 */
typedef void *PVOID;

/* 199 */
enum tagINVOKEKIND
{
  INVOKE_FUNC = 0x1,
  INVOKE_PROPERTYGET = 0x2,
  INVOKE_PROPERTYPUT = 0x4,
  INVOKE_PROPERTYPUTREF = 0x8,
};

/* 198 */
typedef tagINVOKEKIND INVOKEKIND;

/* 145 */
#pragma pack(push, 8)
struct ITypeInfoVtbl
{
  HRESULT (__stdcall *QueryInterface)(ITypeInfo *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(ITypeInfo *This);
  ULONG (__stdcall *Release)(ITypeInfo *This);
  HRESULT (__stdcall *GetTypeAttr)(ITypeInfo *This, TYPEATTR **ppTypeAttr);
  HRESULT (__stdcall *GetTypeComp)(ITypeInfo *This, ITypeComp **ppTComp);
  HRESULT (__stdcall *GetFuncDesc)(ITypeInfo *This, UINT index, FUNCDESC **ppFuncDesc);
  HRESULT (__stdcall *GetVarDesc)(ITypeInfo *This, UINT index, VARDESC **ppVarDesc);
  HRESULT (__stdcall *GetNames)(ITypeInfo *This, MEMBERID memid, BSTR *rgBstrNames, UINT cMaxNames, UINT *pcNames);
  HRESULT (__stdcall *GetRefTypeOfImplType)(ITypeInfo *This, UINT index, HREFTYPE *pRefType);
  HRESULT (__stdcall *GetImplTypeFlags)(ITypeInfo *This, UINT index, INT *pImplTypeFlags);
  HRESULT (__stdcall *GetIDsOfNames)(ITypeInfo *This, LPOLESTR *rgszNames, UINT cNames, MEMBERID *pMemId);
  HRESULT (__stdcall *Invoke)(ITypeInfo *This, PVOID pvInstance, MEMBERID memid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
  HRESULT (__stdcall *GetDocumentation)(ITypeInfo *This, MEMBERID memid, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
  HRESULT (__stdcall *GetDllEntry)(ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, BSTR *pBstrDllName, BSTR *pBstrName, WORD *pwOrdinal);
  HRESULT (__stdcall *GetRefTypeInfo)(ITypeInfo *This, HREFTYPE hRefType, ITypeInfo **ppTInfo);
  HRESULT (__stdcall *AddressOfMember)(ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, PVOID *ppv);
  HRESULT (__stdcall *CreateInstance)(ITypeInfo *This, IUnknown *pUnkOuter, const IID *const riid, PVOID *ppvObj);
  HRESULT (__stdcall *GetMops)(ITypeInfo *This, MEMBERID memid, BSTR *pBstrMops);
  HRESULT (__stdcall *GetContainingTypeLib)(ITypeInfo *This, ITypeLib **ppTLib, UINT *pIndex);
  void (__stdcall *ReleaseTypeAttr)(ITypeInfo *This, TYPEATTR *pTypeAttr);
  void (__stdcall *ReleaseFuncDesc)(ITypeInfo *This, FUNCDESC *pFuncDesc);
  void (__stdcall *ReleaseVarDesc)(ITypeInfo *This, VARDESC *pVarDesc);
};
#pragma pack(pop)

/* 152 */
enum tagTYPEKIND
{
  TKIND_ENUM = 0x0,
  TKIND_RECORD = 0x1,
  TKIND_MODULE = 0x2,
  TKIND_INTERFACE = 0x3,
  TKIND_DISPATCH = 0x4,
  TKIND_COCLASS = 0x5,
  TKIND_ALIAS = 0x6,
  TKIND_UNION = 0x7,
  TKIND_MAX = 0x8,
};

/* 151 */
typedef tagTYPEKIND TYPEKIND;

/* 155 */
#pragma pack(push, 8)
union tagTYPEDESC::$AC700B6542D8071E244CADABF8A32897
{
  tagTYPEDESC *lptdesc;
  tagARRAYDESC *lpadesc;
  HREFTYPE hreftype;
};
#pragma pack(pop)

/* 154 */
#pragma pack(push, 8)
struct tagTYPEDESC
{
  #pragma pack(push, 8)
  union
  {
    tagTYPEDESC *lptdesc;
    tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
  };
  #pragma pack(pop)
  VARTYPE vt;
};
#pragma pack(pop)

/* 153 */
typedef tagTYPEDESC TYPEDESC;

/* 161 */
#pragma pack(push, 8)
struct tagIDLDESC
{
  ULONG_PTR dwReserved;
  USHORT wIDLFlags;
};
#pragma pack(pop)

/* 160 */
typedef tagIDLDESC IDLDESC;

/* 147 */
#pragma pack(push, 8)
struct tagTYPEATTR
{
  GUID guid;
  LCID lcid;
  DWORD dwReserved;
  MEMBERID memidConstructor;
  MEMBERID memidDestructor;
  LPOLESTR lpstrSchema;
  ULONG cbSizeInstance;
  TYPEKIND typekind;
  WORD cFuncs;
  WORD cVars;
  WORD cImplTypes;
  WORD cbSizeVft;
  WORD cbAlignment;
  WORD wTypeFlags;
  WORD wMajorVerNum;
  WORD wMinorVerNum;
  TYPEDESC tdescAlias;
  IDLDESC idldescType;
};
#pragma pack(pop)

/* 158 */
#pragma pack(push, 8)
struct tagSAFEARRAYBOUND
{
  ULONG cElements;
  LONG lLbound;
};
#pragma pack(pop)

/* 157 */
typedef tagSAFEARRAYBOUND SAFEARRAYBOUND;

/* 156 */
#pragma pack(push, 8)
struct tagARRAYDESC
{
  TYPEDESC tdescElem;
  USHORT cDims;
  SAFEARRAYBOUND rgbounds[1];
};
#pragma pack(pop)

/* 162 */
#pragma pack(push, 8)
struct ITypeComp
{
  ITypeCompVtbl *lpVtbl;
};
#pragma pack(pop)

/* 165 */
enum tagDESCKIND
{
  DESCKIND_NONE = 0x0,
  DESCKIND_FUNCDESC = 0x1,
  DESCKIND_VARDESC = 0x2,
  DESCKIND_TYPECOMP = 0x3,
  DESCKIND_IMPLICITAPPOBJ = 0x4,
  DESCKIND_MAX = 0x5,
};

/* 164 */
typedef tagDESCKIND DESCKIND;

/* 166 */
typedef tagBINDPTR BINDPTR;

/* 163 */
#pragma pack(push, 8)
struct ITypeCompVtbl
{
  HRESULT (__stdcall *QueryInterface)(ITypeComp *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(ITypeComp *This);
  ULONG (__stdcall *Release)(ITypeComp *This);
  HRESULT (__stdcall *Bind)(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, WORD wFlags, ITypeInfo **ppTInfo, DESCKIND *pDescKind, BINDPTR *pBindPtr);
  HRESULT (__stdcall *BindType)(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, ITypeInfo **ppTInfo, ITypeComp **ppTComp);
};
#pragma pack(pop)

/* 167 */
#pragma pack(push, 8)
union tagBINDPTR
{
  FUNCDESC *lpfuncdesc;
  VARDESC *lpvardesc;
  ITypeComp *lptcomp;
};
#pragma pack(pop)

/* 170 */
typedef tagELEMDESC ELEMDESC;

/* 197 */
enum tagFUNCKIND
{
  FUNC_VIRTUAL = 0x0,
  FUNC_PUREVIRTUAL = 0x1,
  FUNC_NONVIRTUAL = 0x2,
  FUNC_STATIC = 0x3,
  FUNC_DISPATCH = 0x4,
};

/* 196 */
typedef tagFUNCKIND FUNCKIND;

/* 201 */
enum tagCALLCONV
{
  CC_FASTCALL = 0x0,
  CC_CDECL = 0x1,
  CC_MSCPASCAL = 0x2,
  CC_PASCAL = 0x2,
  CC_MACPASCAL = 0x3,
  CC_STDCALL = 0x4,
  CC_FPFASTCALL = 0x5,
  CC_SYSCALL = 0x6,
  CC_MPWCDECL = 0x7,
  CC_MPWPASCAL = 0x8,
  CC_MAX = 0x9,
};

/* 200 */
typedef tagCALLCONV CALLCONV;

/* 175 */
typedef tagPARAMDESCEX *LPPARAMDESCEX;

/* 174 */
#pragma pack(push, 8)
struct tagPARAMDESC
{
  LPPARAMDESCEX pparamdescex;
  USHORT wParamFlags;
};
#pragma pack(pop)

/* 173 */
typedef tagPARAMDESC PARAMDESC;

/* 172 */
#pragma pack(push, 8)
union tagELEMDESC::$7C8F4CED1424251743D09680A1A0B07D
{
  IDLDESC idldesc;
  PARAMDESC paramdesc;
};
#pragma pack(pop)

/* 171 */
#pragma pack(push, 8)
struct tagELEMDESC
{
  TYPEDESC tdesc;
  #pragma pack(push, 8)
  union
  {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 169 */
#pragma pack(push, 8)
struct tagFUNCDESC
{
  MEMBERID memid;
  SCODE *lprgscode;
  ELEMDESC *lprgelemdescParam;
  FUNCKIND funckind;
  INVOKEKIND invkind;
  CALLCONV callconv;
  SHORT cParams;
  SHORT cParamsOpt;
  SHORT oVft;
  SHORT cScodes;
  ELEMDESC elemdescFunc;
  WORD wFuncFlags;
};
#pragma pack(pop)

/* 192 */
#pragma pack(push, 8)
struct tagVARIANT::$::$::$E09503A454170B491AC1C4312CE36FE6::$0FDBD249F1AECD6A49409B6B82281578
{
  PVOID pvRecord;
  IRecordInfo *pRecInfo;
};
#pragma pack(pop)

/* 182 */
#pragma pack(push, 8)
union tagVARIANT::$::$65D68C826D16CA47CF95571D7BFCD657::$E09503A454170B491AC1C4312CE36FE6
{
  LONGLONG llVal;
  LONG lVal;
  BYTE bVal;
  SHORT iVal;
  FLOAT fltVal;
  DOUBLE dblVal;
  VARIANT_BOOL boolVal;
  SCODE scode;
  CY cyVal;
  DATE date;
  BSTR bstrVal;
  IUnknown *punkVal;
  IDispatch *pdispVal;
  SAFEARRAY *parray;
  BYTE *pbVal;
  SHORT *piVal;
  LONG *plVal;
  LONGLONG *pllVal;
  FLOAT *pfltVal;
  DOUBLE *pdblVal;
  VARIANT_BOOL *pboolVal;
  SCODE *pscode;
  CY *pcyVal;
  DATE *pdate;
  BSTR *pbstrVal;
  IUnknown **ppunkVal;
  IDispatch **ppdispVal;
  SAFEARRAY **pparray;
  VARIANT *pvarVal;
  PVOID byref;
  CHAR cVal;
  USHORT uiVal;
  ULONG ulVal;
  ULONGLONG ullVal;
  INT intVal;
  UINT uintVal;
  DECIMAL *pdecVal;
  CHAR *pcVal;
  USHORT *puiVal;
  ULONG *pulVal;
  ULONGLONG *pullVal;
  INT *pintVal;
  UINT *puintVal;
  #pragma pack(push, 8)
  struct
  {
    PVOID pvRecord;
    IRecordInfo *pRecInfo;
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 181 */
#pragma pack(push, 8)
struct tagVARIANT::$E93DC971A089CC95F6C875332324C1E7::$65D68C826D16CA47CF95571D7BFCD657
{
  VARTYPE vt;
  WORD wReserved1;
  WORD wReserved2;
  WORD wReserved3;
  #pragma pack(push, 8)
  union
  {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    IUnknown *punkVal;
    IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    IUnknown **ppunkVal;
    IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    #pragma pack(push, 8)
    struct
    {
      PVOID pvRecord;
      IRecordInfo *pRecInfo;
    };
    #pragma pack(pop)
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 180 */
#pragma pack(push, 8)
union tagVARIANT::$E93DC971A089CC95F6C875332324C1E7
{
  #pragma pack(push, 8)
  struct
  {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    #pragma pack(push, 8)
    union
    {
      LONGLONG llVal;
      LONG lVal;
      BYTE bVal;
      SHORT iVal;
      FLOAT fltVal;
      DOUBLE dblVal;
      VARIANT_BOOL boolVal;
      SCODE scode;
      CY cyVal;
      DATE date;
      BSTR bstrVal;
      IUnknown *punkVal;
      IDispatch *pdispVal;
      SAFEARRAY *parray;
      BYTE *pbVal;
      SHORT *piVal;
      LONG *plVal;
      LONGLONG *pllVal;
      FLOAT *pfltVal;
      DOUBLE *pdblVal;
      VARIANT_BOOL *pboolVal;
      SCODE *pscode;
      CY *pcyVal;
      DATE *pdate;
      BSTR *pbstrVal;
      IUnknown **ppunkVal;
      IDispatch **ppdispVal;
      SAFEARRAY **pparray;
      VARIANT *pvarVal;
      PVOID byref;
      CHAR cVal;
      USHORT uiVal;
      ULONG ulVal;
      ULONGLONG ullVal;
      INT intVal;
      UINT uintVal;
      DECIMAL *pdecVal;
      CHAR *pcVal;
      USHORT *puiVal;
      ULONG *pulVal;
      ULONGLONG *pullVal;
      INT *pintVal;
      UINT *puintVal;
      #pragma pack(push, 8)
      struct
      {
        PVOID pvRecord;
        IRecordInfo *pRecInfo;
      };
      #pragma pack(pop)
    };
    #pragma pack(pop)
  };
  #pragma pack(pop)
  DECIMAL decVal;
};
#pragma pack(pop)

/* 179 */
#pragma pack(push, 8)
struct tagVARIANT
{
  #pragma pack(push, 8)
  union
  {
    #pragma pack(push, 8)
    struct
    {
      VARTYPE vt;
      WORD wReserved1;
      WORD wReserved2;
      WORD wReserved3;
      #pragma pack(push, 8)
      union
      {
        LONGLONG llVal;
        LONG lVal;
        BYTE bVal;
        SHORT iVal;
        FLOAT fltVal;
        DOUBLE dblVal;
        VARIANT_BOOL boolVal;
        SCODE scode;
        CY cyVal;
        DATE date;
        BSTR bstrVal;
        IUnknown *punkVal;
        IDispatch *pdispVal;
        SAFEARRAY *parray;
        BYTE *pbVal;
        SHORT *piVal;
        LONG *plVal;
        LONGLONG *pllVal;
        FLOAT *pfltVal;
        DOUBLE *pdblVal;
        VARIANT_BOOL *pboolVal;
        SCODE *pscode;
        CY *pcyVal;
        DATE *pdate;
        BSTR *pbstrVal;
        IUnknown **ppunkVal;
        IDispatch **ppdispVal;
        SAFEARRAY **pparray;
        VARIANT *pvarVal;
        PVOID byref;
        CHAR cVal;
        USHORT uiVal;
        ULONG ulVal;
        ULONGLONG ullVal;
        INT intVal;
        UINT uintVal;
        DECIMAL *pdecVal;
        CHAR *pcVal;
        USHORT *puiVal;
        ULONG *pulVal;
        ULONGLONG *pullVal;
        INT *pintVal;
        UINT *puintVal;
        #pragma pack(push, 8)
        struct
        {
          PVOID pvRecord;
          IRecordInfo *pRecInfo;
        };
        #pragma pack(pop)
      };
      #pragma pack(pop)
    };
    #pragma pack(pop)
    DECIMAL decVal;
  };
  #pragma pack(pop)
};
#pragma pack(pop)

/* 177 */
typedef VARIANT VARIANTARG;

/* 176 */
#pragma pack(push, 8)
struct tagPARAMDESCEX
{
  ULONG cBytes;
  VARIANTARG varDefaultValue;
};
#pragma pack(pop)

/* 184 */
#pragma pack(push, 8)
struct tagSAFEARRAY
{
  USHORT cDims;
  USHORT fFeatures;
  ULONG cbElements;
  ULONG cLocks;
  PVOID pvData;
  SAFEARRAYBOUND rgsabound[1];
};
#pragma pack(pop)

/* 193 */
#pragma pack(push, 8)
struct IRecordInfo
{
  IRecordInfoVtbl *lpVtbl;
};
#pragma pack(pop)

/* 195 */
typedef const OLECHAR *LPCOLESTR;

/* 194 */
#pragma pack(push, 8)
struct IRecordInfoVtbl
{
  HRESULT (__stdcall *QueryInterface)(IRecordInfo *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IRecordInfo *This);
  ULONG (__stdcall *Release)(IRecordInfo *This);
  HRESULT (__stdcall *RecordInit)(IRecordInfo *This, PVOID pvNew);
  HRESULT (__stdcall *RecordClear)(IRecordInfo *This, PVOID pvExisting);
  HRESULT (__stdcall *RecordCopy)(IRecordInfo *This, PVOID pvExisting, PVOID pvNew);
  HRESULT (__stdcall *GetGuid)(IRecordInfo *This, GUID *pguid);
  HRESULT (__stdcall *GetName)(IRecordInfo *This, BSTR *pbstrName);
  HRESULT (__stdcall *GetSize)(IRecordInfo *This, ULONG *pcbSize);
  HRESULT (__stdcall *GetTypeInfo)(IRecordInfo *This, ITypeInfo **ppTypeInfo);
  HRESULT (__stdcall *GetField)(IRecordInfo *This, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
  HRESULT (__stdcall *GetFieldNoCopy)(IRecordInfo *This, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField, PVOID *ppvDataCArray);
  HRESULT (__stdcall *PutField)(IRecordInfo *This, ULONG wFlags, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
  HRESULT (__stdcall *PutFieldNoCopy)(IRecordInfo *This, ULONG wFlags, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
  HRESULT (__stdcall *GetFieldNames)(IRecordInfo *This, ULONG *pcNames, BSTR *rgBstrNames);
  BOOL (__stdcall *IsMatchingType)(IRecordInfo *This, IRecordInfo *pRecordInfo);
  PVOID (__stdcall *RecordCreate)(IRecordInfo *This);
  HRESULT (__stdcall *RecordCreateCopy)(IRecordInfo *This, PVOID pvSource, PVOID *ppvDest);
  HRESULT (__stdcall *RecordDestroy)(IRecordInfo *This, PVOID pvRecord);
};
#pragma pack(pop)

/* 204 */
#pragma pack(push, 8)
union tagVARDESC::$E6274BD6A7149C9CC2413444FF769F0B
{
  ULONG oInst;
  VARIANT *lpvarValue;
};
#pragma pack(pop)

/* 206 */
enum tagVARKIND
{
  VAR_PERINSTANCE = 0x0,
  VAR_STATIC = 0x1,
  VAR_CONST = 0x2,
  VAR_DISPATCH = 0x3,
};

/* 205 */
typedef tagVARKIND VARKIND;

/* 203 */
#pragma pack(push, 8)
struct tagVARDESC
{
  MEMBERID memid;
  LPOLESTR lpstrSchema;
  #pragma pack(push, 8)
  union
  {
    ULONG oInst;
    VARIANT *lpvarValue;
  };
  #pragma pack(pop)
  ELEMDESC elemdescVar;
  WORD wVarFlags;
  VARKIND varkind;
};
#pragma pack(pop)

/* 208 */
#pragma pack(push, 8)
struct tagDISPPARAMS
{
  VARIANTARG *rgvarg;
  DISPID *rgdispidNamedArgs;
  UINT cArgs;
  UINT cNamedArgs;
};
#pragma pack(pop)

/* 210 */
#pragma pack(push, 8)
struct tagEXCEPINFO
{
  WORD wCode;
  WORD wReserved;
  BSTR bstrSource;
  BSTR bstrDescription;
  BSTR bstrHelpFile;
  DWORD dwHelpContext;
  PVOID pvReserved;
  HRESULT (__stdcall *pfnDeferredFillIn)(tagEXCEPINFO *);
  SCODE scode;
};
#pragma pack(pop)

/* 211 */
#pragma pack(push, 8)
struct ITypeLib
{
  ITypeLibVtbl *lpVtbl;
};
#pragma pack(pop)

/* 213 */
typedef tagTLIBATTR TLIBATTR;

/* 212 */
#pragma pack(push, 8)
struct ITypeLibVtbl
{
  HRESULT (__stdcall *QueryInterface)(ITypeLib *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(ITypeLib *This);
  ULONG (__stdcall *Release)(ITypeLib *This);
  UINT (__stdcall *GetTypeInfoCount)(ITypeLib *This);
  HRESULT (__stdcall *GetTypeInfo)(ITypeLib *This, UINT index, ITypeInfo **ppTInfo);
  HRESULT (__stdcall *GetTypeInfoType)(ITypeLib *This, UINT index, TYPEKIND *pTKind);
  HRESULT (__stdcall *GetTypeInfoOfGuid)(ITypeLib *This, const GUID *const guid, ITypeInfo **ppTinfo);
  HRESULT (__stdcall *GetLibAttr)(ITypeLib *This, TLIBATTR **ppTLibAttr);
  HRESULT (__stdcall *GetTypeComp)(ITypeLib *This, ITypeComp **ppTComp);
  HRESULT (__stdcall *GetDocumentation)(ITypeLib *This, INT index, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
  HRESULT (__stdcall *IsName)(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, BOOL *pfName);
  HRESULT (__stdcall *FindName)(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, ITypeInfo **ppTInfo, MEMBERID *rgMemId, USHORT *pcFound);
  void (__stdcall *ReleaseTLibAttr)(ITypeLib *This, TLIBATTR *pTLibAttr);
};
#pragma pack(pop)

/* 216 */
enum tagSYSKIND
{
  SYS_WIN16 = 0x0,
  SYS_WIN32 = 0x1,
  SYS_MAC = 0x2,
  SYS_WIN64 = 0x3,
};

/* 215 */
typedef tagSYSKIND SYSKIND;

/* 214 */
#pragma pack(push, 8)
struct tagTLIBATTR
{
  GUID guid;
  LCID lcid;
  SYSKIND syskind;
  WORD wMajorVerNum;
  WORD wMinorVerNum;
  WORD wLibFlags;
};
#pragma pack(pop)

/* 217 */
#pragma pack(push, 8)
struct IStream
{
  IStreamVtbl *lpVtbl;
};
#pragma pack(pop)

/* 219 */
typedef tagSTATSTG STATSTG;

/* 218 */
#pragma pack(push, 8)
struct IStreamVtbl
{
  HRESULT (__stdcall *QueryInterface)(IStream *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IStream *This);
  ULONG (__stdcall *Release)(IStream *This);
  HRESULT (__stdcall *Read)(IStream *This, void *pv, ULONG cb, ULONG *pcbRead);
  HRESULT (__stdcall *Write)(IStream *This, const void *pv, ULONG cb, ULONG *pcbWritten);
  HRESULT (__stdcall *Seek)(IStream *This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition);
  HRESULT (__stdcall *SetSize)(IStream *This, ULARGE_INTEGER libNewSize);
  HRESULT (__stdcall *CopyTo)(IStream *This, IStream *pstm, ULARGE_INTEGER cb, ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten);
  HRESULT (__stdcall *Commit)(IStream *This, DWORD grfCommitFlags);
  HRESULT (__stdcall *Revert)(IStream *This);
  HRESULT (__stdcall *LockRegion)(IStream *This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
  HRESULT (__stdcall *UnlockRegion)(IStream *This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
  HRESULT (__stdcall *Stat)(IStream *This, STATSTG *pstatstg, DWORD grfStatFlag);
  HRESULT (__stdcall *Clone)(IStream *This, IStream **ppstm);
};
#pragma pack(pop)

/* 220 */
#pragma pack(push, 8)
struct tagSTATSTG
{
  LPOLESTR pwcsName;
  DWORD type;
  ULARGE_INTEGER cbSize;
  FILETIME mtime;
  FILETIME ctime;
  FILETIME atime;
  DWORD grfMode;
  DWORD grfLocksSupported;
  CLSID clsid;
  DWORD grfStateBits;
  DWORD reserved;
};
#pragma pack(pop)

/* 221 */
#pragma pack(push, 8)
struct IStorage
{
  IStorageVtbl *lpVtbl;
};
#pragma pack(pop)

/* 223 */
typedef LPOLESTR *SNB;

/* 222 */
#pragma pack(push, 8)
struct IStorageVtbl
{
  HRESULT (__stdcall *QueryInterface)(IStorage *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IStorage *This);
  ULONG (__stdcall *Release)(IStorage *This);
  HRESULT (__stdcall *CreateStream)(IStorage *This, const OLECHAR *pwcsName, DWORD grfMode, DWORD reserved1, DWORD reserved2, IStream **ppstm);
  HRESULT (__stdcall *OpenStream)(IStorage *This, const OLECHAR *pwcsName, void *reserved1, DWORD grfMode, DWORD reserved2, IStream **ppstm);
  HRESULT (__stdcall *CreateStorage)(IStorage *This, const OLECHAR *pwcsName, DWORD grfMode, DWORD reserved1, DWORD reserved2, IStorage **ppstg);
  HRESULT (__stdcall *OpenStorage)(IStorage *This, const OLECHAR *pwcsName, IStorage *pstgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstg);
  HRESULT (__stdcall *CopyTo)(IStorage *This, DWORD ciidExclude, const IID *rgiidExclude, SNB snbExclude, IStorage *pstgDest);
  HRESULT (__stdcall *MoveElementTo)(IStorage *This, const OLECHAR *pwcsName, IStorage *pstgDest, const OLECHAR *pwcsNewName, DWORD grfFlags);
  HRESULT (__stdcall *Commit)(IStorage *This, DWORD grfCommitFlags);
  HRESULT (__stdcall *Revert)(IStorage *This);
  HRESULT (__stdcall *EnumElements)(IStorage *This, DWORD reserved1, void *reserved2, DWORD reserved3, IEnumSTATSTG **ppenum);
  HRESULT (__stdcall *DestroyElement)(IStorage *This, const OLECHAR *pwcsName);
  HRESULT (__stdcall *RenameElement)(IStorage *This, const OLECHAR *pwcsOldName, const OLECHAR *pwcsNewName);
  HRESULT (__stdcall *SetElementTimes)(IStorage *This, const OLECHAR *pwcsName, const FILETIME *pctime, const FILETIME *patime, const FILETIME *pmtime);
  HRESULT (__stdcall *SetClass)(IStorage *This, const IID *const clsid);
  HRESULT (__stdcall *SetStateBits)(IStorage *This, DWORD grfStateBits, DWORD grfMask);
  HRESULT (__stdcall *Stat)(IStorage *This, STATSTG *pstatstg, DWORD grfStatFlag);
};
#pragma pack(pop)

/* 224 */
#pragma pack(push, 8)
struct IEnumSTATSTG
{
  IEnumSTATSTGVtbl *lpVtbl;
};
#pragma pack(pop)

/* 225 */
#pragma pack(push, 8)
struct IEnumSTATSTGVtbl
{
  HRESULT (__stdcall *QueryInterface)(IEnumSTATSTG *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IEnumSTATSTG *This);
  ULONG (__stdcall *Release)(IEnumSTATSTG *This);
  HRESULT (__stdcall *Next)(IEnumSTATSTG *This, ULONG celt, STATSTG *rgelt, ULONG *pceltFetched);
  HRESULT (__stdcall *Skip)(IEnumSTATSTG *This, ULONG celt);
  HRESULT (__stdcall *Reset)(IEnumSTATSTG *This);
  HRESULT (__stdcall *Clone)(IEnumSTATSTG *This, IEnumSTATSTG **ppenum);
};
#pragma pack(pop)

/* 227 */
#pragma pack(push, 8)
struct tagVersionedStream
{
  GUID guidVersion;
  IStream *pStream;
};
#pragma pack(pop)

/* 273 */
typedef _SYSTEMTIME SYSTEMTIME;

/* 274 */
typedef tagSCROLLINFO SCROLLINFO;

/* 275 */
struct tagSCROLLINFO
{
  UINT cbSize;
  UINT fMask;
  int nMin;
  int nMax;
  UINT nPage;
  int nPos;
  int nTrackPos;
};

/* 277 */
typedef BYTE *LPBYTE;

/* 276 */
struct _STARTUPINFOW
{
  DWORD cb;
  LPWSTR lpReserved;
  LPWSTR lpDesktop;
  LPWSTR lpTitle;
  DWORD dwX;
  DWORD dwY;
  DWORD dwXSize;
  DWORD dwYSize;
  DWORD dwXCountChars;
  DWORD dwYCountChars;
  DWORD dwFillAttribute;
  DWORD dwFlags;
  WORD wShowWindow;
  WORD cbReserved2;
  LPBYTE lpReserved2;
  HANDLE hStdInput;
  HANDLE hStdOutput;
  HANDLE hStdError;
};

/* 278 */
typedef tagBITMAPINFO BITMAPINFO;

/* 281 */
struct tagBITMAPINFOHEADER
{
  DWORD biSize;
  LONG biWidth;
  LONG biHeight;
  WORD biPlanes;
  WORD biBitCount;
  DWORD biCompression;
  DWORD biSizeImage;
  LONG biXPelsPerMeter;
  LONG biYPelsPerMeter;
  DWORD biClrUsed;
  DWORD biClrImportant;
};

/* 280 */
typedef tagBITMAPINFOHEADER BITMAPINFOHEADER;

/* 283 */
struct tagRGBQUAD
{
  BYTE rgbBlue;
  BYTE rgbGreen;
  BYTE rgbRed;
  BYTE rgbReserved;
};

/* 282 */
typedef tagRGBQUAD RGBQUAD;

/* 279 */
struct tagBITMAPINFO
{
  BITMAPINFOHEADER bmiHeader;
  RGBQUAD bmiColors[1];
};

/* 284 */
typedef tagPAINTSTRUCT PAINTSTRUCT;

/* 285 */
typedef tagXFORM XFORM;

/* 286 */
struct tagXFORM
{
  FLOAT eM11;
  FLOAT eM12;
  FLOAT eM21;
  FLOAT eM22;
  FLOAT eDx;
  FLOAT eDy;
};

/* 287 */
typedef tagSIZE SIZE;

/* 288 */
struct tagSCROLLBARINFO
{
  DWORD cbSize;
  RECT rcScrollBar;
  int dxyLineButton;
  int xyThumbTop;
  int xyThumbBottom;
  int reserved;
  DWORD rgstate[6];
};

/* 290 */
typedef _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

/* 289 */
#pragma pack(push, 8)
struct _RTL_CRITICAL_SECTION
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
  LONG LockCount;
  LONG RecursionCount;
  HANDLE OwningThread;
  HANDLE LockSemaphore;
  ULONG_PTR SpinCount;
};
#pragma pack(pop)

/* 293 */
struct _LIST_ENTRY
{
  _LIST_ENTRY *Flink;
  _LIST_ENTRY *Blink;
};

/* 292 */
typedef _LIST_ENTRY LIST_ENTRY;

/* 291 */
struct _RTL_CRITICAL_SECTION_DEBUG
{
  WORD Type;
  WORD CreatorBackTraceIndex;
  _RTL_CRITICAL_SECTION *CriticalSection;
  LIST_ENTRY ProcessLocksList;
  DWORD EntryCount;
  DWORD ContentionCount;
  DWORD Flags;
  WORD CreatorBackTraceIndexHigh;
  WORD SpareWORD;
};

/* 296 */
typedef _EXCEPTION_RECORD EXCEPTION_RECORD;

/* 295 */
typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

/* 298 */
typedef _CONTEXT *PCONTEXT;

/* 294 */
struct _EXCEPTION_POINTERS
{
  PEXCEPTION_RECORD ExceptionRecord;
  PCONTEXT ContextRecord;
};

/* 297 */
struct _EXCEPTION_RECORD
{
  DWORD ExceptionCode;
  DWORD ExceptionFlags;
  _EXCEPTION_RECORD *ExceptionRecord;
  PVOID ExceptionAddress;
  DWORD NumberParameters;
  ULONG_PTR ExceptionInformation[15];
};

/* 299 */
struct _MEMORY_BASIC_INFORMATION
{
  PVOID BaseAddress;
  PVOID AllocationBase;
  DWORD AllocationProtect;
  SIZE_T RegionSize;
  DWORD State;
  DWORD Protect;
  DWORD Type;
};

/* 302 */
struct _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F::$AA04DEB0C6383F89F13D312A174572A9
{
  WORD wProcessorArchitecture;
  WORD wReserved;
};

/* 301 */
union _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F
{
  DWORD dwOemId;
  struct
  {
    WORD wProcessorArchitecture;
    WORD wReserved;
  };
};

/* 303 */
typedef ULONG_PTR DWORD_PTR;

/* 300 */
struct _SYSTEM_INFO
{
  union
  {
    DWORD dwOemId;
    struct
    {
      WORD wProcessorArchitecture;
      WORD wReserved;
    };
  };
  DWORD dwPageSize;
  LPVOID lpMinimumApplicationAddress;
  LPVOID lpMaximumApplicationAddress;
  DWORD_PTR dwActiveProcessorMask;
  DWORD dwNumberOfProcessors;
  DWORD dwProcessorType;
  DWORD dwAllocationGranularity;
  WORD wProcessorLevel;
  WORD wProcessorRevision;
};

/* 304 */
struct NodeAndAnims;

/* 305 */
struct XMLAnimTreeEntry;

/* 306 */
struct NURBSTrimPoint;

/* 307 */
struct NURBSTextureChannel;

/* 308 */
typedef tagWNDCLASSW WNDCLASSW;

/* 311 */
typedef LONG_PTR LRESULT;

/* 310 */
typedef LRESULT (__stdcall *WNDPROC)(HWND, UINT, WPARAM, LPARAM);

/* 312 */
typedef HICON__ *HICON;

/* 314 */
typedef HICON HCURSOR;

/* 315 */
typedef HBRUSH__ *HBRUSH;

/* 309 */
struct tagWNDCLASSW
{
  UINT style;
  WNDPROC lpfnWndProc;
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE hInstance;
  HICON hIcon;
  HCURSOR hCursor;
  HBRUSH hbrBackground;
  LPCWSTR lpszMenuName;
  LPCWSTR lpszClassName;
};

/* 313 */
struct HICON__
{
  int unused;
};

/* 316 */
struct HBRUSH__
{
  int unused;
};

/* 317 */
struct Osnap;

/* 318 */
struct MaxSDK::PointCloud::DoublePoint3;

/* 319 */
struct MaxSDK::PointCloud::PointCloudVertex;

/* 320 */
struct MaxSDK::PointCloud::UBytePoint4;

/* 321 */
struct ResourceManager;

/* 322 */
struct Frustum;

/* 323 */
typedef tagWNDCLASSEXW WNDCLASSEXW;

/* 324 */
struct tagWNDCLASSEXW
{
  UINT cbSize;
  UINT style;
  WNDPROC lpfnWndProc;
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE hInstance;
  HICON hIcon;
  HCURSOR hCursor;
  HBRUSH hbrBackground;
  LPCWSTR lpszMenuName;
  LPCWSTR lpszClassName;
  HICON hIconSm;
};

/* 325 */
struct IDrawKeyCache;

/* 326 */
struct WStr;

/* 327 */
struct ActionTable;

/* 328 */
struct Tprofiler;

/* 329 */
struct QtHelpers::QPlaceHolderCombobox;

/* 330 */
struct QtHelpers::QStyledItemSeparatorDelegate;

/* 331 */
struct QtHelpers::CameraViewportListModel;

/* 332 */
struct QtHelpers::CameraViewportCombobox;

/* 333 */
struct QtHelpers::CameraViewportDelegate;

/* 334 */
struct MaxSDK::Graphics::ARefObject;

/* 335 */
struct ATSTreeViewItem;

/* 336 */
struct ArgCountError;

/* 337 */
struct MAXScriptException;

/* 338 */
struct MAXScriptRuntimeErrorException;

/* 339 */
struct UndoObject;

/* 340 */
struct TypeError;

/* 341 */
struct RuntimeError;

/* 342 */
struct ClassDesc2;

/* 343 */
struct FPInterface;

/* 344 */
struct FPInterfaceDesc;

/* 345 */
struct ReferenceTarget;

/* 346 */
struct ReferenceMaker;

/* 347 */
struct Animatable;

/* 348 */
struct PickModeCallback;

/* 349 */
struct IAssetAccessor;

/* 350 */
struct FPMixinInterface;

/* 351 */
struct FPValue;

/* 352 */
struct Matrix3Indirect;

/* 353 */
struct DelayedMatrix3;

/* 354 */
struct DelayedNodeMat;

/* 355 */
struct ClassDesc;

/* 356 */
struct ILockableTrackImp;

/* 357 */
struct GenDerivedObject;

/* 358 */
struct DerivedObject;

/* 359 */
struct WSMDerivedObject;

/* 360 */
struct Object;

/* 361 */
struct ILockableTrack;

/* 362 */
struct IDerivedObject;

/* 363 */
struct BaseObject;

/* 364 */
struct BoxLineProc;

/* 365 */
struct RefEnumProc;

/* 366 */
struct DropType;

/* 367 */
struct DragAndDropHandler;

/* 368 */
struct ScaleTransformer;

/* 369 */
struct Transformer;

/* 370 */
struct MaxSDK::QmaxDockWidget;

/* 371 */
struct MaxSDK::QMaxTabWidget;

/* 372 */
struct MaxSDK::QMaxLegacyRollupContainer;

/* 373 */
struct MaxSDK::QmaxRollupContainer;

/* 374 */
struct MaxBmpFileIcon;

/* 375 */
struct ActionCallback;

/* 376 */
struct MtlBase;

/* 377 */
struct Texmap;

/* 378 */
struct MtlLib;

/* 379 */
struct MtlBaseLib;

/* 380 */
struct SingleRefMaker;

/* 381 */
struct Mtl;

/* 382 */
struct MaxSDK::WindowsMessageFilter;

/* 383 */
struct GeomObject;

/* 384 */
struct TriObject;

/* 385 */
struct HSVCallback;

/* 386 */
struct MaxSDK::QmaxMainWindow;

/* 387 */
struct ReferenceSaveManager::PostSave;

/* 388 */
struct ReferenceSaveManager::PreSave;

/* 389 */
struct MaxSDK::QmaxDockingWinHostDelegate;

/* 390 */
struct MaxSDK::QmaxProxyDockingWinHostDelegate;

/* 391 */
struct MaxSDK::QmaxDockingWinHost;

/* 392 */
struct MaxSDK::QMaxWinHost;

/* 393 */
struct MaxSDK::QmaxToolBar;

/* 394 */
struct FCurveDrawAccelerator;

/* 395 */
struct ViewportTextButton;

/* 396 */
struct XMLAnimTreeEntryList;

/* 397 */
struct Control;

/* 398 */
struct MaxSDK::SingleWeakRefMaker;

/* 399 */
struct SClassUIInfo;

/* 400 */
struct Matrix3;

/* 401 */
struct Point3;

/* 402 */
struct Material;

/* 403 */
struct Light;

/* 404 */
struct TextureInfo;

/* 405 */
struct HardwareMaterial;

/* 406 */
struct GWinSetup;

/* 407 */
struct MaxSDK::Util::Exception;

/* 408 */
struct MaxSDK::Util::OutOfRangeException;

/* 409 */
struct InterfaceServer;

/* 410 */
struct BaseInterface;

/* 411 */
struct BaseInterfaceServer;

/* 412 */
struct MaxSDK::Util::TextFile::Writer;

/* 413 */
struct MaxSDK::Util::RunTimeException;

/* 414 */
struct StaticSymbolResolver;

/* 415 */
struct VertexNormalsControl;

/* 416 */
struct Mesh;

/* 417 */
struct HWMesh;

/* 418 */
struct MeshTempData;

/* 419 */
struct MNMesh;

/* 420 */
struct ILegacySceneDisplayCallback;

/* 421 */
struct QWinHost;

/* 422 */
struct QWinWidget;

/* 423 */
struct QString;

/* 424 */
struct QVariant;

/* 425 */
struct QObject;

/* 426 */
struct QMetaObject;

/* 427 */
struct QByteArray;

/* 428 */
struct QTranslator;

/* 429 */
struct QAbstractItemModel;

/* 430 */
struct QAbstractListModel;

/* 431 */
struct QPixmap;

/* 432 */
struct QPaintDevice;

/* 433 */
struct QHBoxLayout;

/* 434 */
struct QWidget;

/* 435 */
struct QBoxLayout;

/* 436 */
struct QLayout;

/* 437 */
struct QLayoutItem;

/* 438 */
struct QComboBox;

/* 439 */
struct QToolBar;

/* 440 */
struct QActionGroup;

/* 441 */
struct QToolButton;

/* 442 */
struct QAbstractButton;

/* 443 */
struct QButtonGroup;

/* 444 */
struct QLabel;

/* 445 */
struct QGridLayout;

/* 446 */
struct QPushButton;

/* 447 */
struct QDockWidget;

/* 448 */
struct QTabWidget;

/* 449 */
struct QVBoxLayout;

/* 450 */
struct QFrame;

/* 451 */
struct QScrollArea;

/* 452 */
struct QAbstractScrollArea;

/* 453 */
struct QApplication;

/* 454 */
struct QMainWindow;

/* 455 */
struct QAction;

/* 456 */
struct QMenu;

/* 457 */
struct QDialog;

/* 458 */
struct QAbstractSpinBox;

/* 459 */
struct QGroupBox;

/* 460 */
struct QCheckBox;

/* 461 */
struct QDoubleSpinBox;

/* 462 */
struct QSpacerItem;

/* 463 */
struct QStyledItemDelegate;

/* 464 */
struct QAbstractItemDelegate;

/* 465 */
struct CLM::LicenseServices::CClmLicenseEventUIListener;

/* 466 */
struct tbb::internal::allocate_child_proxy;

/* 467 */
struct tbb::task;

/* 468 */
struct tbb::internal;

/* 469 */
struct RUNTIME_FUNCTION
{
  void *__ptr32 FunctionStart;
  void *__ptr32 FunctionEnd;
  void *__ptr32 UnwindInfo;
};

/* 470 */
struct UNWIND_INFO
{
  char Ver3_Flags;
  char PrologSize;
  char CntUnwindCodes;
  char FrReg_FrRegOff;
};

/* 471 */
struct UNWIND_CODE
{
  char PrologOff;
  char OpCode_OpInfo;
};

/* 472 */
struct C_SCOPE_TABLE
{
  void *__ptr32 Begin;
  void *__ptr32 End;
  void *__ptr32 Handler;
  void *__ptr32 Target;
};

/* 473 */
struct FuncInfo
{
  int magicNumber;
  int maxState;
  void *__ptr32 pUnwindMap;
  int nTryBlocks;
  void *__ptr32 pTryBlockMap;
  int nIPMapEntries;
  void *__ptr32 pIPtoStateMap;
  int dispUnwindHelp;
  void *__ptr32 pESTypeList;
  int EHFlags;
};

/* 474 */
struct ESTypeList
{
  int nCount;
  void *__ptr32 pTypeArray;
};

/* 475 */
struct UnwindMapEntry
{
  int toState;
  void *__ptr32 action;
};

/* 476 */
struct IPtoStateMap
{
  void *__ptr32 pc;
  int state;
};

/* 477 */
struct TryBlockMapEntry
{
  int tryLow;
  int tryHigh;
  int catchHigh;
  int nCatches;
  void *__ptr32 pHandlerArray;
};

/* 478 */
struct HandlerType
{
  int adjectives;
  void *__ptr32 pType;
  int dispCatchObj;
  void *__ptr32 addressOfHandler;
};

/* 479 */
struct TypeDescriptor
{
  void *pVFTable;
  void *spare;
  char name[];
};

/* 480 */
struct MaxSDK;

/* 481 */
struct Box2;

/* 482 */
struct NumberFormatter;

/* 483 */
struct MaxGraphics;

/* 484 */
struct MaxSDK::Graphics;

/* 485 */
struct UndoManager;

/* 486 */
struct CUIFrameMgr;

/* 487 */
struct ConfigManager;

/* 488 */
struct MacroEntry::DisableCompileGuard;

/* 489 */
struct MaxGraphics::DeviceMonitorInformation;

/* 490 */
struct MaxGraphics::DeviceMonitorQuery;

/* 491 */
struct BitArray;

/* 492 */
struct MaxSDK::Util::Path;

/* 493 */
struct DllDir;

/* 494 */
struct ClassDirectory;

/* 495 */
struct MaxSDK::AssetManagement::AssetUser;

/* 496 */
struct DialogResizer;

/* 497 */
struct MaxSDK::Util;

/* 498 */
struct std::_Lockit;

/* 499 */
struct ScopedMaxScriptEvaluationContext;

/* 500 */
struct ScopedSaveCurrentFrames;

/* 501 */
struct ObjectState;

/* 502 */
struct Box3;

/* 503 */
struct DependentEnumProc;

/* 504 */
struct AnimPropertyList;

/* 505 */
struct ShapeObject;

/* 506 */
struct Quat;

/* 507 */
struct ClassEntry;

/* 508 */
struct BMM_IOList;

/* 509 */
struct MaxSDK::Util::MaxString;

/* 510 */
struct PtrVector;

/* 511 */
struct ParamDef;

/* 512 */
union __declspec(align(16)) __m128i
{
  __int8 m128i_i8[16];
  __int16 m128i_i16[8];
  __int32 m128i_i32[4];
  __int64 m128i_i64[2];
  unsigned __int8 m128i_u8[16];
  unsigned __int16 m128i_u16[8];
  unsigned __int32 m128i_u32[4];
  unsigned __int64 m128i_u64[2];
};

/* 513 */
struct RegionTools;

/* 514 */
struct QMapDataBase;

/* 515 */
struct SubClassList;

/* 516 */
struct QIcon;

/* 517 */
struct QCursor;

/* 518 */
struct QFont;

/* 519 */
struct QColor;

/* 520 */
struct Color;

/* 521 */
struct QMouseEvent;

/* 522 */
struct RotateTransformer;

/* 523 */
struct RightClickMenuManager;

/* 524 */
struct Spline3D;

/* 525 */
struct EventRouter;

/* 526 */
struct SplineShape;

/* 527 */
struct PolyShape;

/* 528 */
struct BezierShape;

/* 529 */
struct OperationDesc;

/* 530 */
struct QArrayData;

/* 531 */
struct MaxSDK::QmaxRollup;

/* 532 */
struct URLTab;

/* 533 */
struct DllDesc;

/* 534 */
struct FPParams;

/* 535 */
struct ExclList;

/* 536 */
struct QObjectData;

/* 537 */
struct MouseManager;

/* 538 */
struct Bitmap;

/* 539 */
struct BitmapInfo;

/* 540 */
struct WindowStream;

/* 541 */
struct PBBitmap;

/* 542 */
struct RotationValue;

/* 543 */
struct AngAxis;

/* 544 */
struct HashTable;

/* 545 */
struct MaxDXUtilites;

/* 546 */
struct CtrlHitLog;

/* 547 */
struct HitLog;

/* 548 */
struct FileIO;

/* 549 */
struct DesignPackageWrapper_AutoDelete;

/* 550 */
struct MaxSDK::Util::TextFile::Reader;

/* 551 */
struct MaxSDK::Util::TextFile::BaseTextWriter;

/* 552 */
struct DependentIterator;

/* 553 */
struct Random;

/* 554 */
struct UtilityInterface;

/* 555 */
struct MaxIcon;

/* 556 */
struct NameTab;

/* 557 */
struct MtlBaseList;

/* 558 */
struct FilterList;

/* 559 */
struct MaxNetSelector;

/* 560 */
struct OsnapManager;

/* 561 */
struct GammaMgr;

/* 562 */
struct CommonRendererUIInternal;

/* 563 */
struct PropertyManager;

/* 564 */
struct QStyleOptionGroupBox;

/* 565 */
struct QStyleOption;

/* 566 */
struct QRect;

/* 567 */
struct QDesktopWidget;

/* 568 */
struct MXS_Exit_ValueLocal_Scope;

/* 569 */
struct MtlList;

/* 570 */
struct LogLUV32Pixel;

/* 571 */
struct MenuManager;

/* 572 */
struct QMetaObject::Connection;

/* 573 */
struct EaseCurveList;

/* 574 */
struct MultCurveList;

/* 575 */
struct QMessageLogger;

/* 576 */
struct QtHelpers::QSignalBlocker;

/* 577 */
struct MaxGraphics::TimerObject;

/* 578 */
struct ToolTip;

/* 579 */
struct DMatrix3;

/* 580 */
struct ImageFilterInfo;

/* 581 */
struct BMM_IOHandler;

/* 582 */
struct FilterManager;

/* 583 */
struct FLT_FilterList;

/* 584 */
struct bmmHistoryList;

/* 585 */
struct Point4;

/* 586 */
struct ToolTipExtender;

/* 587 */
struct CStr;

/* 588 */
struct SchematicViewProperty;

/* 589 */
struct UnknownSystemException;

/* 590 */
struct Function;

/* 591 */
struct ParamBlockDesc2;

/* 592 */
struct QMutex;

/* 593 */
struct MaxSDK::QmaxTranslationLoader;

/* 594 */
struct Primitive;

/* 595 */
struct IActionManager10;

/* 596 */
struct MoveTransformer;

/* 597 */
struct DialogTools::ModelessWindowModalizer;

/* 598 */
struct RandGenerator;

/* 599 */
struct QMutexLocker;

/* 600 */
struct AColor;

/* 601 */
struct QListData;

/* 602 */
struct ViewportConfigPref::ViewportSettingXmlGuard;

/* 603 */
struct MaxGraphics::AutoPIXUserEvent;

/* 604 */
struct MaxSDK::Thumbnails;

/* 605 */
struct KeyClipboardHelper;

/* 606 */
struct AnimationClipboardHelper;

/* 607 */
struct BezFontManager;

/* 608 */
struct DllDirInternal;

/* 609 */
struct MaxLocaleHandler;

/* 610 */
struct CUIFormatIOStrategy;

/* 611 */
struct CLRFormatIOStrategy;

/* 612 */
struct MarketDefaults;

/* 613 */
struct ObRefModApp;

/* 614 */
struct DummyObject;

/* 615 */
struct AnimAppData;

/* 616 */
struct SuspendAll;

/* 617 */
struct AutoNotifier;

/* 618 */
struct CLM::LicenseServices::ClmLicenseMgrJSonHelper;

/* 619 */
struct QMaxStyle;

/* 620 */
struct QWindow;

/* 621 */
struct CLM::LicenseServices::ClmLicenseMgrOptionsBuilder;

/* 622 */
struct PatchObject;

/* 623 */
struct ModApp;

/* 624 */
struct ModContext;

/* 625 */
struct QPainter;

/* 626 */
struct QPalette;

/* 627 */
struct QPen;

/* 628 */
struct QTabBar;

/* 629 */
struct MaxSDK::QMaxMultiResIconManager;

/* 630 */
struct MaxSDK::HoldBegin;

/* 631 */
struct DropScriptDropType;

/* 632 */
struct QMapNodeBase;

/* 633 */
struct Array;

/* 634 */
struct Plane;

/* 635 */
struct QSettings;

/* 636 */
struct QDebug;

/* 637 */
struct SceneFileSaveTransactionGuard;

/* 638 */
struct std::codecvt_base;

/* 639 */
struct DefaultRemapDir;

/* 640 */
struct BitmapProxyTemporaryDisableGuard;

/* 641 */
struct DesignPackageWrapper_3DSMax;

/* 642 */
struct NoteKeyTab;

/* 643 */
struct ActionItem;

/* 644 */
struct NotifyCollapseMaintainCustAttribEnumProc2;

/* 645 */
struct BitmapStorage;

/* 646 */
struct SpaceArrayCallback;

/* 647 */
struct ImportExportInterface;

/* 648 */
struct QtHelpers;

/* 649 */
struct nwMaxJob;

/* 650 */
struct CUIBaseXML;

/* 651 */
struct DynamicMenu;

/* 652 */
struct MaxGraphics::ClientDriver;

/* 653 */
struct MaxGraphics::ProgressiveRenderingParams;

/* 654 */
struct MessagePeeker;

/* 655 */
struct Util;

/* 656 */
struct QStatusBar;

/* 657 */
struct QmaxActionOverlayManager;

/* 658 */
struct GUPManager;

/* 659 */
struct PropertyStg;

/* 660 */
struct QSizePolicy;

/* 661 */
struct ViewFile;

/* 662 */
struct PrintManager;

/* 663 */
struct BitmapProxyRenderModeOverrideGuard;

/* 664 */
struct Collectable;

/* 665 */
struct QBrush;

/* 666 */
struct MaxGraphics::AnimatableNotifier;

/* 667 */
struct MaxGraphics::DirectXModeShadowSwitch;

/* 668 */
struct QWebEngineProfile;

/* 669 */
struct QProxyStyle;

/* 670 */
struct QtHelpers::QtUiManager;

/* 671 */
struct InternalUtil;

