// testTimer003Dlg.cpp : file di implementazione
//

#include "stdafx.h"
#include "testTimer003.h"
#include "testTimer003Dlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// finestra di dialogo CtestTimer003Dlg




CtestTimer003Dlg::CtestTimer003Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CtestTimer003Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	FlaTesto=_T("prova");
	FlaNumero=0;
	//m_uiLine=10000;
}

void CtestTimer003Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, FlaTesto);
	DDX_Text(pDX, IDC_EDIT2, FlaNumero);
	DDX_Text(pDX, IDC_EDIT3, FlaNumero2 );// ltime);
	DDX_Text(pDX, IDC_EDIT4, FlaNumero3 );
	DDX_Text(pDX, IDC_EDIT5, FlaNumero4 );
//IDC_SLIDER1
	DDX_Control(pDX, IDC_SLIDER1,  m_Slider1);
	DDX_Control(pDX, IDC_SLIDER2,  m_Slider2);
	DDX_Control(pDX, IDC_SLIDER3,  m_Slider3);
	DDX_Control(pDX, IDC_SLIDER4,  m_Slider4);
	DDX_Control(pDX, IDC_SLIDER5,  m_Slider5);

	DDX_Text(pDX, IDC_EDIT6, m_uiLine1 );
	DDX_Text(pDX, IDC_EDIT7, m_uiLine2 );
	DDX_Text(pDX, IDC_EDIT8, m_uiLine3 );
	DDX_Text(pDX, IDC_EDIT9, m_uiLine4 );
	DDX_Text(pDX, IDC_EDIT10, m_uiLine5 );
	DDX_Text(pDX, IDC_EDIT11, m_uiLine6max );
	DDX_Text(pDX, IDC_EDIT12, m_uiLine7 );

DDX_Text(pDX, IDC_EDIT13, m_uiLine13 );
DDX_Text(pDX, IDC_EDIT14, m_uiLine14 );
DDX_Text(pDX, IDC_EDIT15, m_uiLine15 );
DDX_Text(pDX, IDC_EDIT16, m_uiLine16 );
DDX_Text(pDX, IDC_EDIT17, m_uiLine17 );

	//DDV_MinMaxUInt(pDX, m_uiLine, 0, 65535);
//DDX_CBIndex(pDX, IDC_SLIDER1, m_uiLine);
//IDD_TIMERA
}

BEGIN_MESSAGE_MAP(CtestTimer003Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CtestTimer003Dlg::OnBnClickedButton1)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// gestori di messaggi di CtestTimer003Dlg

BOOL CtestTimer003Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Impostare l'icona per questa finestra di dialogo. Il framework non esegue questa operazione automaticamente
	//  se la finestra principale dell'applicazione non è una finestra di dialogo.
	SetIcon(m_hIcon, TRUE);			// Impostare icona grande.
	SetIcon(m_hIcon, FALSE);		// Impostare icona piccola.

	// TODO: aggiungere qui inizializzazione aggiuntiva.
	m_iTimerID = SetTimer(1,1000,NULL);
	m_el.Begin();
	return TRUE;  // restituisce TRUE a meno che non venga impostato lo stato attivo su un controllo.
}

// Se si aggiunge alla finestra di dialogo un pulsante di riduzione a icona, per trascinare l'icona sarà necessario
//  il codice sottostante. Per le applicazioni MFC che utilizzano il modello documento/vista,
//  questa operazione viene eseguita automaticamente dal framework.

void CtestTimer003Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // contesto di periferica per il disegno

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Centrare l'icona nel rettangolo client.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Disegnare l'icona
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// Il sistema chiama questa funzione per ottenere la visualizzazione del cursore durante il trascinamento
//  della finestra ridotta a icona.
HCURSOR CtestTimer003Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CtestTimer003Dlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here

	FlaTesto=_T("fuoco");
	KillTimer(m_iTimerID);
	FlaNumero=0;
	m_iTimerID = SetTimer(1,1,NULL);
	m_el.Begin();
	//FlaNumero=
	//CDialog::UpdateWindow();
	//CDialog::DoDataExchange(pDX);
	UpdateData(FALSE);
	//UpdateData(TRUE);
	//CDataExchange* pDX;
	//DoDataExchange(pDX);

	//OnPaint();
}

void CtestTimer003Dlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default

	CDialog::OnTimer(nIDEvent);
	FlaNumero++;
	time( &ltime );
	_ftime( &tstruct );
	FlaNumero2=tstruct.millitm;
	FlaNumero3=tstruct.time;
	FlaNumero4=tstruct.timezone;


	m_uiLine1=FlaNumero2%100;
	m_Slider1.SetPos(m_uiLine1);


a13=m_el.End();
a14=m_el.End();
a15=m_el.End();
a16=m_el.End();
a17=m_el.End();

	
	m_uiLine2=FlaNumero2/10;
	m_Slider2.SetPos(m_uiLine2);
	
	m_uiLine3=((FlaNumero3*1000+FlaNumero2)/100)%100;
	m_Slider3.SetPos(m_uiLine3);
	

	m_uiLine4=((FlaNumero3*1000+FlaNumero2)/1000)%100;
	m_Slider4.SetPos(m_uiLine4);
	
	m_uiLine5=((FlaNumero3*1000+FlaNumero2)/10000)%100;
	m_Slider5.SetPos(m_uiLine5);
	
//a2=m_el.End();

	if (m_uiLine6old==m_uiLine4){
	//	
		m_uiLine6++;
	}



	if (m_uiLine6old!=m_uiLine4)
	{
		m_uiLine6old=m_uiLine4;
		m_uiLine6max=m_uiLine6;
		m_uiLine6=0;

		//m_uiLine7=a2-a1;

		
		
	}
m_uiLine7=a1;

		m_uiLine13=a13-a1;
		m_uiLine14=a14-a1;
		m_uiLine15=a15-a1;
		m_uiLine16=a16-a1;
		m_uiLine17=a17-a1;
	a1=m_el.End();
	
//IDC_SLIDER1
	UpdateData(FALSE);
}
