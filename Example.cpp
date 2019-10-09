#include<afxwin.h>
class CMyFrame : public CFrameWnd {
public:
	CMyFrame() {
		Create(NULL, L"ANU Happy!", WS_SYSMENU, CRect(90, 120,
			550, 480));
	}
};
class CExample : public CWinApp {
	BOOL InitInstance() {
		CMyFrame* Frame = new CMyFrame();
		m_pMainWnd = Frame;
		Frame->ShowWindow(SW_NORMAL);
		Frame->UpdateWindow();

		return TRUE;
	}
};
CExample theApp;