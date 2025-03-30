// DialogFigureScale.cpp : implementation file
//

#include "stdafx.h"
#include "Zadanie.h"
#include "DialogFigureScale.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialogFigureScale dialog


CDialogFigureScale::CDialogFigureScale(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogFigureScale::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogFigureScale)
	m_sliderScaleFigure = 0;
	//}}AFX_DATA_INIT
}


void CDialogFigureScale::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogFigureScale)
	DDX_Slider(pDX, IDC_SLIDER_SCALE_FIGURE, m_sliderScaleFigure);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogFigureScale, CDialog)
	//{{AFX_MSG_MAP(CDialogFigureScale)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogFigureScale message handlers

BOOL CDialogFigureScale::OnInitDialog() 
{
	CDialog::OnInitDialog();
//	m_sliderScaleFigure.SetRangeMin(50, false);
//	m_sliderScaleFigure.SetRangeMax(100, false);
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
