// Dlg4.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC_test_3.h"
#include "Dlg4.h"
#include "afxdialogex.h"


// CDlg4 �Ի���

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


// CDlg4 ��Ϣ�������


BOOL CDlg4::DestroyWindow()
{
	// TODO: �ڴ����ר�ô����/����û���

	return CDialogEx::DestroyWindow();
}


void CDlg4::OnClose()
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnClose();
}


void CDlg4::OnDestroy()
{
	CDialogEx::OnDestroy();

	// TODO: �ڴ˴������Ϣ����������
	//DestroyWindow();
}


void CDlg4::OnOK()
{
	// TODO: �ڴ����ר�ô����/����û���

	CDialogEx::OnOK();
	//DestroyWindow();
}


void CDlg4::OnCancel()
{
	// TODO: �ڴ����ר�ô����/����û���

	CDialogEx::OnCancel();
	//DestroyWindow();
}


void CDlg4::PostNcDestroy() 
{
       CDialogEx::PostNcDestroy();
       delete this;
}