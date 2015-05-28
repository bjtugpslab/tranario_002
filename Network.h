#if !defined(AFX_NETWORK_H__F4F5CAA3_FB05_437A_813D_E1D6D460FDB2__INCLUDED_)
#define AFX_NETWORK_H__F4F5CAA3_FB05_437A_813D_E1D6D460FDB2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Network.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNetwork dialog
struct LINK 
{
	int connectid;
	char lanenum;
	float lanewidth;
};

struct SECTION 
{
	POINT pt;
	char issignalised;//1 yes
	char ishighlight;//1 yes
	LINK link[10];
	char linknum;
};
struct NETWORK 
{
	int wholesectionnum;
	SECTION section[200];
};
struct LASTSECTION
{
	POINT pt;
	int id;
};
class CNetwork : public CDialog
{
// Construction
public:
	LASTSECTION lastsection;
	CPen pen;
	NETWORK network;
	void drawstatus();
	CDC dcMem;//用于缓冲作图的内存DC

	void renew();
	int lidu,Lbuttondownflag,Lbuttonupflag,Rbuttonflag;

	CNetwork(CWnd* pParent = NULL);   // standard constructor
	DECLARE_DYNCREATE(CNetwork)
// Dialog Data
	//{{AFX_DATA(CNetwork)
	enum { IDD = IDD_TRANARIO_NETWORK };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNetwork)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNetwork)
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NETWORK_H__F4F5CAA3_FB05_437A_813D_E1D6D460FDB2__INCLUDED_)
