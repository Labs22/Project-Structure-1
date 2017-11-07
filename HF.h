/*
Alpha stage
*/

struct _RTL_CRITICAL_SECTION_DEBUG;
struct HDC__;
struct tagPOINT;
struct HWND__;
struct tagLOGFONTW;
struct _BLENDFUNCTION;
struct tagRGBQUAD;
struct HINSTANCE__;
struct HICON__;
struct HBRUSH__;
struct tagSCROLLINFO;
struct tagVARIANT;
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
struct tagVARDESC;
struct tagDISPPARAMS;
struct tagEXCEPINFO;
struct ITypeLib;
struct ITypeLibVtbl;
struct tagTLIBATTR;
struct tagSAFEARRAY;
struct tagDEC;
struct IRecordInfo;
struct IRecordInfoVtbl;
union _LARGE_INTEGER;
struct _SYSTEMTIME;
struct _EXCEPTION_RECORD;
struct tagINITCOMMONCONTROLSEX;
struct _ITEMIDLIST;
struct tagSTGMEDIUM;
struct HBITMAP__;
struct HENHMETAFILE__;
struct IStream;
struct IStreamVtbl;
union _ULARGE_INTEGER;
struct tagSTATSTG;
struct IStorage;
struct IStorageVtbl;
struct IEnumSTATSTG;
struct IEnumSTATSTGVtbl;
struct _SHELLEXECUTEINFOW;
struct HKEY__;
struct tagWINDOWPLACEMENT;
struct _GENERIC_MAPPING;
struct _devicemodeW;
struct tagPROPVARIANT;
struct tagCLIPDATA;
struct tagVersionedStream;
struct _SHFILEINFOW;
struct _CRYPTOAPI_BLOB;
struct threadlocaleinfostruct;
struct lconv;

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
typedef _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

/* 12 */
typedef int LONG;

/* 13 */
typedef void *HANDLE;

/* 14 */
typedef unsigned __int64 ULONG_PTR;

/* 5 */
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

/* 8 */
typedef unsigned __int16 WORD;

/* 10 */
struct _LIST_ENTRY
{
  _LIST_ENTRY *Flink;
  _LIST_ENTRY *Blink;
};

/* 9 */
typedef _LIST_ENTRY LIST_ENTRY;

/* 11 */
typedef unsigned int DWORD;

/* 7 */
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

/* 15 */
struct tagRECT
{
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
};

/* 17 */
typedef HDC__ *HDC;

/* 19 */
typedef int BOOL;

/* 20 */
typedef tagRECT RECT;

/* 21 */
typedef unsigned __int8 BYTE;

/* 16 */
struct tagPAINTSTRUCT
{
  HDC hdc;
  BOOL fErase;
  RECT rcPaint;
  BOOL fRestore;
  BOOL fIncUpdate;
  BYTE rgbReserved[32];
};

/* 18 */
struct HDC__
{
  int unused;
};

/* 22 */
typedef tagPOINT POINT;

/* 23 */
struct tagPOINT
{
  LONG x;
  LONG y;
};

/* 25 */
typedef HWND__ *HWND;

/* 24 */
struct tagTRACKMOUSEEVENT
{
  DWORD cbSize;
  DWORD dwFlags;
  HWND hwndTrack;
  DWORD dwHoverTime;
};

/* 26 */
struct HWND__
{
  int unused;
};

/* 27 */
typedef tagLOGFONTW LOGFONTW;

/* 30 */
typedef unsigned __int16 wchar_t;

/* 29 */
typedef wchar_t WCHAR;

/* 28 */
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

/* 31 */
struct _FILETIME
{
  DWORD dwLowDateTime;
  DWORD dwHighDateTime;
};

/* 32 */
typedef _BLENDFUNCTION BLENDFUNCTION;

/* 33 */
struct _BLENDFUNCTION
{
  BYTE BlendOp;
  BYTE BlendFlags;
  BYTE SourceConstantAlpha;
  BYTE AlphaFormat;
};

/* 34 */
typedef tagRGBQUAD RGBQUAD;

/* 35 */
struct tagRGBQUAD
{
  BYTE rgbBlue;
  BYTE rgbGreen;
  BYTE rgbRed;
  BYTE rgbReserved;
};

/* 37 */
typedef unsigned int UINT;

/* 42 */
typedef __int64 LONG_PTR;

/* 43 */
typedef LONG_PTR LRESULT;

/* 40 */
typedef unsigned __int64 UINT_PTR;

/* 39 */
typedef UINT_PTR WPARAM;

/* 41 */
typedef LONG_PTR LPARAM;

/* 38 */
typedef LRESULT (__stdcall *WNDPROC)(HWND, UINT, WPARAM, LPARAM);

/* 44 */
typedef HINSTANCE__ *HINSTANCE;

/* 46 */
typedef HICON__ *HICON;

/* 48 */
typedef HICON HCURSOR;

/* 49 */
typedef HBRUSH__ *HBRUSH;

/* 51 */
typedef const WCHAR *LPCWSTR;

/* 36 */
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

/* 45 */
struct HINSTANCE__
{
  int unused;
};

/* 47 */
struct HICON__
{
  int unused;
};

/* 50 */
struct HBRUSH__
{
  int unused;
};

/* 52 */
struct _OSVERSIONINFOW
{
  DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  WCHAR szCSDVersion[128];
};

/* 53 */
typedef GUID IID;

/* 54 */
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

/* 55 */
struct tagSIZE
{
  LONG cx;
  LONG cy;
};

/* 56 */
typedef tagSCROLLINFO SCROLLINFO;

/* 57 */
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

/* 59 */
typedef tagVARIANT VARIANT;

/* 58 */
typedef VARIANT VARIANTARG;

/* 63 */
typedef unsigned __int16 VARTYPE;

/* 65 */
typedef __int64 LONGLONG;

/* 66 */
typedef __int16 SHORT;

/* 67 */
typedef float FLOAT;

/* 68 */
typedef double DOUBLE;

/* 69 */
typedef __int16 VARIANT_BOOL;

/* 70 */
typedef LONG SCODE;

/* 73 */
struct tagCY::$983F061E0B702DD8AE0B4B955735A6A3
{
  unsigned int Lo;
  int Hi;
};

