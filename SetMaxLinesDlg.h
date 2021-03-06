#if !defined(AFX_SETMAXLINESDLG_H__CCCD4B8B_D8BB_11D3_B80B_00A0CC215BD8__INCLUDED_)
#define AFX_SETMAXLINESDLG_H__CCCD4B8B_D8BB_11D3_B80B_00A0CC215BD8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SetMaxLinesDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSetMaxLinesDlg dialog

class CSetMaxLinesDlg : public CDialog
{
// Construction
public:
	CSetMaxLinesDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSetMaxLinesDlg)
	enum { IDD = IDD_DIALOG_MAX_LINES };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	int m_nMaxLines;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSetMaxLinesDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSetMaxLinesDlg)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETMAXLINESDLG_H__CCCD4B8B_D8BB_11D3_B80B_00A0CC215BD8__INCLUDED_)
