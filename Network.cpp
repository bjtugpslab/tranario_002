// Network.cpp : implementation file
//

#include "stdafx.h"
#include "tranario.h"
#include "Network.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNetwork dialog

IMPLEMENT_DYNCREATE(CNetwork,CDialog)
CNetwork::CNetwork(CWnd* pParent /*=NULL*/)
	: CDialog(CNetwork::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNetwork)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNetwork::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNetwork)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNetwork, CDialog)
	//{{AFX_MSG_MAP(CNetwork)
	ON_WM_MOUSEWHEEL()
	ON_WM_PAINT()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_RBUTTONUP()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNetwork message handlers

BOOL CNetwork::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt) 
{
	// TODO: Add your message handler code here and/or call default
	if (zDelta>0)//上，分辨率高
	{
		lidu++;
	}
	if(zDelta<0)//down，分辨率低
	{
		lidu--;

	}
	renew();

	return CDialog::OnMouseWheel(nFlags, zDelta, pt);
}

BOOL CNetwork::OnInitDialog() 
{
	CDialog::OnInitDialog();
	memset(&network,0,sizeof(NETWORK));
	lidu=0;
	Lbuttondownflag=0;
	Lbuttonupflag=0;
	Rbuttonflag=0;
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CNetwork::renew()
{

//	if (Lbuttondownflag==1)
//	{
	CRect rect; 
	GetClientRect(&rect);


 	InvalidateRect(rect);
}

void CNetwork::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	CRect rect; 
	GetClientRect(&rect);	
	CBitmap bmp; 
	dcMem.CreateCompatibleDC(&dc); 	
	bmp.CreateCompatibleBitmap(&dc,rect.Width(),rect.Height());
	dcMem.SelectObject(&bmp); 
	dcMem.FillSolidRect(rect,/*RGB(0,0,0)*/GetSysColor(COLOR_3DFACE)); 
	
	//绘制轨道占用
	drawstatus();
	//copy到前景	
	dc.BitBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,SRCCOPY); 	
	dcMem.DeleteDC(); 
	bmp.DeleteObject(); 
	// Do not call CDialog::OnPaint() for painting messages
}

void CNetwork::drawstatus()
{
// 	if (Lbuttondownflag==1)
// 	{
// 		CPoint   point;
// 		GetCursorPos(&point);
// 		ScreenToClient(&point);
// 		CRect rect; 
// 	//	GetClientRect(&rect);
// 		dcMem.FillSolidRect(point.x-10,point.y-10,20,20,RGB(255,0,0));
// 	}
	for (int i=0;i<network.wholesectionnum;i++)
	{
		if (network.section[i].ishighlight==1)//高亮
		{
			dcMem.FillSolidRect(network.section[i].pt.x-10,network.section[i].pt.y-10,20,20,RGB(0,255,0));
			
		}else{
			dcMem.FillSolidRect(network.section[i].pt.x-10,network.section[i].pt.y-10,20,20,RGB(255,0,0));
		}
	}
	pen.CreatePen(PS_DASH,4,RGB(0,0,255));
	CPen *pOldPen   =   dcMem. SelectObject(&pen); 
	for (i=0;i<network.wholesectionnum;i++)
	{
		for (int j=0;j<network.section[i].linknum;j++)
		{
			dcMem.MoveTo(network.section[i].pt);
			dcMem.LineTo(network.section[network.section[i].link[j].connectid].pt);
		}
	
	}
// 	if (network.wholesectionnum!=0 )
// 	{
// 		dcMem.MoveTo(lastsection.pt);
// 		CPoint   pointt;
// 		GetCursorPos(&pointt);
// 		ScreenToClient(&pointt);
// 		dcMem.LineTo(pointt);
// 	}

	dcMem. SelectObject(pOldPen);
	pen.DeleteObject(); 
		
	
	

}

void CNetwork::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
//	MessageBox("1");
	//可能情况：1 选中节点 2 选中道路 3 新建节点 4 

//	char isnewsection=0;
	int sectionindex=0;
	CPoint   pointt;
	GetCursorPos(&pointt);
	ScreenToClient(&pointt);
	if (network.wholesectionnum==0)
	{
		//add new
		network.wholesectionnum++;
		network.section[0].pt.x=pointt.x;
		network.section[0].pt.y=pointt.y;
		lastsection.pt=network.section[0].pt;
		lastsection.id=0;
		Lbuttondownflag=1;
	}else{
		int i=0;
		for (i=0;i<network.wholesectionnum;i++)//判断是否选点
		{
			if (pointt.x<=(network.section[i].pt.x+10) && pointt.x>=(network.section[i].pt.x-10) && pointt.y>=(network.section[i].pt.y-10) && pointt.y<=(network.section[i].pt.y+10))
			{
				//选点
				network.section[i].ishighlight=1;
				lastsection.pt=network.section[i].pt;
				lastsection.id=i;
				break;

			}

		}
		if (i==network.wholesectionnum)
		{
			//add new
			
			network.section[i].pt.x=pointt.x;
			network.section[i].pt.y=pointt.y;
			network.wholesectionnum++;
			network.section[i].link[network.section[i].linknum].connectid=lastsection.id;//把上一个节点信息加到这一个连接的节点信息中
			network.section[i].linknum++;
			lastsection.pt=network.section[i].pt;
			lastsection.id=i;
			Lbuttondownflag=1;
		}

	}
	renew();


	
	CDialog::OnLButtonUp(nFlags, point);
}

void CNetwork::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
//	Lbuttondownflag=1;//=1 reference down
	CDialog::OnLButtonDown(nFlags, point);
}

void CNetwork::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
 	if (Lbuttondownflag==1)
 	{
 	//	renew();
 	}
	CDialog::OnMouseMove(nFlags, point);
}

void CNetwork::OnRButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if (Lbuttondownflag==1)//之前左键按了，现在释放
	{
		Lbuttondownflag=0;
		renew();
	}else if (Lbuttondownflag==0)
	{
		for (int i =0;i<network.wholesectionnum;i++)
		{
			network.section[i].ishighlight=0;
		}
		renew();
	}



	CDialog::OnRButtonUp(nFlags, point);
}
