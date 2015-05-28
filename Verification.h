#if !defined(AFX_VERIFICATION_H__9DD2C837_4037_40E3_9186_03B6873980D5__INCLUDED_)
#define AFX_VERIFICATION_H__9DD2C837_4037_40E3_9186_03B6873980D5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Verification.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CVerification dialog

class CVerification : public CDialog
{
// Construction
public:
	CVerification(CWnd* pParent = NULL);   // standard constructor
	DECLARE_DYNCREATE(CVerification)
// Dialog Data
	//{{AFX_DATA(CVerification)
	enum { IDD = IDD_TRANARIO_VERIFICATION };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVerification)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CVerification)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VERIFICATION_H__9DD2C837_4037_40E3_9186_03B6873980D5__INCLUDED_)
