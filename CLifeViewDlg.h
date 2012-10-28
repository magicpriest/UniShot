#pragma once
#include "afxwin.h"
#include "resource.h"


#include "CameraControl.h"
#include "CameraControlDlg.h"
#include ".\CameraControldlg.h"

#include "EDSDK.h"
#include "EDSDKTypes.h"

// LifeViewDlg dialog

class CLifeViewDlg : public CDialog
{
	DECLARE_DYNAMIC(CLifeViewDlg)

public:
	CLifeViewDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CLifeViewDlg();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
  CEVFPictureBox _pictureBox;
  afx_msg void OnBnClickedOk();
  afx_msg void OnBnClickedCancel();
  afx_msg void OnSize(UINT nType, int cx, int cy);
};
