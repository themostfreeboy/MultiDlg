#pragma once


// CDlg4 �Ի���

class CDlg4 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlg4)

public:
	CDlg4(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlg4();

// �Ի�������
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL DestroyWindow();
	afx_msg void OnClose();
	afx_msg void OnDestroy();
	afx_msg void PostNcDestroy();
	virtual void OnOK();
	virtual void OnCancel();
};