/* 72 */
union tagCY
{
  struct
  {
    unsigned int Lo;
    int Hi;
  };
  LONGLONG int64;
};

/* 71 */
typedef tagCY CY;

/* 74 */
typedef double DATE;

/* 76 */
typedef WCHAR OLECHAR;

/* 75 */
typedef OLECHAR *BSTR;

/* 141 */
typedef tagSAFEARRAY SAFEARRAY;

/* 130 */
typedef void *PVOID;

/* 143 */
typedef char CHAR;

/* 97 */
typedef unsigned __int16 USHORT;

/* 80 */
typedef unsigned int ULONG;

/* 144 */
typedef unsigned __int64 ULONGLONG;

/* 129 */
typedef int INT;

/* 145 */
typedef tagDEC DECIMAL;

/* 151 */
#pragma pack(push, 8)
struct tagVARIANT::$::$::$E09503A454170B491AC1C4312CE36FE6::$0FDBD249F1AECD6A49409B6B82281578
{
  PVOID pvRecord;
  IRecordInfo *pRecInfo;
};
#pragma pack(pop)

/* 64 */
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

/* 62 */
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

/* 148 */
struct tagDEC::$64EC678C49E7BE49873AFBFB7A849D34::$7F8459940C2B08BD5D82B0F27239141B
{
  BYTE scale;
  BYTE sign;
};

/* 147 */
union tagDEC::$64EC678C49E7BE49873AFBFB7A849D34
{
  struct
  {
    BYTE scale;
    BYTE sign;
  };
  USHORT signscale;
};

/* 150 */
struct tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301::$674876891A86A76F12C10005982BCA56
{
  ULONG Lo32;
  ULONG Mid32;
};

/* 149 */
union tagDEC::$D28E26DEC3EC762C06C2AA9D0F7AC301
{
  struct
  {
    ULONG Lo32;
    ULONG Mid32;
  };
  ULONGLONG Lo64;
};

/* 146 */
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

/* 61 */
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

/* 60 */
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

/* 77 */
#pragma pack(push, 8)
struct IUnknown
{
  IUnknownVtbl *lpVtbl;
};
#pragma pack(pop)

/* 81 */
#pragma pack(push, 8)
struct IDispatch
{
  IDispatchVtbl *lpVtbl;
};
#pragma pack(pop)

/* 99 */
#pragma pack(push, 8)
struct tagSAFEARRAYBOUND
{
  ULONG cElements;
  LONG lLbound;
};
#pragma pack(pop)

/* 98 */
typedef tagSAFEARRAYBOUND SAFEARRAYBOUND;

/* 142 */
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

/* 152 */
#pragma pack(push, 8)
struct IRecordInfo
{
  IRecordInfoVtbl *lpVtbl;
};
#pragma pack(pop)

/* 79 */
typedef int HRESULT;

/* 78 */
#pragma pack(push, 8)
struct IUnknownVtbl
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *This, const IID *const riid, void **ppvObject);
  ULONG (__stdcall *AddRef)(IUnknown *This);
  ULONG (__stdcall *Release)(IUnknown *This);
};
#pragma pack(pop)

/* 83 */
typedef DWORD LCID;

/* 90 */
typedef OLECHAR *LPOLESTR;

/* 89 */
typedef LONG DISPID;

/* 131 */
typedef tagDISPPARAMS DISPPARAMS;

/* 133 */
typedef tagEXCEPINFO EXCEPINFO;

/* 82 */
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

/* 154 */
typedef const OLECHAR *LPCOLESTR;

/* 153 */
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

/* 84 */
#pragma pack(push, 8)
struct ITypeInfo
{
  ITypeInfoVtbl *lpVtbl;
};
#pragma pack(pop)

/* 132 */
#pragma pack(push, 8)
struct tagDISPPARAMS
{
  VARIANTARG *rgvarg;
  DISPID *rgdispidNamedArgs;
  UINT cArgs;
  UINT cNamedArgs;
};
#pragma pack(pop)

/* 134 */
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

/* 86 */
typedef tagTYPEATTR TYPEATTR;

/* 109 */
typedef tagFUNCDESC FUNCDESC;

/* 124 */
typedef tagVARDESC VARDESC;

/* 88 */
typedef DISPID MEMBERID;

/* 100 */
typedef DWORD HREFTYPE;

/* 121 */
enum tagINVOKEKIND
{
  INVOKE_FUNC = 0x1,
  INVOKE_PROPERTYGET = 0x2,
  INVOKE_PROPERTYPUT = 0x4,
  INVOKE_PROPERTYPUTREF = 0x8,
};

/* 120 */
typedef tagINVOKEKIND INVOKEKIND;

/* 85 */
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

/* 92 */
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

/* 91 */
typedef tagTYPEKIND TYPEKIND;

/* 95 */
#pragma pack(push, 8)
union tagTYPEDESC::$AC700B6542D8071E244CADABF8A32897
{
  tagTYPEDESC *lptdesc;
  tagARRAYDESC *lpadesc;
  HREFTYPE hreftype;
};
#pragma pack(pop)

/* 94 */
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

/* 93 */
typedef tagTYPEDESC TYPEDESC;

/* 102 */
#pragma pack(push, 8)
struct tagIDLDESC
{
  ULONG_PTR dwReserved;
  USHORT wIDLFlags;
};
#pragma pack(pop)

/* 101 */
typedef tagIDLDESC IDLDESC;

/* 87 */
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

/* 103 */
#pragma pack(push, 8)
struct ITypeComp
{
  ITypeCompVtbl *lpVtbl;
};
#pragma pack(pop)

/* 111 */
typedef tagELEMDESC ELEMDESC;

/* 119 */
enum tagFUNCKIND
{
  FUNC_VIRTUAL = 0x0,
  FUNC_PUREVIRTUAL = 0x1,
  FUNC_NONVIRTUAL = 0x2,
  FUNC_STATIC = 0x3,
  FUNC_DISPATCH = 0x4,
};

/* 118 */
typedef tagFUNCKIND FUNCKIND;

/* 123 */
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

/* 122 */
typedef tagCALLCONV CALLCONV;

