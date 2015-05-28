// Statistics.cpp : implementation file
//

#include "stdafx.h"
#include "tranario.h"
#include "Statistics.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStatistics dialog

IMPLEMENT_DYNCREATE(CStatistics,CDialog)
CStatistics::CStatistics(CWnd* pParent /*=NULL*/)
	: CDialog(CStatistics::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStatistics)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CStatistics::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStatistics)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CStatistics, CDialog)
	//{{AFX_MSG_MAP(CStatistics)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStatistics message handlers
