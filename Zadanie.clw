; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMainFrame
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Zadanie.h"
LastPage=0

ClassCount=7
Class1=CZadanieApp
Class2=CZadanieDoc
Class3=CZadanieView
Class4=CMainFrame

ResourceCount=6
Resource1=IDD_ABOUTBOX
Resource2=IDD_ABOUTBOX (English (U.S.))
Class5=CAboutDlg
Resource3=IDD_DIALOG_FIGURE_POSITION
Resource4=IDR_MAINFRAME
Resource5=IDD_DIALOG_FIGURE_SCALE
Class6=CDialogFigureScale
Class7=CDialogFigurePosition
Resource6=IDR_MAINFRAME (English (U.S.))

[CLS:CZadanieApp]
Type=0
HeaderFile=Zadanie.h
ImplementationFile=Zadanie.cpp
Filter=N

[CLS:CZadanieDoc]
Type=0
HeaderFile=ZadanieDoc.h
ImplementationFile=ZadanieDoc.cpp
Filter=N

[CLS:CZadanieView]
Type=0
HeaderFile=ZadanieView.h
ImplementationFile=ZadanieView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CZadanieView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_BUTTON_FIGURE_SCALE
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=Zadanie.cpp
ImplementationFile=Zadanie.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
Command10=ID_EDIT_PASTE
Command11=ID_VIEW_TOOLBAR
Command12=ID_APP_ABOUT
CommandCount=12
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
CommandCount=13
Command4=ID_EDIT_UNDO
Command13=ID_PREV_PANE


[TB:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_VIEW_TOOLBAR
Command12=ID_APP_ABOUT
CommandCount=12

[ACL:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_BUTTON_FIGURE_SCALE
Command2=ID_BUTTON_FIGURE_POSITION
CommandCount=2

[DLG:IDD_DIALOG_FIGURE_POSITION]
Type=1
Class=CDialogFigurePosition
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BOTTON_FIGURE_TOP_LEFT,button,1342242816
Control4=IDC_BUTTON_FIGURE_TOP_RIGHT,button,1342242816
Control5=IDC_BUTTON_FIGURE_BOTTOM_LEFT,button,1342242816
Control6=IDC_BUTTON_FIGURE_BOTTOM_RIGHT,button,1342242816
Control7=IDC_BUTTON_FIGURE_TOP_CENTRE,button,1342242816
Control8=IDC_BUTTON_FIGURE_CENTRE,button,1342242816

[DLG:IDD_DIALOG_FIGURE_SCALE]
Type=1
Class=CDialogFigureScale
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_SLIDER_SCALE_FIGURE,msctls_trackbar32,1342242840
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352

[CLS:CDialogFigureScale]
Type=0
HeaderFile=DialogFigureScale.h
ImplementationFile=DialogFigureScale.cpp
BaseClass=CDialog
Filter=D
LastObject=CDialogFigureScale
VirtualFilter=dWC

[CLS:CDialogFigurePosition]
Type=0
HeaderFile=DialogFigurePosition.h
ImplementationFile=DialogFigurePosition.cpp
BaseClass=CDialog
Filter=D
LastObject=CDialogFigurePosition
VirtualFilter=dWC

