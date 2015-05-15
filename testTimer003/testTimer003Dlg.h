// testTimer003Dlg.h : file di intestazione
//
#include <time.h>
#include <sys/timeb.h>
#include "Elapsed.h"
#pragma once


// finestra di dialogo CtestTimer003Dlg
class CtestTimer003Dlg : public CDialog
{
// Costruzione
public:
	CtestTimer003Dlg(CWnd* pParent = NULL);	// costruttore standard

// Dati della finestra di dialogo
	enum { IDD = IDD_TESTTIMER003_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// supporto DDX/DDV
	CString	FlaTesto;

	int FlaNumero;
	int FlaNumero2;
	int FlaNumero3;
	int FlaNumero4;
	UINT m_iTimerID;
	__time64_t ltime;

	CElapsed m_el;
double a1, a13, a14, a15, a16, a17;
	struct _timeb tstruct;

	CSliderCtrl m_Slider1;
	CSliderCtrl m_Slider2;
	CSliderCtrl m_Slider3;
	CSliderCtrl m_Slider4;
	CSliderCtrl m_Slider5;

	int    m_uiLine1;
	int    m_uiLine2;
	int    m_uiLine3;
	int    m_uiLine4;
	int    m_uiLine5;

	int    m_uiLine6;int    m_uiLine6max;
	int    m_uiLine6old;
	double    m_uiLine7;

	double    m_uiLine13;
	double    m_uiLine14;
	double    m_uiLine15;
	double    m_uiLine16;
	double    m_uiLine17;

// Implementazione
protected:
	HICON m_hIcon;

	// Funzioni generate per la mappa dei messaggi
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
