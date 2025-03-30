// ZadanieDoc.cpp : implementation of the CZadanieDoc class
//

#include "stdafx.h"
#include "Zadanie.h"

#include "ZadanieDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZadanieDoc

IMPLEMENT_DYNCREATE(CZadanieDoc, CDocument)

BEGIN_MESSAGE_MAP(CZadanieDoc, CDocument)
	//{{AFX_MSG_MAP(CZadanieDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZadanieDoc construction/destruction

CZadanieDoc::CZadanieDoc()
{
	// TODO: add one-time construction code here
	button_position = 0;
	m_sliderScaleFigure = 1;
	StringData = "";
	str1 = "";
	str2 = "";
	str3 = "";
	str4 = "";
	str5 = "";
	str6 = "";
	str7 = "";
}

CZadanieDoc::~CZadanieDoc()
{
}

BOOL CZadanieDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CZadanieDoc serialization

void CZadanieDoc::Serialize(CArchive& ar)
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
// CZadanieDoc diagnostics

#ifdef _DEBUG
void CZadanieDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CZadanieDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CZadanieDoc commands
