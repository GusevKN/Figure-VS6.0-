#if !defined(AFX_DIALOGFIGUREPOSITION_H__806C7BDA_29F4_42A4_ADDC_73214B6A5128__INCLUDED_)
#define AFX_DIALOGFIGUREPOSITION_H__806C7BDA_29F4_42A4_ADDC_73214B6A5128__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogFigurePosition.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogFigurePosition dialog

class CDialogFigurePosition : public CDialog
{
// Construction
public:
	CDialogFigurePosition(CWnd* pParent = NULL);   // standard constructor	
	int button_position;
// Dialog Data
	//{{AFX_DATA(CDialogFigurePosition)
	enum { IDD = IDD_DIALOG_FIGURE_POSITION };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogFigurePosition)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogFigurePosition)
	afx_msg void OnBottonFigureTopLeft();
	afx_msg void OnButtonFigureTopCentre();
	afx_msg void OnButtonFigureTopRight();
	afx_msg void OnButtonFigureCentre();
	afx_msg void OnButtonFigureBottomLeft();
	afx_msg void OnButtonFigureBottomRight();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGFIGUREPOSITION_H__806C7BDA_29F4_42A4_ADDC_73214B6A5128__INCLUDED_)
