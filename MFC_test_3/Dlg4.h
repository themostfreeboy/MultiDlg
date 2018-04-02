#pragma once


// CDlg4 对话框

class CDlg4 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlg4)

public:
	CDlg4(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlg4();

// 对话框数据
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL DestroyWindow();
	afx_msg void OnClose();
	afx_msg void OnDestroy();
	afx_msg void PostNcDestroy();
	virtual void OnOK();
	virtual void OnCancel();
};
