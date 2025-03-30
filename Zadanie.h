// Zadanie.h : main header file for the ZADANIE application
//

#if !defined(AFX_ZADANIE_H__5D2D9E7C_2E1A_448E_88FF_EC39C3379503__INCLUDED_)
#define AFX_ZADANIE_H__5D2D9E7C_2E1A_448E_88FF_EC39C3379503__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CZadanieApp:
// See Zadanie.cpp for the implementation of this class
//

class CZadanieApp : public CWinApp
{
public:
	CZadanieApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZadanieApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CZadanieApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZADANIE_H__5D2D9E7C_2E1A_448E_88FF_EC39C3379503__INCLUDED_)
