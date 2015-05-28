// Control.cpp : implementation file
//

#include "stdafx.h"
#include "tranario.h"
#include "Control.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CControl dialog

IMPLEMENT_DYNCREATE(CControl,CDialog)
CControl::CControl(CWnd* pParent /*=NULL*/)
	: CDialog(CControl::IDD, pParent)
{
	//{{AFX_DATA_INIT(CControl)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CControl::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CControl)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CControl, CDialog)
	//{{AFX_MSG_MAP(CControl)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CControl message handlers