/* 116 */
typedef tagPARAMDESCEX *LPPARAMDESCEX;

/* 115 */
#pragma pack(push, 8)
struct tagPARAMDESC
{
  LPPARAMDESCEX pparamdescex;
  USHORT wParamFlags;
};
#pragma pack(pop)

/* 114 */
typedef tagPARAMDESC PARAMDESC;

/* 113 */
#pragma pack(push, 8)
union tagELEMDESC::$7C8F4CED1424251743D09680A1A0B07D
{
  IDLDESC idldesc;
  PARAMDESC paramdesc;
};
#pragma pack(pop)

/* 112 */
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

/* 110 */
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

/* 126 */
#pragma pack(push, 8)
union tagVARDESC::$E6274BD6A7149C9CC2413444FF769F0B
{
  ULONG oInst;
  VARIANT *lpvarValue;
};
#pragma pack(pop)

/* 128 */
enum tagVARKIND
{
  VAR_PERINSTANCE = 0x0,
  VAR_STATIC = 0x1,
  VAR_CONST = 0x2,
  VAR_DISPATCH = 0x3,
};

/* 127 */
typedef tagVARKIND VARKIND;

/* 125 */
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

/* 135 */
#pragma pack(push, 8)
struct ITypeLib
{
  ITypeLibVtbl *lpVtbl;
};
#pragma pack(pop)

/* 96 */
#pragma pack(push, 8)
struct tagARRAYDESC
{
  TYPEDESC tdescElem;
  USHORT cDims;
  SAFEARRAYBOUND rgbounds[1];
};
#pragma pack(pop)

/* 106 */
enum tagDESCKIND
{
  DESCKIND_NONE = 0x0,
  DESCKIND_FUNCDESC = 0x1,
  DESCKIND_VARDESC = 0x2,
  DESCKIND_TYPECOMP = 0x3,
  DESCKIND_IMPLICITAPPOBJ = 0x4,
  DESCKIND_MAX = 0x5,
};

/* 105 */
typedef tagDESCKIND DESCKIND;

/* 107 */
typedef tagBINDPTR BINDPTR;

/* 104 */
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

/* 117 */
#pragma pack(push, 8)
struct tagPARAMDESCEX
{
  ULONG cBytes;
  VARIANTARG varDefaultValue;
};
#pragma pack(pop)

/* 137 */
typedef tagTLIBATTR TLIBATTR;

/* 136 */
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

/* 108 */
#pragma pack(push, 8)
union tagBINDPTR
{
  FUNCDESC *lpfuncdesc;
  VARDESC *lpvardesc;
  ITypeComp *lptcomp;
};
#pragma pack(pop)

/* 140 */
enum tagSYSKIND
{
  SYS_WIN16 = 0x0,
  SYS_WIN32 = 0x1,
  SYS_MAC = 0x2,
  SYS_WIN64 = 0x3,
};

/* 139 */
typedef tagSYSKIND SYSKIND;

/* 138 */
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

/* 155 */
struct tagACCEL
{
  BYTE fVirt;
  WORD key;
  WORD cmd;
};

/* 156 */
#pragma pack(push, 8)
struct tagFONTDESC
{
  UINT cbSizeofstruct;
  LPOLESTR lpstrName;
  CY cySize;
  SHORT sWeight;
  SHORT sCharset;
  BOOL fItalic;
  BOOL fUnderline;
  BOOL fStrikethrough;
};
#pragma pack(pop)

/* 158 */
typedef _FILETIME FILETIME;

/* 157 */
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

/* 159 */
typedef _LARGE_INTEGER LARGE_INTEGER;

/* 161 */
struct _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E
{
  DWORD LowPart;
  LONG HighPart;
};

/* 160 */
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

/* 163 */
typedef ULONG_PTR SIZE_T;

/* 162 */
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

/* 166 */
struct _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F::$AA04DEB0C6383F89F13D312A174572A9
{
  WORD wProcessorArchitecture;
  WORD wReserved;
};

/* 165 */
union _SYSTEM_INFO::$A707B71C060B6D10F73A71917EA8473F
{
  DWORD dwOemId;
  struct
  {
    WORD wProcessorArchitecture;
    WORD wReserved;
  };
};

/* 167 */
typedef void *LPVOID;

/* 168 */
typedef ULONG_PTR DWORD_PTR;

/* 164 */
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

/* 169 */
struct _cpinfo
{
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
};

/* 170 */
typedef _SYSTEMTIME SYSTEMTIME;

/* 171 */
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

/* 173 */
typedef unsigned __int64 DWORD64;

/* 179 */
struct __declspec(align(16)) _M128A
{
  ULONGLONG Low;
  LONGLONG High;
};

/* 178 */
typedef _M128A M128A;

/* 177 */
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

/* 176 */
typedef _XSAVE_FORMAT XSAVE_FORMAT;

/* 175 */
typedef XSAVE_FORMAT XMM_SAVE_AREA32;

/* 180 */
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

/* 174 */
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

/* 172 */
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

/* 183 */
typedef _EXCEPTION_RECORD EXCEPTION_RECORD;

/* 182 */
typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

/* 185 */
typedef _CONTEXT *PCONTEXT;

/* 181 */
struct _EXCEPTION_POINTERS
{
  PEXCEPTION_RECORD ExceptionRecord;
  PCONTEXT ContextRecord;
};

/* 184 */
struct _EXCEPTION_RECORD
{
  DWORD ExceptionCode;
  DWORD ExceptionFlags;
  _EXCEPTION_RECORD *ExceptionRecord;
  PVOID ExceptionAddress;
  DWORD NumberParameters;
  ULONG_PTR ExceptionInformation[15];
};

/* 187 */
typedef WCHAR *LPWSTR;

/* 188 */
typedef BYTE *LPBYTE;

/* 186 */
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

/* 189 */
struct _TIME_ZONE_INFORMATION
{
  LONG Bias;
  WCHAR StandardName[32];
  SYSTEMTIME StandardDate;
  LONG StandardBias;
  WCHAR DaylightName[32];
  SYSTEMTIME DaylightDate;
  LONG DaylightBias;
};

