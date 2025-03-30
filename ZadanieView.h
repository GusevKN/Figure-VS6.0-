// ZadanieView.h : interface of the CZadanieView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ZADANIEVIEW_H__BEE8E688_CFBC_46B2_B1A0_C1D40DD47A3C__INCLUDED_)
#define AFX_ZADANIEVIEW_H__BEE8E688_CFBC_46B2_B1A0_C1D40DD47A3C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CZadanieView : public CView
{
protected: // create from serialization only
	CZadanieView();
	DECLARE_DYNCREATE(CZadanieView)

// Attributes
public:

	CZadanieDoc* GetDocument();

int* fnFigure(int position, int* x, int* y, int xSizeWind, int ySizeWind, int procent, int countPoints);

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZadanieView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CZadanieView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CZadanieView)
	afx_msg void OnButtonFigureScale();
	afx_msg void OnButtonFigurePosition();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ZadanieView.cpp
inline CZadanieDoc* CZadanieView::GetDocument()
   { return (CZadanieDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZADANIEVIEW_H__BEE8E688_CFBC_46B2_B1A0_C1D40DD47A3C__INCLUDED_)
