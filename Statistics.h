#if !defined(AFX_STATISTICS_H__A165190E_CB14_4E4C_B63F_EA3180FDCFB3__INCLUDED_)
#define AFX_STATISTICS_H__A165190E_CB14_4E4C_B63F_EA3180FDCFB3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Statistics.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CStatistics dialog

class CStatistics : public CDialog
{
// Construction
public:
	CStatistics(CWnd* pParent = NULL);   // standard constructor
	DECLARE_DYNCREATE(CStatistics)
// Dialog Data
	//{{AFX_DATA(CStatistics)
	enum { IDD = IDD_TRANARIO_STATISTICS };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStatistics)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CStatistics)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STATISTICS_H__A165190E_CB14_4E4C_B63F_EA3180FDCFB3__INCLUDED_)
