// stdafx.h : file di inclusione per file di inclusione del sistema standard
// o file di inclusione specifici del progetto utilizzati di frequente,
// ma modificati di rado.

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Escludere dalle intestazioni Windows gli elementi utilizzati di rado.
#endif

// Modificare le seguenti definizioni se è necessario creare una piattaforma prima di quelle specificate di seguito.
// Fare riferimento a MSDN per le ultime informazioni sui valori corrispondenti per le differenti piattaforme.
#ifndef WINVER				// È consentito l'utilizzo di funzionalità specifiche per Windows XP o versioni successive.
#define WINVER 0x0501		// Cambiare il valore immettendo quello corretto per altre versioni di Windows.
#endif

#ifndef _WIN32_WINNT		// È consentito l'utilizzo di funzionalità specifiche per Windows XP o versioni successive.                   
#define _WIN32_WINNT 0x0501	// Cambiare il valore immettendo quello corretto per altre versioni di Windows.
#endif						

#ifndef _WIN32_WINDOWS		// È consentito l'utilizzo di funzionalità specifiche per Windows 98 o versioni successive.
#define _WIN32_WINDOWS 0x0410 // Cambiare il valore immettendo quello corretto per Windows Millennium Edition o versione successiva.
#endif

#ifndef _WIN32_IE			// È consentito l'utilizzo di funzionalità specifiche per IE 6.0 o versioni successive.
#define _WIN32_IE 0x0600	// Cambiare il valore immettendo quello corretto per altre versioni di Internet Explorer.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// alcuni costruttori CString saranno espliciti.

// disattiva l'operazione delle classi MFC che consiste nel nascondere alcuni comuni messaggi di avviso che vengono spesso ignorati.
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // componenti MFC di base e standard
#include <afxext.h>         // estensioni MFC





#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>		// Supporto MFC per controlli comuni di Internet Explorer 4
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// Supporto MFC per controlli comuni di Windows
#endif // _AFX_NO_AFXCMN_SUPPORT











