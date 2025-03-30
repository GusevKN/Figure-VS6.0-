#if !defined(AFX_DIALOGFIGURESCALE_H__871F6DB0_825C_44E3_B054_C0631DCAF1FF__INCLUDED_)
#define AFX_DIALOGFIGURESCALE_H__871F6DB0_825C_44E3_B054_C0631DCAF1FF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogFigureScale.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogFigureScale dialog

class CDialogFigureScale : public CDialog
{
// Construction
public:
	CDialogFigureScale(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogFigureScale)
	enum { IDD = IDD_DIALOG_FIGURE_SCALE };
	int		m_sliderScaleFigure;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogFigureScale)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogFigureScale)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGFIGURESCALE_H__871F6DB0_825C_44E3_B054_C0631DCAF1FF__INCLUDED_)
