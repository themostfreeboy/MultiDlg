// Dlg4.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC_test_3.h"
#include "Dlg4.h"
#include "afxdialogex.h"


// CDlg4 对话框

IMPLEMENT_DYNAMIC(CDlg4, CDialogEx)

CDlg4::CDlg4(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlg4::IDD, pParent)
{

}

CDlg4::~CDlg4()
{
}

void CDlg4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlg4, CDialogEx)
	ON_WM_CLOSE()
	ON_WM_DESTROY()
	ON_WM_NCDESTROY()
END_MESSAGE_MAP()


// CDlg4 消息处理程序


BOOL CDlg4::DestroyWindow()
{
	// TODO: 在此添加专用代码和/或调用基类

	return CDialogEx::DestroyWindow();
}


void CDlg4::OnClose()
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CDialogEx::OnClose();
}


void CDlg4::OnDestroy()
{
	CDialogEx::OnDestroy();

	// TODO: 在此处添加消息处理程序代码
	//DestroyWindow();
}


void CDlg4::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类

	CDialogEx::OnOK();
	//DestroyWindow();
}


void CDlg4::OnCancel()
{
	// TODO: 在此添加专用代码和/或调用基类

	CDialogEx::OnCancel();
	//DestroyWindow();
}


void CDlg4::PostNcDestroy() 
{
       CDialogEx::PostNcDestroy();
       delete this;
}