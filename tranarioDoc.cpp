// tranarioDoc.cpp : implementation of the CTranarioDoc class
//

#include "stdafx.h"
#include "tranario.h"

#include "tranarioDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTranarioDoc

IMPLEMENT_DYNCREATE(CTranarioDoc, CDocument)

BEGIN_MESSAGE_MAP(CTranarioDoc, CDocument)
	//{{AFX_MSG_MAP(CTranarioDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTranarioDoc construction/destruction

CTranarioDoc::CTranarioDoc()
{
	// TODO: add one-time construction code here

}

CTranarioDoc::~CTranarioDoc()
{
}

BOOL CTranarioDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTranarioDoc serialization

void CTranarioDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTranarioDoc diagnostics

#ifdef _DEBUG
void CTranarioDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTranarioDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTranarioDoc commands
