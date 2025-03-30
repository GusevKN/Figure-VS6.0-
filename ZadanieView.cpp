// ZadanieView.cpp : implementation of the CZadanieView class
//

#include "stdafx.h"
#include "Zadanie.h"
#include "iostream.h"
#include <vector>

#include "ZadanieDoc.h"
#include "ZadanieView.h"
#include "DialogFigurePosition.h"
#include "DialogFigureScale.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
using namespace std;
/////////////////////////////////////////////////////////////////////////////
// CZadanieView

IMPLEMENT_DYNCREATE(CZadanieView, CView)

BEGIN_MESSAGE_MAP(CZadanieView, CView)
	//{{AFX_MSG_MAP(CZadanieView)
	ON_COMMAND(ID_BUTTON_FIGURE_SCALE, OnButtonFigureScale)
	ON_COMMAND(ID_BUTTON_FIGURE_POSITION, OnButtonFigurePosition)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZadanieView construction/destruction

CZadanieView::CZadanieView()
{
	// TODO: add construction code here
}

CZadanieView::~CZadanieView()
{
}

BOOL CZadanieView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CZadanieView drawing

//////////////////////////////////////////////////////////////////////////////
/////        FIGURE

/*#include "iostream.h"
#include <vector>
using namespace std;
int xsizeWind = 1024;
int ysizeWind = 768;
int* fnFigure(int position, int* x, int* y, int procent, int countPoints);
int fnShowPoint(int a[]);
///////////////////////////////////////////////////////////////////////////////////////////////////
void main(void){
int procent = 100;
cout << "Hello world"<< endl;
cout<<"SizeWindowX-  " <<xsizeWind<<endl;
cout<<"SizeWindowY-  " <<ysizeWind<<endl;
int x[5] = {10, 800, 80, 10, 10};
int y[5] = {10, 10, 80, 80, 10};
int count = sizeof(y)/sizeof(y[0]);
cout <<" Size Array points: "<< count<<endl;
cout<<"procent: "<<procent<<endl;
int position;
cout<< "Please write position figure->";
cin>> position;
fnFigure(position, x, y, procent, count);
for(int i=0; i<count; i++)
{
    cout<<"TEST OUTPUT FUNCTION ABSOLUTE X: "<<x[i]<<endl;
    cout<<"TEST OUTPUT FUNCTION ABSOLUTE Y: "<<y[i]<<endl;
}

}

///////////////////////////////////////////////////////////////////////////////////////////////////
/////Show
///int fnShowPoint(int a[]){
///	int i;
///	for (i =0; i<20; i++)
///	{
///		cout<<a[i]<<endl;
///	}
///return 0;
}
*/
///////////////////////////////////////////////////////////////////
//////////fnFigure
int* CZadanieView::fnFigure(int position, int* x, int* y, int xSizeWind, int ySizeWind, int procent, int countPoints)
    {
//CRect rectInFn;
vector<int> dx;
vector<int> dy;
vector<int> px;
vector<int> py;
dx.resize(countPoints);
dy.resize(countPoints);
px.resize(countPoints);
py.resize(countPoints);
//int xCount =dx.resize(sizeof(x)/sizeof[0]);
//int countPoints = 0;
//countPoints = xCount;
//vector <int> dx(0);
//vector <int> dx(0);
//vector <int> dx(0);
//vector <int> dx(0);
int i;
//int j;
int xLeft;
int xCentre;
int xRight;
int yTop;
int yCentre;
int yBottom;
int smallWindx; //
int smallWindy;
//int xBySizeSmallWind;
//int yBySizeSmallWind;
int xCoefficientWind;
int yCoefficientWind;
int coefficientWind;
xLeft = x[0];
yTop = y[0];
////////////////////////////////////////////////////////////////////
///////DEFAULT dx = x AND dy =y Присваиваем dx,dy и px, py значения x и y из аргументов функции
 for(i=0; i<countPoints; i++){
 dx[i] = x[i];
 dy[i] = y[i];
 px[i] = x[i];
 py[i] = y[i];
 }

////////////////////////////////////////////////////////////////////
//////FIND LEFT POINT X
for(i = 0; i<countPoints; i++){
    if(xLeft>dx[i]){
       xLeft=dx[i];
    }
}
cout<< "xLeft:  "<<xLeft<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////FIND TOP POINT Y
for(i = 0; i<countPoints; i++){
    if(yTop>dy[i]){
        yTop=dy[i];
    }
}
cout<< "yTop:  "<<yTop<<endl;
//////////////////////////////////////////////////////////////////////
//INSTALL LEFT ALL POINTS X
for(i=0; i<countPoints; i++){
    dx[i] = dx[i]-xLeft;
    cout<<i<<" LEFT POINT X:  "<< dx[i]<<endl;
    }
////////////////////////////////////////////////////////////////////
//////INSTALL TOP ALL POINTS Y
for(i=0; i<countPoints; i++){
    dy[i] = dy[i]-yTop;
    cout<<i<<" TOP POINT Y:  "<< dy[i]<<endl;
    }
    
////////////////////////////////////////////////////////////////////
/////FIND RIGHT (EXTREME WIDTH) POINT X
xRight = dx[0];
for(i=0; i<countPoints; i++){
if(xRight < dx[i])
xRight = dx[i];
}
cout<<"xRight before scale (extreme width all points): "<<xRight<<endl;
////////////////////////////////////////////////////////////////////
/////FIND BOTTOM (EXTREME HEIGHT) POINT Y
yBottom = dy[0];
for(i=0; i<countPoints; i++){
if(yBottom < dy[i])
yBottom = dy[i];
}
cout<<"yBottom before scale (extreme height all points): "<<yBottom<<endl;

////////////////////////////////////////////////////////////////////
//FIND COEFICIENT FOR Modification figure 3/4 from half window size
//smallWindx = ((rectInFn.Width())*3)/8;
smallWindx = ((xSizeWind)*3)/8;
cout<<" SMALL WINDOW X:  "<< smallWindx<<endl;
////////BY WINDOW SCALE Y
smallWindy = ((ySizeWind)*3)/8;
//smallWindy = ((rectInFn.Height())*3)/8;
cout<<" SMALL WINDOW Y:  "<< smallWindy<<endl;
xCoefficientWind = (smallWindx*100)/xRight;
cout<<"Coefficient size figure and size wind x: "<< xCoefficientWind<<endl;
yCoefficientWind = (smallWindy*100)/yBottom;
cout<<"Coefficient size figure and size wind y: "<< yCoefficientWind<<endl;
if(xCoefficientWind < yCoefficientWind){
    coefficientWind = xCoefficientWind;
}else{
    coefficientWind = yCoefficientWind;}
    cout<<"Coefficient Wind "<<coefficientWind<<endl;
///////////////////////////////////////////////////////////////////////
///EXPANSION SCALE X BY WINDOW
for(i=0; i<countPoints; i++){
    dx[i] = (dx[i]*coefficientWind)/100;
	dx[i] = dx[i]*procent;
	dx[i] = dx[i]/100;
	cout<<i<<" EXPANSION SCALE X BY WINDOW:  "<< dx[i]<<endl;
}
///////////////////////////////////////////////////////////////////////
///EXPANSION SCALE Y BY WINDOW
for(i=0; i<countPoints; i++){
    dy[i] = (dy[i]*coefficientWind)/100;
	dy[i] = dy[i]*procent;
	dy[i] = dy[i]/100;
	cout<<i<<" EXPANSION SCALE Y BY WINDOW:  "<< dy[i]<<endl;
}

////////////////////////////////////////////////////////////////////
/////FIND RIGHT (EXTREME WIDTH) POINT X AFTER SCALE
xRight = dx[0];
for(i=0; i<countPoints; i++){
if(xRight<dx[i])
xRight = dx[i];
}
cout<<"xRight after scale (extreme width all points): "<<xRight<<endl;
/////////////////////////////////////****/////////////////////////////////
//////FIND BOTTOM (EXTREME HEIGHT) POINT Y AFTER SCALE
yBottom = dy[0];
for(i=0; i<countPoints; i++){
if(yBottom < dy[i])
yBottom = dy[i];
}
cout<<"yBottom after scale (extreme height all points): "<<yBottom<<endl;

////////////////////////////////////////////////////////////////////
/////CENTRE POINT X
xCentre = xRight/2;
//cout << "xCentre: "<<xCentre<< endl;

////////////////////////////////////////////////////////////////////
////CENTRE POINT Y
yCentre = yBottom/2;
//cout << "yCentre: " << yCentre << endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////
/////POSITIONS
//Position 1 - xleft ytop
//Position 2 - xcentre ytop
//Position 3 - xright ytop
//Position 4 - xcentre ycentre
//Position 5 - xleft ybottom
//Position 6 - xright ybottom

////////////////////////////////////////////////////////////////////
///////DEFAULT dx = x AND dy =y
 for(i=0; i<countPoints; i++){
 px[i] = dx[i];
 py[i] = dy[i];
// cout<< "px: "<< px[i] << endl;
// cout<< "py: "<< py[i] << endl;
 }
 ///////////////////////////////////////////////////////////////////
 /////////INSTALL POSITION 
for(i=0; i<countPoints; i++){
////////////////////////////////////////////////////////////////////
///////// ABSOLUTE POSITION 1
	if(position == 1){
px[i] = px[i]+20;
py[i] = py[i]+20;
//cout<<i<<" ABSOLUTE Position 1 X: "<<px[i]<<endl;
//cout<<i<<" ABSOLUTE Position 1 Y: "<<py[i]<<endl;
x[i] = px[i];
y[i] = py[i];
 px[i] = dx[i];
 py[i] = dy[i];
	}
 ///////////////////////////////////////////////////////////////////
///////// ABSOLUTE POSITION 2
	else if(position == 2){
////////////////////////////////////////////////////////////////////
///////DEFAULT dx = x AND dy =y
	px[i] = px[i]+((xSizeWind/2)-xCentre);
    py[i] = py[i]+20;
//cout<<i<<" ABSOLUTE Position 2 X: "<<px[i]<<endl;
//cout<<i<<" ABSOLUTE Position 2 Y: "<<py[i]<<endl;
x[i] = px[i];
y[i] = py[i];
px[i] = dx[i];
py[i] = dy[i];
	}
 ///////////////////////////////////////////////////////////////////
///////// ABSOLUTE POSITION 3
else if(position == 3){
////////////////////////////////////////////////////////////////////
px[i] = px[i]+(xSizeWind-(xRight+20));
py[i] = py[i]+20;
//cout<<i<<" ABSOLUTE Position 3 X: "<<px[i]<<endl;
//cout<<i<<" ABSOLUTE Position 3 Y: "<<py[i]<<endl;
    x[i] = px[i];
    y[i] = py[i];
	 px[i] = dx[i];
 py[i] = dy[i];
	}
///////////////////////////////////////////////////////////////////
///////// ABSOLUTE POSITION 4
else if(position == 4){
px[i] = px[i]+((xSizeWind/2)-xCentre);
py[i] = py[i]+((ySizeWind/2)-yCentre);
//y default
//cout<<i<<" ABSOLUTE Position 4 X: "<<px[i]<<endl;
//cout<<i<<" ABSOLUTE Position 4 Y: "<<py[i]<<endl;
x[i] = px[i];
y[i] = py[i];
 px[i] = dx[i];
 py[i] = dy[i];
	}
///////////////////////////////////////////////////////////////////
///////// ABSOLUTE POSITION 5	
else if(position == 5){
px[i] = px[i]+20;
py[i] = py[i]+((ySizeWind)-(yBottom+20));
//cout<<i<<" ABSOLUTE Position 5 X: "<<px[i]<<endl;
//cout<<i<<" ABSOLUTE Position 5 Y: "<<py[i]<<endl;
x[i] = px[i];
y[i] = py[i];
px[i] = dx[i];
py[i] = dy[i];
    }
///////////////////////////////////////////////////////////////////
///////// ABSOLUTE POSITION 6
else if(position == 6){
px[i] = px[i]+(xSizeWind-(xRight+20));
py[i] = py[i]+(ySizeWind-(yBottom+20));
//cout<<i<<" ABSOLUTE Position 6 X: "<<px[i]<<endl;
//cout<<i<<" ABSOLUTE Position 6 Y: "<<py[i]<<endl;
x[i] = px[i];
y[i] = py[i];
px[i] = dx[i];
py[i] = dy[i];
    }
}
//////////////////////////////////////////////////////////
		return 0;
}

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////

