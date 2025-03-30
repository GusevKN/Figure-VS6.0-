// DialogFigurePosition.cpp : implementation file
//

#include "stdafx.h"
#include "Zadanie.h"
#include "DialogFigurePosition.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialogFigurePosition dialog


CDialogFigurePosition::CDialogFigurePosition(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogFigurePosition::IDD, pParent)
{
	button_position = 0;
	//{{AFX_DATA_INIT(CDialogFigurePosition)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDialogFigurePosition::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogFigurePosition)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogFigurePosition, CDialog)
	//{{AFX_MSG_MAP(CDialogFigurePosition)
	ON_BN_CLICKED(IDC_BOTTON_FIGURE_TOP_LEFT, OnBottonFigureTopLeft)
	ON_BN_CLICKED(IDC_BUTTON_FIGURE_TOP_CENTRE, OnButtonFigureTopCentre)
	ON_BN_CLICKED(IDC_BUTTON_FIGURE_TOP_RIGHT, OnButtonFigureTopRight)
	ON_BN_CLICKED(IDC_BUTTON_FIGURE_CENTRE, OnButtonFigureCentre)
	ON_BN_CLICKED(IDC_BUTTON_FIGURE_BOTTOM_LEFT, OnButtonFigureBottomLeft)
	ON_BN_CLICKED(IDC_BUTTON_FIGURE_BOTTOM_RIGHT, OnButtonFigureBottomRight)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogFigurePosition message handlers

void CDialogFigurePosition::OnBottonFigureTopLeft() 
{
	// TODO: Add your control notification handler code here
	button_position = 1;
	Invalidate();
}

void CDialogFigurePosition::OnButtonFigureTopCentre() 
{
	// TODO: Add your control notification handler code here
	button_position = 2;
	Invalidate();
}

void CDialogFigurePosition::OnButtonFigureTopRight() 
{
	// TODO: Add your control notification handler code here
	button_position = 3;
	Invalidate();
}

void CDialogFigurePosition::OnButtonFigureCentre() 
{
	// TODO: Add your control notification handler code here
	button_position = 4;
	Invalidate();
}

void CDialogFigurePosition::OnButtonFigureBottomLeft() 
{
	// TODO: Add your control notification handler code here
	button_position = 5;
	Invalidate();
}

void CDialogFigurePosition::OnButtonFigureBottomRight() 
{
	// TODO: Add your control notification handler code here
	button_position = 6;
	Invalidate();
}
