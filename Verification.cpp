// Verification.cpp : implementation file
//

#include "stdafx.h"
#include "tranario.h"
#include "Verification.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVerification dialog

IMPLEMENT_DYNCREATE(CVerification,CDialog)
CVerification::CVerification(CWnd* pParent /*=NULL*/)
	: CDialog(CVerification::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVerification)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CVerification::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVerification)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CVerification, CDialog)
	//{{AFX_MSG_MAP(CVerification)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVerification message handlers
