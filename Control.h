#if !defined(AFX_CONTROL_H__084AA5A4_4F34_4CA0_ACBD_BFA0885EDBB3__INCLUDED_)
#define AFX_CONTROL_H__084AA5A4_4F34_4CA0_ACBD_BFA0885EDBB3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Control.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CControl dialog

class CControl : public CDialog
{
// Construction
public:
	CControl(CWnd* pParent = NULL);   // standard constructor
	DECLARE_DYNCREATE(CControl)
// Dialog Data
	//{{AFX_DATA(CControl)
	enum { IDD = IDD_TRANARIO_CONTROL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControl)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CControl)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROL_H__084AA5A4_4F34_4CA0_ACBD_BFA0885EDBB3__INCLUDED_)
