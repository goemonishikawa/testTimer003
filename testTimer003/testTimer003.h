// testTimer003.h : file di intestazione principale per l'applicazione PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "includere 'stdafx.h' prima di includere questo file per PCH"
#endif

#include "resource.h"		// simboli principali


// CtestTimer003App:
// Vedere testTimer003.cpp per l'implementazione di questa classe
//

class CtestTimer003App : public CWinApp
{
public:
	CtestTimer003App();

// Override
	public:
	virtual BOOL InitInstance();

// Implementazione

	DECLARE_MESSAGE_MAP()
};

extern CtestTimer003App theApp;