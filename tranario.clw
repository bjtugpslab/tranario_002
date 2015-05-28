; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CVerification
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "tranario.h"
LastPage=0

ClassCount=9
Class1=CTranarioApp
Class2=CTranarioDoc
Class3=CTranarioView
Class4=CMainFrame

ResourceCount=7
Resource1=IDD_TRANARIO_NETWORK
Resource2=IDD_TRANARIO_FORM
Class5=CAboutDlg
Resource3=IDD_ABOUTBOX
Resource4=IDR_MAINFRAME
Resource5=IDD_TRANARIO_VERIFICATION
Resource6=IDD_TRANARIO_CONTROL
Class6=CControl
Class7=CNetwork
Class8=CStatistics
Class9=CVerification
Resource7=IDD_TRANARIO_STATISTICS

[CLS:CTranarioApp]
Type=0
HeaderFile=tranario.h
ImplementationFile=tranario.cpp
Filter=N

[CLS:CTranarioDoc]
Type=0
HeaderFile=tranarioDoc.h
ImplementationFile=tranarioDoc.cpp
Filter=N

[CLS:CTranarioView]
Type=0
HeaderFile=tranarioView.h
ImplementationFile=tranarioView.cpp
Filter=D
BaseClass=CFormView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=tranario.cpp
ImplementationFile=tranario.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_TRANARIO_FORM]
Type=1
Class=CTranarioView
ControlCount=0

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_TRANARIO_CONTROL]
Type=1
Class=CControl
ControlCount=0

[DLG:IDD_TRANARIO_VERIFICATION]
Type=1
Class=CVerification
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[DLG:IDD_TRANARIO_NETWORK]
Type=1
Class=CNetwork
ControlCount=0

[DLG:IDD_TRANARIO_STATISTICS]
Type=1
Class=CStatistics
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[CLS:CControl]
Type=0
HeaderFile=Control.h
ImplementationFile=Control.cpp
BaseClass=CDialog
Filter=D
LastObject=CControl

[CLS:CNetwork]
Type=0
HeaderFile=Network.h
ImplementationFile=Network.cpp
BaseClass=CDialog
Filter=D
LastObject=CNetwork
VirtualFilter=dWC

[CLS:CStatistics]
Type=0
HeaderFile=Statistics.h
ImplementationFile=Statistics.cpp
BaseClass=CDialog
Filter=D
LastObject=CStatistics

[CLS:CVerification]
Type=0
HeaderFile=Verification.h
ImplementationFile=Verification.cpp
BaseClass=CDialog
Filter=D
LastObject=CVerification

