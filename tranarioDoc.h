// tranarioDoc.h : interface of the CTranarioDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TRANARIODOC_H__5933BCC0_6641_4FFA_9624_A2BD6EB448BF__INCLUDED_)
#define AFX_TRANARIODOC_H__5933BCC0_6641_4FFA_9624_A2BD6EB448BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTranarioDoc : public CDocument
{
protected: // create from serialization only
	CTranarioDoc();
	DECLARE_DYNCREATE(CTranarioDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTranarioDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTranarioDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTranarioDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANARIODOC_H__5933BCC0_6641_4FFA_9624_A2BD6EB448BF__INCLUDED_)
