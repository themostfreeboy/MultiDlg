
// MFC_test_3Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC_test_3.h"
#include "MFC_test_3Dlg.h"
#include "afxdialogex.h"
#include "Dlg1.h"
#include "Dlg2.h"
#include "Dlg3.h"
#include "Dlg4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_test_3Dlg 对话框




CMFC_test_3Dlg::CMFC_test_3Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFC_test_3Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFC_test_3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFC_test_3Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CMFC_test_3Dlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CMFC_test_3Dlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC_test_3Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFC_test_3Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFC_test_3Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFC_test_3Dlg::OnBnClickedButton4)
END_MESSAGE_MAP()


// CMFC_test_3Dlg 消息处理程序

BOOL CMFC_test_3Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFC_test_3Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFC_test_3Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFC_test_3Dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
	exit(0);
}


void CMFC_test_3Dlg::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
	exit(0);
}


void CMFC_test_3Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CDlg1 dlg_1;
	INT_PTR nResponse = dlg_1.DoModal();
}


void CMFC_test_3Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CDlg2 dlg_2;
	INT_PTR nResponse = dlg_2.DoModal();
}


void CMFC_test_3Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	CDlg3 dlg_3;
	INT_PTR nResponse = dlg_3.DoModal();
}


void CMFC_test_3Dlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CDlg4 *pTD = new CDlg4();//采用局部变量创建一个非模态对话框
	pTD->Create(IDD_DIALOG4); //创建一个非模态对话框
	pTD->ShowWindow(SW_SHOWNORMAL); //显示非模态对话框
}