/* 190 */
struct _SECURITY_ATTRIBUTES
{
  DWORD nLength;
  LPVOID lpSecurityDescriptor;
  BOOL bInheritHandle;
};

/* 192 */
struct _SLIST_HEADER::$2AAD3A9E0F86A5BF9BE50654CA710F62
{
  ULONGLONG Alignment;
  ULONGLONG Region;
};

/* 193 */
struct _SLIST_HEADER::$3F637E9514009DECFE5B852E9243EE23
{
  unsigned __int64 Depth : 16;
  unsigned __int64 Sequence : 9;
  unsigned __int64 NextEntry : 39;
  unsigned __int64 HeaderType : 1;
  unsigned __int64 Init : 1;
  unsigned __int64 Reserved : 59;
  unsigned __int64 Region : 3;
};

/* 194 */
struct _SLIST_HEADER::$DCF2CE03468C00829F2E90EE004D3AA7
{
  unsigned __int64 Depth : 16;
  unsigned __int64 Sequence : 48;
  unsigned __int64 HeaderType : 1;
  unsigned __int64 Init : 1;
  unsigned __int64 Reserved : 2;
  unsigned __int64 NextEntry : 60;
};

/* 195 */
struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F
{
  unsigned __int64 Depth : 16;
  unsigned __int64 Sequence : 48;
  unsigned __int64 HeaderType : 1;
  unsigned __int64 Reserved : 3;
  unsigned __int64 NextEntry : 60;
};

/* 191 */
union __declspec(align(16)) _SLIST_HEADER
{
  struct
  {
    ULONGLONG Alignment;
    ULONGLONG Region;
  };
  _SLIST_HEADER::$3F637E9514009DECFE5B852E9243EE23 Header8;
  _SLIST_HEADER::$DCF2CE03468C00829F2E90EE004D3AA7 Header16;
  _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F HeaderX64;
};

/* 196 */
struct _PROCESS_INFORMATION
{
  HANDLE hProcess;
  HANDLE hThread;
  DWORD dwProcessId;
  DWORD dwThreadId;
};

/* 197 */
typedef tagINITCOMMONCONTROLSEX INITCOMMONCONTROLSEX;

/* 198 */
struct tagINITCOMMONCONTROLSEX
{
  DWORD dwSize;
  DWORD dwICC;
};

/* 199 */
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

/* 200 */
struct tagMSG
{
  HWND hwnd;
  UINT message;
  WPARAM wParam;
  LPARAM lParam;
  DWORD time;
  POINT pt;
};

/* 203 */
typedef _ITEMIDLIST ITEMIDLIST;

/* 202 */
typedef const ITEMIDLIST *LPCITEMIDLIST;

/* 207 */
typedef int (__stdcall *BFFCALLBACK)(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData);

/* 201 */
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

/* 206 */
#pragma pack(push, 1)
struct _SHITEMID
{
  USHORT cb;
  BYTE abID[1];
};
#pragma pack(pop)

/* 205 */
typedef _SHITEMID SHITEMID;

/* 204 */
#pragma pack(push, 1)
struct _ITEMIDLIST
{
  SHITEMID mkid;
};
#pragma pack(pop)

/* 209 */
typedef tagSTGMEDIUM uSTGMEDIUM;

/* 208 */
typedef uSTGMEDIUM STGMEDIUM;

/* 212 */
typedef HBITMAP__ *HBITMAP;

/* 214 */
typedef void *HMETAFILEPICT;

/* 215 */
typedef HENHMETAFILE__ *HENHMETAFILE;

/* 217 */
typedef HANDLE HGLOBAL;

/* 211 */
#pragma pack(push, 8)
union tagSTGMEDIUM::$7B772CC839E5463FC51219F893F364BB
{
  HBITMAP hBitmap;
  HMETAFILEPICT hMetaFilePict;
  HENHMETAFILE hEnhMetaFile;
  HGLOBAL hGlobal;
  LPOLESTR lpszFileName;
  IStream *pstm;
  IStorage *pstg;
};
#pragma pack(pop)

/* 210 */
#pragma pack(push, 8)
struct tagSTGMEDIUM
{
  DWORD tymed;
  #pragma pack(push, 8)
  union
  {
    HBITMAP hBitmap;
    HMETAFILEPICT hMetaFilePict;
    HENHMETAFILE hEnhMetaFile;
    HGLOBAL hGlobal;
    LPOLESTR lpszFileName;
    IStream *pstm;
    IStorage *pstg;
  };
  #pragma pack(pop)
  IUnknown *pUnkForRelease;
};
#pragma pack(pop)

/* 213 */
struct HBITMAP__
{
  int unused;
};

/* 216 */
struct HENHMETAFILE__
{
  int unused;
};

/* 218 */
#pragma pack(push, 8)
struct IStream
{
  IStreamVtbl *lpVtbl;
};
#pragma pack(pop)

/* 226 */
#pragma pack(push, 8)
struct IStorage
{
  IStorageVtbl *lpVtbl;
};
#pragma pack(pop)

/* 220 */
typedef _ULARGE_INTEGER ULARGE_INTEGER;

/* 222 */
struct _ULARGE_INTEGER::$0354AA9C204208F00D0965D07BBE7FAC
{
  DWORD LowPart;
  DWORD HighPart;
};

/* 221 */
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

/* 223 */
typedef tagSTATSTG STATSTG;

/* 219 */
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

/* 228 */
typedef LPOLESTR *SNB;

/* 227 */
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

/* 225 */
typedef GUID CLSID;

/* 224 */
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

/* 229 */
#pragma pack(push, 8)
struct IEnumSTATSTG
{
  IEnumSTATSTGVtbl *lpVtbl;
};
#pragma pack(pop)

/* 230 */
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

/* 231 */
struct tagCOMBOBOXINFO
{
  DWORD cbSize;
  RECT rcItem;
  RECT rcButton;
  DWORD stateButton;
  HWND hwndCombo;
  HWND hwndItem;
  HWND hwndList;
};

/* 233 */
typedef WORD ATOM;

/* 232 */
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

/* 234 */
typedef _SHELLEXECUTEINFOW SHELLEXECUTEINFOW;

