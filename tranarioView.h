// tranarioView.h : interface of the CTranarioView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TRANARIOVIEW_H__779B552E_101B_4F96_96E2_E2FE59310AB8__INCLUDED_)
#define AFX_TRANARIOVIEW_H__779B552E_101B_4F96_96E2_E2FE59310AB8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "CoolTabCtrl.h"
#include "Control.h"
#include "Network.h"
#include "Verification.h"
#include "Statistics.h"
#pragma pack(push)
#pragma pack(1)
class CTranarioView : public CFormView
{
protected: // create from serialization only
	CTranarioView();
	DECLARE_DYNCREATE(CTranarioView)

public:
	CCoolTabCtrl m_TabCtrl;
	//{{AFX_DATA(CTranarioView)
	enum{ IDD = IDD_TRANARIO_FORM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:
	CTranarioDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTranarioView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTranarioView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTranarioView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in tranarioView.cpp
inline CTranarioDoc* CTranarioView::GetDocument()
   { return (CTranarioDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANARIOVIEW_H__779B552E_101B_4F96_96E2_E2FE59310AB8__INCLUDED_)
