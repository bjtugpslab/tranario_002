// tranario.h : main header file for the TRANARIO application
//

#if !defined(AFX_TRANARIO_H__55ABD955_13E8_4A9B_9C99_5FB45B46367A__INCLUDED_)
#define AFX_TRANARIO_H__55ABD955_13E8_4A9B_9C99_5FB45B46367A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTranarioApp:
// See tranario.cpp for the implementation of this class
//

class CTranarioApp : public CWinApp
{
public:
	CTranarioApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTranarioApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTranarioApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANARIO_H__55ABD955_13E8_4A9B_9C99_5FB45B46367A__INCLUDED_)
