// tranarioView.cpp : implementation of the CTranarioView class
//

#include "stdafx.h"
#include "tranario.h"

#include "tranarioDoc.h"
#include "tranarioView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTranarioView

IMPLEMENT_DYNCREATE(CTranarioView, CFormView)

BEGIN_MESSAGE_MAP(CTranarioView, CFormView)
	//{{AFX_MSG_MAP(CTranarioView)
	ON_WM_CREATE()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTranarioView construction/destruction

CTranarioView::CTranarioView()
	: CFormView(CTranarioView::IDD)
{
	//{{AFX_DATA_INIT(CTranarioView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CTranarioView::~CTranarioView()
{
}

void CTranarioView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTranarioView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BOOL CTranarioView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CTranarioView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

/////////////////////////////////////////////////////////////////////////////
// CTranarioView printing

BOOL CTranarioView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTranarioView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTranarioView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CTranarioView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CTranarioView diagnostics

#ifdef _DEBUG
void CTranarioView::AssertValid() const
{
	CFormView::AssertValid();
}

void CTranarioView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CTranarioDoc* CTranarioView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTranarioDoc)));
	return (CTranarioDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTranarioView message handlers

int CTranarioView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CFormView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CRect ClientRect;
	GetClientRect(&ClientRect);
	
	m_TabCtrl.Create(TCS_UP|WS_CHILD|WS_VISIBLE, ClientRect, this, 211);
	m_TabCtrl.AddPage(RUNTIME_CLASS(CNetwork), IDD_TRANARIO_NETWORK, _T("路网"), NULL); 
	m_TabCtrl.AddPage(RUNTIME_CLASS(CControl), IDD_TRANARIO_CONTROL, _T("控制"), NULL); 

	m_TabCtrl.AddPage(RUNTIME_CLASS(CStatistics), IDD_TRANARIO_STATISTICS, _T("数据"), NULL); 

	m_TabCtrl.AddPage(RUNTIME_CLASS(CVerification), IDD_TRANARIO_VERIFICATION, _T("评估"), NULL); 

	m_TabCtrl.SetActivePage(0);
	m_TabCtrl.UpdateWindow();	
	return 0;
}

void CTranarioView::OnCancelMode() 
{
	CFormView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
