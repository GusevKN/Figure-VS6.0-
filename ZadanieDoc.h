// ZadanieDoc.h : interface of the CZadanieDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ZADANIEDOC_H__D9FA0BF2_B6D8_4716_9804_8B1E9046A2E1__INCLUDED_)
#define AFX_ZADANIEDOC_H__D9FA0BF2_B6D8_4716_9804_8B1E9046A2E1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CZadanieDoc : public CDocument
{
protected: // create from serialization only
	CZadanieDoc();
	DECLARE_DYNCREATE(CZadanieDoc)

// Attributes
public:
	int button_position;
	CString StringData;
	CString str1;
	CString str2;
	CString str3;
	CString str4;
	CString str5;
	CString str6;
	CString str7;
// Operations
public:
	int m_sliderScaleFigure;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZadanieDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CZadanieDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CZadanieDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZADANIEDOC_H__D9FA0BF2_B6D8_4716_9804_8B1E9046A2E1__INCLUDED_)