/* 236 */
typedef HKEY__ *HKEY;

/* 238 */
union _SHELLEXECUTEINFOW::$D915D6B2B775D926C11EEA321E8940B4
{
  HANDLE hIcon;
  HANDLE hMonitor;
};

/* 235 */
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

/* 237 */
struct HKEY__
{
  int unused;
};

/* 241 */
enum $5BDA056A888DC5F03790D737B7575A6D
{
  INTERNET_SCHEME_PARTIAL = 0xFFFFFFFE,
  INTERNET_SCHEME_UNKNOWN = 0xFFFFFFFF,
  INTERNET_SCHEME_DEFAULT = 0x0,
  INTERNET_SCHEME_FTP = 0x1,
  INTERNET_SCHEME_GOPHER = 0x2,
  INTERNET_SCHEME_HTTP = 0x3,
  INTERNET_SCHEME_HTTPS = 0x4,
  INTERNET_SCHEME_FILE = 0x5,
  INTERNET_SCHEME_NEWS = 0x6,
  INTERNET_SCHEME_MAILTO = 0x7,
  INTERNET_SCHEME_SOCKS = 0x8,
  INTERNET_SCHEME_JAVASCRIPT = 0x9,
  INTERNET_SCHEME_VBSCRIPT = 0xA,
  INTERNET_SCHEME_RES = 0xB,
  INTERNET_SCHEME_FIRST = 0x1,
  INTERNET_SCHEME_LAST = 0xB,
};

/* 240 */
typedef $5BDA056A888DC5F03790D737B7575A6D INTERNET_SCHEME;

/* 242 */
typedef WORD INTERNET_PORT;

/* 239 */
#pragma pack(push, 8)
struct $2B4FDC4BF487E67F052937EE78FAE255
{
  DWORD dwStructSize;
  LPWSTR lpszScheme;
  DWORD dwSchemeLength;
  INTERNET_SCHEME nScheme;
  LPWSTR lpszHostName;
  DWORD dwHostNameLength;
  INTERNET_PORT nPort;
  LPWSTR lpszUserName;
  DWORD dwUserNameLength;
  LPWSTR lpszPassword;
  DWORD dwPasswordLength;
  LPWSTR lpszUrlPath;
  DWORD dwUrlPathLength;
  LPWSTR lpszExtraInfo;
  DWORD dwExtraInfoLength;
};
#pragma pack(pop)

/* 243 */
struct _OSVERSIONINFOEXW
{
  DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  WCHAR szCSDVersion[128];
  WORD wServicePackMajor;
  WORD wServicePackMinor;
  WORD wSuiteMask;
  BYTE wProductType;
  BYTE wReserved;
};

/* 244 */
struct _OSVERSIONINFOA
{
  DWORD dwOSVersionInfoSize;
  DWORD dwMajorVersion;
  DWORD dwMinorVersion;
  DWORD dwBuildNumber;
  DWORD dwPlatformId;
  CHAR szCSDVersion[128];
};

/* 245 */
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

/* 246 */
typedef tagWINDOWPLACEMENT WINDOWPLACEMENT;

/* 247 */
struct tagWINDOWPLACEMENT
{
  UINT length;
  UINT flags;
  UINT showCmd;
  POINT ptMinPosition;
  POINT ptMaxPosition;
  RECT rcNormalPosition;
};

/* 248 */
struct _BY_HANDLE_FILE_INFORMATION
{
  DWORD dwFileAttributes;
  FILETIME ftCreationTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime;
  DWORD dwVolumeSerialNumber;
  DWORD nFileSizeHigh;
  DWORD nFileSizeLow;
  DWORD nNumberOfLinks;
  DWORD nFileIndexHigh;
  DWORD nFileIndexLow;
};

/* 249 */
struct _LUID
{
  DWORD LowPart;
  LONG HighPart;
};

/* 250 */
struct _SID_IDENTIFIER_AUTHORITY
{
  BYTE Value[6];
};

/* 253 */
enum _ACCESS_MODE
{
  NOT_USED_ACCESS = 0x0,
  GRANT_ACCESS = 0x1,
  SET_ACCESS = 0x2,
  DENY_ACCESS = 0x3,
  REVOKE_ACCESS = 0x4,
  SET_AUDIT_SUCCESS = 0x5,
  SET_AUDIT_FAILURE = 0x6,
};

/* 252 */
typedef _ACCESS_MODE ACCESS_MODE;

/* 257 */
enum _MULTIPLE_TRUSTEE_OPERATION
{
  NO_MULTIPLE_TRUSTEE = 0x0,
  TRUSTEE_IS_IMPERSONATE = 0x1,
};

/* 256 */
typedef _MULTIPLE_TRUSTEE_OPERATION MULTIPLE_TRUSTEE_OPERATION;

/* 259 */
enum _TRUSTEE_FORM
{
  TRUSTEE_IS_SID = 0x0,
  TRUSTEE_IS_NAME = 0x1,
  TRUSTEE_BAD_FORM = 0x2,
  TRUSTEE_IS_OBJECTS_AND_SID = 0x3,
  TRUSTEE_IS_OBJECTS_AND_NAME = 0x4,
};

/* 258 */
typedef _TRUSTEE_FORM TRUSTEE_FORM;

/* 261 */
enum _TRUSTEE_TYPE
{
  TRUSTEE_IS_UNKNOWN = 0x0,
  TRUSTEE_IS_USER = 0x1,
  TRUSTEE_IS_GROUP = 0x2,
  TRUSTEE_IS_DOMAIN = 0x3,
  TRUSTEE_IS_ALIAS = 0x4,
  TRUSTEE_IS_WELL_KNOWN_GROUP = 0x5,
  TRUSTEE_IS_DELETED = 0x6,
  TRUSTEE_IS_INVALID = 0x7,
  TRUSTEE_IS_COMPUTER = 0x8,
};

/* 260 */
typedef _TRUSTEE_TYPE TRUSTEE_TYPE;

/* 255 */
#pragma pack(push, 8)
struct _TRUSTEE_W
{
  _TRUSTEE_W *pMultipleTrustee;
  MULTIPLE_TRUSTEE_OPERATION MultipleTrusteeOperation;
  TRUSTEE_FORM TrusteeForm;
  TRUSTEE_TYPE TrusteeType;
  LPWSTR ptstrName;
};
#pragma pack(pop)

