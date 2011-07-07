#if !defined(AFX_S4DATADYCDLGEX_H__2CA63119_1BC2_470E_9FAE_4B066D8C11B7__INCLUDED_)
#define AFX_S4DATADYCDLGEX_H__2CA63119_1BC2_470E_9FAE_4B066D8C11B7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DataDycDlg.h : header file
//
#include "..\include\myedit.h"
#include "BaseDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CS4DataDycDlgEx dialog

class CS4DataDycDlgEx : public CBaseDlg
{
// Construction
public:
	CS4DataDycDlgEx(CWnd* pParent = NULL);   // standard constructor
	~CS4DataDycDlgEx();
	HFONT	  m_hFont;
	CPtrList m_InfoList;
	void RemoveInfoList();
// Dialog Data
	//{{AFX_DATA(CS4DataDycDlgEx)
	enum { IDD = IDD_DATA_DYC_S4_EX };
	CRescaleButton	m_rbnOK;
	CRescaleButton	m_rbnCancel;
	CStaticEx	m_scTitle;
	CStaticEx	m_scStorage;
	CStaticEx   m_scLastName;
	CStaticEx	m_scFirstName;
	CStaticEx	m_scDefault;
	CStaticEx	m_scBirthday;
	CStaticEx	m_scNum13;
	CStaticEx	m_scNum12;
	CStaticEx	m_scNum11;
	CStaticEx	m_scNum10;
	CStaticEx	m_scNum9;
	CStaticEx	m_scNum8;
	CStaticEx	m_scNum7;
	CStaticEx	m_scNum6;
	CStaticEx	m_scNum5;
	CStaticEx	m_scNum4;
	CStaticEx	m_scNum3;
	CStaticEx	m_scNum2;
	CStaticEx	m_scNum1;
	CStaticEx	m_scName;
	CStaticEx	m_scDot13;
	CStaticEx	m_scDot12;
	CStaticEx	m_scDot11;
	CStaticEx	m_scDot10;
	CStaticEx	m_scDot9;
	CStaticEx	m_scDot8;
	CStaticEx	m_scDot7;
	CStaticEx	m_scDot6;
	CStaticEx	m_scDot5;
	CStaticEx	m_scDot4;
	CStaticEx	m_scDot3;
	CStaticEx	m_scDot2;
	CStaticEx	m_scDot1;
	CMyEdit	m_ed11;
	CMyEdit	m_ed10;
	CMyEdit	m_ed9;
	CMyEdit	m_ed8;
	CMyEdit	m_ed7;
	CMyEdit	m_ed6;
	CMyEdit	m_ed5;
	CMyEdit	m_ed4;
	CMyEdit	m_ed3;
	CMyEdit	m_edLastName;
	CMyEdit	m_edFirstName;
	CComboBox	m_cb11;
	CComboBox	m_cb10;
	CComboBox	m_cb9;
	CComboBox	m_cb8;
	CComboBox	m_cb7;
	CComboBox	m_cb6;
	CComboBox	m_cb5;
	CComboBox	m_cb4;
	CComboBox	m_cb3;
	CCheckEx2	m_ch12;
	CCheckEx2	m_ch11;
	CCheckEx2	m_ch10;
	CCheckEx2	m_ch9;
	CCheckEx2	m_ch8;
	CCheckEx2	m_ch7;
	CCheckEx2	m_ch6;
	CCheckEx2	m_ch5;
	CRadioEx	m_rdSIM;
	CRadioEx	m_rdME;
	CComboBox	m_cbDefault;
	CDateTimeCtrl	m_dpBirthday;
	//}}AFX_DATA

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CS4DataDycDlgEx)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
	BOOL m_bFocusOnAddressEdit;
//	ContactInfo* m_pContactInfo;

	CString m_strAddress_ext;
	CString m_strAddress_Street;
	CString m_strAddress_City;
	CString m_strAddress_State;
	CString m_strAddress_Zip;
	CString m_strAddress_Country;


// Implementation
protected:
	//enable control row 0-8
	void xEnableControl(int iIndex,BOOL bFlag);
	//set default combobox string
	void xSetDefaultCombo();
	//set control enable 
	void xSetDefaultEnableControl();
	//set data to control
	void xSetDataToDlgCtrl();
	//set default control status
	void xSetDefaultControl();
	//get the unused control
	void xGetUnusedControl(int iIndex,CCheckEx **pCh,CComboBox **pCb,CMyEdit **pEdit);
	//
	void xSetComboItem();
	int xGetComboSel(int iIndex);
	void xSetSupportColumnLength();
	void xSetCombo2Item();
	void UpdateTextComboBox(CComboBox* pCombo1,CComboBox* pCombo2,CComboBox* pNeedUpdateCombo);
	BOOL IsFocusOnAddressEdit(CComboBox* pCombo);
	void EditAddress(CMyEdit* pEdit);

protected:
/*	COLORREF	m_crBg;
	int m_iMode;	// set dlg mode
	int m_iIsME;	//set default storage type
	CCardPanel	*m_pData;
	//a member variable to store 
	CSupportEntry m_se;*/
	//app only support 5-3,so other data must be stored
	DEQPHONEDATA m_deqDetainData;
	// Generated message map functions
	//{{AFX_MSG(CS4DataDycDlgEx)
	afx_msg void OnCheckBtn(UINT nID);
	virtual void OnCancel();
	virtual void OnOK();
	afx_msg void OnRdSim();
	afx_msg void OnRdMobile();
	afx_msg void OnSelchangeCombo5();
	afx_msg void OnSelchangeCombo6();
	afx_msg void OnSelchangeCombo7();
	afx_msg void OnSelchangeCombo8();
	afx_msg void OnSelchangeCombo9();
	afx_msg void OnSelchangeCombo10();
	afx_msg void OnSelchangeCombo11();
	afx_msg void OnSelchangeCombo4();
	afx_msg void OnSelchangeCombo3();
	virtual BOOL OnInitDialog();
	afx_msg void OnDropdownS6Combo11();
	afx_msg void OnDropdownS6Combo10();
	afx_msg void OnDropdownS6Combo9();
	afx_msg void OnDropdownS6Combo3();
	afx_msg void OnSetfocusS6Edit9();
	afx_msg void OnSetfocusS6Edit10();
	afx_msg void OnSetfocusS6Edit11();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_S4DATADYCDLGEX_H__2CA63119_1BC2_470E_9FAE_4B066D8C11B7__INCLUDED_)