void CZadanieView::OnDraw(CDC* pDC)
{
	CZadanieDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
	// TODO: add draw code for native data here
	CRect rect;
	GetWindowRect(&rect);
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
	pDoc->StringData = ' ';
	pDoc->str1 = ' ';
	pDoc->str2 = ' ';
	pDoc->str3 = ' ';
	pDoc->str4 = ' ';
	pDoc->str5 = ' ';
	pDoc->str6 = ' ';
	int scale = ((pDoc->m_sliderScaleFigure)/2)+50;

	int xarr[5] = {40,100,120,20,40};
	int yarr[5] = {20,20,100,100,20};
//	int xsizeu = sizeof(xarr)/sizeof(xarr[0]);
	int x = rect.Width()/2;
	int y = rect.Height()/2;
	CZadanieView::fnFigure(pDoc->button_position, xarr, yarr, rect.Width(), rect.Height(), scale, 5);
	CSize size = pDC -> GetTextExtent(pDoc->StringData);
//	x = xarr[0];
//	y = yarr[0];

//	x -=size.cx/2;
//	y -=size.cy/2;
	CString xstr;
	CString ystr;
	xstr.Format(_T("%i"), rect.Width());
	ystr.Format(_T("%i"), rect.Height());
	CString xstr1;
	CString ystr1;
	CString xstr2;
	CString ystr2;
	CString xstr3;
	CString ystr3;
	CString xstr4;
	CString ystr4;
	CString xstr5;
	CString ystr5;
	CString str_slider;

	xstr1.Format(_T("%i"), xarr[0]);
	ystr1.Format(_T("%i"), yarr[0]);
	xstr2.Format(_T("%i"), xarr[1]);
	ystr2.Format(_T("%i"), yarr[1]);
	xstr3.Format(_T("%i"), xarr[2]);
	ystr3.Format(_T("%i"), yarr[2]);
	xstr4.Format(_T("%i"), xarr[3]);
	ystr4.Format(_T("%i"), yarr[3]);
	xstr5.Format(_T("%i"), xarr[4]);
	ystr5.Format(_T("%i"), yarr[4]);
	str_slider.Format(_T("%i"), scale);
	pDoc->StringData += " x Window: ";
	pDoc->StringData +=	xstr;
	pDoc->StringData += " y Window: ";
	pDoc->StringData += ystr;
	pDoc->str1 += " x1: ";
	pDoc->str1 += xstr1;
	pDoc->str1 += " y1: ";
	pDoc->str1 += ystr1;
	pDoc->str2 += " x2: ";
	pDoc->str2 += xstr2;
	pDoc->str2 += " y2: ";
	pDoc->str2 += ystr2;	
	pDoc->str3 += " x3: ";
	pDoc->str3 += xstr3;
	pDoc->str3 += " y3: ";
	pDoc->str3 += ystr3;	
	pDoc->str4 += " x4: ";
	pDoc->str4 += xstr4;
	pDoc->str4 += " y4: ";
	pDoc->str4 += ystr4;	
	pDoc->str5 += " x5: ";
	pDoc->str5 += xstr5;
	pDoc->str5 += " y5: ";
	pDoc->str5 += ystr5;
	pDoc->str6 += str_slider;
	pDoc->str6 += " %";
//	pDoc->StringData+=y;
	pDC->TextOut(x,y,pDoc->StringData);
	pDC->TextOut(x,(y+15),pDoc->str1);
	pDC->TextOut(x,(y+30),pDoc->str2);
	pDC->TextOut(x,(y+45),pDoc->str3);
	pDC->TextOut(x,(y+60),pDoc->str4);
	pDC->TextOut(x,(y+75),pDoc->str5);
	pDC->TextOut(x,(y+90),pDoc->str6);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////


	pDC->MoveTo(xarr[0],yarr[0]);
	pDC->LineTo(xarr[0],yarr[0]);
	pDC->LineTo(xarr[1],yarr[1]);
	pDC->LineTo(xarr[2],yarr[2]);
	pDC->LineTo(xarr[3],yarr[3]);
	pDC->LineTo(xarr[4],yarr[4]);

//	CZadanieView::fnFigure(pDoc->button_position,rect.Width(),rect.Width(),100);
/////////////////////Текст добро пожаловать2строки	pDC->TextOut(20,20, welcome_string);
//	pDC->BeginPath();
//	pDC->MoveTo(CPoint(pDoc->button_position,y[0]));
//	pDC->LineTo(CPoint(10,10));
//	pDC->EndPath();
//	pDC->SelectClipPath(RGN_COPY);*/
//	CPen penRed(PS_SOLID,10, RGB(255,0,0));
//	CPen *oldPen;
//	oldPen=pDC->SelectObject(&penRed);
//	pDC->SelectStockObject(BLACK_BRUSH);
//	pDC->MoveTo(x[3],y[3]);
//	pDC->Arc(x[4],y[4],x[5],y[5],x[6],y[6],x[7],y[7]);
//	pDC->Rectangle(CRect(CPoint(10,10),CPoint(100,100)));
/*	for(int x=0; x<100; x++)
	{
		pDC->MoveTo(10,10);
		pDC->LineTo(200,x*20);
	}*/
//pDC->SelectObject(oldPen);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}
/////////////////////////////////////////////////////////////////////////////
// fnFigure


/////////////////////////////////////////////////////////////////////////////
// CZadanieView diagnostics

#ifdef _DEBUG
void CZadanieView::AssertValid() const
{
	CView::AssertValid();
}

void CZadanieView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CZadanieDoc* CZadanieView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CZadanieDoc)));
	return (CZadanieDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CZadanieView message handlers

void CZadanieView::OnButtonFigureScale() 
{
	// TODO: Add your command handler code here
		CDialogFigureScale dlgFigureScale;
		dlgFigureScale.DoModal();
		CZadanieDoc* pDoc = GetDocument();
		ASSERT_VALID(pDoc);
		pDoc->m_sliderScaleFigure = dlgFigureScale.m_sliderScaleFigure;
		    Invalidate();
}

void CZadanieView::OnButtonFigurePosition() 
{
	// TODO: Add your command handler code here
	CDialogFigurePosition dlgFigurePosition;
//////////////////////////////////////////////////////////////////////////////////////////////
	int result = dlgFigurePosition.DoModal();
	CZadanieDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->button_position = dlgFigurePosition.button_position;
    Invalidate();

	
}
///////////////////////////////////////////////////////////////////////////////////////////