/* 254 */
typedef _TRUSTEE_W TRUSTEE_W;

/* 251 */
#pragma pack(push, 8)
struct _EXPLICIT_ACCESS_W
{
  DWORD grfAccessPermissions;
  ACCESS_MODE grfAccessMode;
  DWORD grfInheritance;
  TRUSTEE_W Trustee;
};
#pragma pack(pop)

/* 265 */
typedef _LUID LUID;

/* 264 */
#pragma pack(push, 4)
struct _LUID_AND_ATTRIBUTES
{
  LUID Luid;
  DWORD Attributes;
};
#pragma pack(pop)

/* 263 */
typedef _LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES;

/* 262 */
struct _TOKEN_PRIVILEGES
{
  DWORD PrivilegeCount;
  LUID_AND_ATTRIBUTES Privileges[1];
};

/* 266 */
typedef _GENERIC_MAPPING GENERIC_MAPPING;

/* 268 */
typedef DWORD ACCESS_MASK;

/* 267 */
struct _GENERIC_MAPPING
{
  ACCESS_MASK GenericRead;
  ACCESS_MASK GenericWrite;
  ACCESS_MASK GenericExecute;
  ACCESS_MASK GenericAll;
};

/* 269 */
struct _PRIVILEGE_SET
{
  DWORD PrivilegeCount;
  DWORD Control;
  LUID_AND_ATTRIBUTES Privilege[1];
};

/* 270 */
typedef _devicemodeW DEVMODEW;

/* 273 */
struct _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C::$A4EE175A7532F35C00DA5CAD042934DF
{
  __int16 dmOrientation;
  __int16 dmPaperSize;
  __int16 dmPaperLength;
  __int16 dmPaperWidth;
  __int16 dmScale;
  __int16 dmCopies;
  __int16 dmDefaultSource;
  __int16 dmPrintQuality;
};

/* 276 */
struct _POINTL
{
  LONG x;
  LONG y;
};

/* 275 */
typedef _POINTL POINTL;

/* 274 */
struct _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C::$604F2BC6924E02F5722A52FC79BC44F9
{
  POINTL dmPosition;
  DWORD dmDisplayOrientation;
  DWORD dmDisplayFixedOutput;
};

/* 272 */
union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C
{
  struct
  {
    __int16 dmOrientation;
    __int16 dmPaperSize;
    __int16 dmPaperLength;
    __int16 dmPaperWidth;
    __int16 dmScale;
    __int16 dmCopies;
    __int16 dmDefaultSource;
    __int16 dmPrintQuality;
  };
  struct
  {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
  };
};

/* 277 */
union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C
{
  DWORD dmDisplayFlags;
  DWORD dmNup;
};

/* 271 */
struct _devicemodeW
{
  WCHAR dmDeviceName[32];
  WORD dmSpecVersion;
  WORD dmDriverVersion;
  WORD dmSize;
  WORD dmDriverExtra;
  DWORD dmFields;
  union
  {
    struct
    {
      __int16 dmOrientation;
      __int16 dmPaperSize;
      __int16 dmPaperLength;
      __int16 dmPaperWidth;
      __int16 dmScale;
      __int16 dmCopies;
      __int16 dmDefaultSource;
      __int16 dmPrintQuality;
    };
    struct
    {
      POINTL dmPosition;
      DWORD dmDisplayOrientation;
      DWORD dmDisplayFixedOutput;
    };
  };
  __int16 dmColor;
  __int16 dmDuplex;
  __int16 dmYResolution;
  __int16 dmTTOption;
  __int16 dmCollate;
  WCHAR dmFormName[32];
  WORD dmLogPixels;
  DWORD dmBitsPerPel;
  DWORD dmPelsWidth;
  DWORD dmPelsHeight;
  union
  {
    DWORD dmDisplayFlags;
    DWORD dmNup;
  };
  DWORD dmDisplayFrequency;
  DWORD dmICMMethod;
  DWORD dmICMIntent;
  DWORD dmMediaType;
  DWORD dmDitherType;
  DWORD dmReserved1;
  DWORD dmReserved2;
  DWORD dmPanningWidth;
  DWORD dmPanningHeight;
};

/* 278 */
enum _SID_NAME_USE
{
  SidTypeUser = 0x1,
  SidTypeGroup = 0x2,
  SidTypeDomain = 0x3,
  SidTypeAlias = 0x4,
  SidTypeWellKnownGroup = 0x5,
  SidTypeDeletedAccount = 0x6,
  SidTypeInvalid = 0x7,
  SidTypeUnknown = 0x8,
  SidTypeComputer = 0x9,
  SidTypeLabel = 0xA,
};

/* 279 */
typedef tagPROPVARIANT PROPVARIANT;

/* 283 */
typedef WORD PROPVAR_PAD1;

/* 284 */
typedef WORD PROPVAR_PAD2;

/* 285 */
typedef WORD PROPVAR_PAD3;

/* 287 */
typedef unsigned __int8 UCHAR;

/* 288 */
typedef tagCLIPDATA CLIPDATA;

/* 291 */
struct tagBSTRBLOB
{
  ULONG cbSize;
  BYTE *pData;
};

/* 290 */
typedef tagBSTRBLOB BSTRBLOB;

/* 293 */
struct tagBLOB
{
  ULONG cbSize;
  BYTE *pBlobData;
};

/* 292 */
typedef tagBLOB BLOB;

/* 294 */
typedef CHAR *LPSTR;

/* 295 */
typedef tagVersionedStream *LPVERSIONEDSTREAM;

/* 297 */
typedef SAFEARRAY *LPSAFEARRAY;

/* 299 */
#pragma pack(push, 8)
struct tagCAC
{
  ULONG cElems;
  CHAR *pElems;
};
#pragma pack(pop)

/* 298 */
typedef tagCAC CAC;

/* 301 */
#pragma pack(push, 8)
struct tagCAUB
{
  ULONG cElems;
  UCHAR *pElems;
};
#pragma pack(pop)

/* 300 */
typedef tagCAUB CAUB;

/* 303 */
#pragma pack(push, 8)
struct tagCAI
{
  ULONG cElems;
  SHORT *pElems;
};
#pragma pack(pop)

/* 302 */
typedef tagCAI CAI;

/* 305 */
#pragma pack(push, 8)
struct tagCAUI
{
  ULONG cElems;
  USHORT *pElems;
};
#pragma pack(pop)

/* 304 */
typedef tagCAUI CAUI;

/* 307 */
#pragma pack(push, 8)
struct tagCAL
{
  ULONG cElems;
  LONG *pElems;
};
#pragma pack(pop)

/* 306 */
typedef tagCAL CAL;

/* 309 */
#pragma pack(push, 8)
struct tagCAUL
{
  ULONG cElems;
  ULONG *pElems;
};
#pragma pack(pop)

/* 308 */
typedef tagCAUL CAUL;

/* 311 */
#pragma pack(push, 8)
struct tagCAH
{
  ULONG cElems;
  LARGE_INTEGER *pElems;
};
#pragma pack(pop)

/* 310 */
typedef tagCAH CAH;

/* 313 */
#pragma pack(push, 8)
struct tagCAUH
{
  ULONG cElems;
  ULARGE_INTEGER *pElems;
};
#pragma pack(pop)

/* 312 */
typedef tagCAUH CAUH;

/* 315 */
#pragma pack(push, 8)
struct tagCAFLT
{
  ULONG cElems;
  FLOAT *pElems;
};
#pragma pack(pop)

/* 314 */
typedef tagCAFLT CAFLT;

/* 317 */
#pragma pack(push, 8)
struct tagCADBL
{
  ULONG cElems;
  DOUBLE *pElems;
};
#pragma pack(pop)

/* 316 */
typedef tagCADBL CADBL;

/* 319 */
#pragma pack(push, 8)
struct tagCABOOL
{
  ULONG cElems;
  VARIANT_BOOL *pElems;
};
#pragma pack(pop)

/* 318 */
typedef tagCABOOL CABOOL;

/* 321 */
#pragma pack(push, 8)
struct tagCASCODE
{
  ULONG cElems;
  SCODE *pElems;
};
#pragma pack(pop)

/* 320 */
typedef tagCASCODE CASCODE;

/* 323 */
#pragma pack(push, 8)
struct tagCACY
{
  ULONG cElems;
  CY *pElems;
};
#pragma pack(pop)

/* 322 */
typedef tagCACY CACY;

/* 325 */
#pragma pack(push, 8)
struct tagCADATE
{
  ULONG cElems;
  DATE *pElems;
};
#pragma pack(pop)

/* 324 */
typedef tagCADATE CADATE;

/* 327 */
#pragma pack(push, 8)
struct tagCAFILETIME
{
  ULONG cElems;
  FILETIME *pElems;
};
#pragma pack(pop)

/* 326 */
typedef tagCAFILETIME CAFILETIME;

/* 329 */
#pragma pack(push, 8)
struct tagCACLSID
{
  ULONG cElems;
  CLSID *pElems;
};
#pragma pack(pop)

/* 328 */
typedef tagCACLSID CACLSID;

/* 331 */
#pragma pack(push, 8)
struct tagCACLIPDATA
{
  ULONG cElems;
  CLIPDATA *pElems;
};
#pragma pack(pop)

/* 330 */
typedef tagCACLIPDATA CACLIPDATA;

/* 333 */
#pragma pack(push, 8)
struct tagCABSTR
{
  ULONG cElems;
  BSTR *pElems;
};
#pragma pack(pop)

/* 332 */
typedef tagCABSTR CABSTR;

/* 335 */
#pragma pack(push, 8)
struct tagCABSTRBLOB
{
  ULONG cElems;
  BSTRBLOB *pElems;
};
#pragma pack(pop)

/* 334 */
typedef tagCABSTRBLOB CABSTRBLOB;

/* 337 */
#pragma pack(push, 8)
struct tagCALPSTR
{
  ULONG cElems;
  LPSTR *pElems;
};
#pragma pack(pop)

/* 336 */
typedef tagCALPSTR CALPSTR;

/* 339 */
#pragma pack(push, 8)
struct tagCALPWSTR
{
  ULONG cElems;
  LPWSTR *pElems;
};
#pragma pack(pop)

/* 338 */
typedef tagCALPWSTR CALPWSTR;

/* 341 */
#pragma pack(push, 8)
struct tagCAPROPVARIANT
{
  ULONG cElems;
  PROPVARIANT *pElems;
};
#pragma pack(pop)

/* 340 */
typedef tagCAPROPVARIANT CAPROPVARIANT;

/* 286 */
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

/* 282 */
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

/* 281 */
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

/* 280 */
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

/* 289 */
struct tagCLIPDATA
{
  ULONG cbSize;
  int ulClipFmt;
  BYTE *pClipData;
};

/* 296 */
#pragma pack(push, 8)
struct tagVersionedStream
{
  GUID guidVersion;
  IStream *pStream;
};
#pragma pack(pop)

/* 342 */
struct tagLASTINPUTINFO
{
  UINT cbSize;
  DWORD dwTime;
};

/* 343 */
typedef _SHFILEINFOW SHFILEINFOW;

/* 344 */
struct _SHFILEINFOW
{
  HICON hIcon;
  int iIcon;
  DWORD dwAttributes;
  WCHAR szDisplayName[260];
  WCHAR szTypeName[80];
};

/* 345 */
typedef _CRYPTOAPI_BLOB DATA_BLOB;

/* 346 */
struct _CRYPTOAPI_BLOB
{
  DWORD cbData;
  BYTE *pbData;
};

/* 347 */
typedef GUID UUID;

/* 348 */
struct tagMONITORINFO
{
  DWORD cbSize;
  RECT rcMonitor;
  RECT rcWork;
  DWORD dwFlags;
};

/* 349 */
typedef tagPAINTSTRUCT PAINTSTRUCT;

/* 351 */
typedef ULONGLONG DWORDLONG;

/* 350 */
struct _MEMORYSTATUSEX
{
  DWORD dwLength;
  DWORD dwMemoryLoad;
  DWORDLONG ullTotalPhys;
  DWORDLONG ullAvailPhys;
  DWORDLONG ullTotalPageFile;
  DWORDLONG ullAvailPageFile;
  DWORDLONG ullTotalVirtual;
  DWORDLONG ullAvailVirtual;
  DWORDLONG ullAvailExtendedVirtual;
};

/* 354 */
struct _OVERLAPPED::$742A73540840F318F86F9CEE3D494648::$9BFE693EDA487769FDABADE5E43394F7
{
  DWORD Offset;
  DWORD OffsetHigh;
};

/* 353 */
union _OVERLAPPED::$742A73540840F318F86F9CEE3D494648
{
  struct
  {
    DWORD Offset;
    DWORD OffsetHigh;
  };
  PVOID Pointer;
};

/* 352 */
struct _OVERLAPPED
{
  ULONG_PTR Internal;
  ULONG_PTR InternalHigh;
  union
  {
    struct
    {
      DWORD Offset;
      DWORD OffsetHigh;
    };
    PVOID Pointer;
  };
  HANDLE hEvent;
};

/* 355 */
struct _Cvtvec
{
  unsigned int _Hand;
  unsigned int _Page;
};

/* 356 */
struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
};

/* 358 */
typedef threadlocaleinfostruct *pthreadlocinfo;

/* 366 */
struct threadmbcinfostruct;

/* 365 */
typedef struct threadmbcinfostruct *pthreadmbcinfo;

/* 357 */
struct localeinfo_struct
{
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
};

/* 361 */
struct tagLC_ID
{
  unsigned __int16 wLanguage;
  unsigned __int16 wCountry;
  unsigned __int16 wCodePage;
};

/* 360 */
typedef tagLC_ID LC_ID;

/* 362 */
struct threadlocaleinfostruct::$F0551D0CB09E7A078CAEF7CAC43D74C7
{
  char *locale;
  wchar_t *wlocale;
  int *refcount;
  int *wrefcount;
};

/* 364 */
struct __lc_time_data;

/* 359 */
struct threadlocaleinfostruct
{
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned int lc_handle[6];
  LC_ID lc_id[6];
  threadlocaleinfostruct::$F0551D0CB09E7A078CAEF7CAC43D74C7 lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  lconv *lconv;
  int *ctype1_refcount;
  unsigned __int16 *ctype1;
  const unsigned __int16 *pctype;
  const unsigned __int8 *pclmap;
  const unsigned __int8 *pcumap;
  __lc_time_data *lc_time_curr;
};

/* 363 */
struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  wchar_t *_W_decimal_point;
  wchar_t *_W_thousands_sep;
  wchar_t *_W_int_curr_symbol;
  wchar_t *_W_currency_symbol;
  wchar_t *_W_mon_decimal_point;
  wchar_t *_W_mon_thousands_sep;
  wchar_t *_W_positive_sign;
  wchar_t *_W_negative_sign;
};

/* 367 */
struct std::locale::facet;

/* 368 */
struct std::error_category;

/* 369 */
struct _LocaleUpdate;

/* 370 */
struct std::once_flag;

/* 371 */
struct __crt_strtox;

/* 372 */
struct UnDecorator;

/* 373 */
struct DNameStatusNode;

/* 374 */
struct pDNameNode;

/* 375 */
struct pairNode;

/* 376 */
struct pcharNode;

/* 377 */
struct _HeapManager;

/* 378 */
struct DName;

/* 379 */
struct charNode;

/* 380 */
struct __crt_stdio_output;

/* 381 */
struct __crt_strtox::floating_point_value;

/* 382 */
struct std::bad_function_call;

/* 383 */
struct Concurrency::details::platform;

/* 384 */
struct std::ios_base;

/* 385 */
struct std::locale::_Locimp;

/* 386 */
struct std::_Lockit;

/* 387 */
struct Concurrency::details;

/* 388 */
struct std::exception_ptr;

/* 389 */
struct Concurrency::details::stl_condition_variable_vista;

/* 390 */
struct Concurrency::details::stl_condition_variable_win7;

/* 391 */
struct std::_Locinfo;

/* 392 */
struct Concurrency::details::GlobalCore;

/* 393 */
struct std::regex_error;

/* 394 */
struct std::_Facet_base;

/* 395 */
struct Concurrency::details::_Condition_variable;

/* 396 */
struct Concurrency::critical_section;

/* 397 */
struct std::_Fac_node;

/* 398 */
struct std::_Init_locks;

/* 399 */
struct __ExceptionPtr;

/* 400 */
struct std::exception;

/* 401 */
struct std::system_error;

/* 402 */
struct RUNTIME_FUNCTION
{
  void *__ptr32 FunctionStart;
  void *__ptr32 FunctionEnd;
  void *__ptr32 UnwindInfo;
};

/* 403 */
struct UNWIND_INFO
{
  char Ver3_Flags;
  char PrologSize;
  char CntUnwindCodes;
  char FrReg_FrRegOff;
};

/* 404 */
struct UNWIND_CODE
{
  char PrologOff;
  char OpCode_OpInfo;
};

/* 405 */
struct C_SCOPE_TABLE
{
  void *__ptr32 Begin;
  void *__ptr32 End;
  void *__ptr32 Handler;
  void *__ptr32 Target;
};

/* 406 */
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

/* 407 */
struct ESTypeList
{
  int nCount;
  void *__ptr32 pTypeArray;
};

/* 408 */
struct UnwindMapEntry
{
  int toState;
  void *__ptr32 action;
};

/* 409 */
struct IPtoStateMap
{
  void *__ptr32 pc;
  int state;
};

/* 410 */
struct TryBlockMapEntry
{
  int tryLow;
  int tryHigh;
  int catchHigh;
  int nCatches;
  void *__ptr32 pHandlerArray;
};

/* 411 */
struct HandlerType
{
  int adjectives;
  void *__ptr32 pType;
  int dispCatchObj;
  void *__ptr32 addressOfHandler;
};

/* 412 */
struct TypeDescriptor
{
  void *pVFTable;
  void *spare;
  char name[];
};

/* 413 */
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

