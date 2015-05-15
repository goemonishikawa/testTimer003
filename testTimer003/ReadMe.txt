================================================================================
    LIBRERIA MFC: cenni preliminari sul progetto testTimer003
===============================================================================

La creazione guidata applicazione ha creato l'applicazione 
testTimer003.  Tale applicazione illustra le nozioni fondamentali sull'utilizzo delle classi 
MFC (Microsoft Foundation Class) e costituisce un punto di partenza per la scrittura dell'applicazione.

Questo file contiene un riepilogo del contenuto di ciascun file che fa parte
dell'applicazione testTimer003.

testTimer003.vcproj
    File di progetto principale per i progetti VC++ generati tramite una creazione guidata applicazione. 
    Contiene informazioni sulla versione di Visual C++ che ha generato il file e 
    informazioni sulle piattaforme, le configurazioni e le caratteristiche del 
    progetto selezionate con la creazione guidata applicazione.

testTimer003.h
    File di intestazione principale per l'applicazione.  Include altre
    intestazioni specifiche del progetto quale Resource.h e dichiara la
    classe di applicazione CtestTimer003App.

testTimer003.cpp
    File di origine principale dell'applicazione contenente la classe di
    applicazione CtestTimer003App.

testTimer003.rc
    Elenco di tutte le risorse Microsoft Windows utilizzate dal
    programma.  Include le icone, le bitmap e i cursori memorizzati
    nella sottodirectory RES.  Questo file può essere modificato direttamente
    in Microsoft Visual C++. Le risorse del progetto sono in 1040.

res\testTimer003.ico
    File di icona utilizzato come icona dell'applicazione.  Tale
    icona è inclusa dal file di risorse principale testTimer003.rc.

res\testTimer003.rc2
    Questo file contiene le risorse non modificate da Microsoft
    Visual C++. Inserire in questo file tutte le risorse non modificabili
    dall'editor di risorse.


/////////////////////////////////////////////////////////////////////////////

La creazione guidata applicazione crea una classe di finestre di dialogo:

testTimer003Dlg.h, testTimer003Dlg.cpp, la finestra di dialogo
    Questi file contengono la classe CtestTimer003Dlg.  Tale classe definisce
    il comportamento della finestra di dialogo principale dell'applicazione.  Il modello della finestra di
    dialogo si trova in testTimer003.rc e può essere modificato in Microsoft Visual C++.


/////////////////////////////////////////////////////////////////////////////

Altri file standard:

StdAfx.h, StdAfx.cpp
    Tali file vengono utilizzati per generare il file di intestazione
    precompilato testTimer003.pch e il file dei tipi precompilato StdAfx.obj.

Resource.h
    File di intestazione principale standard che definisce i nuovi ID risorse.
    Tale file viene letto e aggiornato da Microsoft Visual C++.

/////////////////////////////////////////////////////////////////////////////

Altre note:

la creazione guidata applicazione utilizza il prefisso "TODO:" per indicare le parti del
codice sorgente da aggiungere o personalizzare.

Se l’applicazione utilizza MFC in una DLL condivisa, sarà necessario 
ridistribuire le DLL MFC. Se l’applicazione è in una lingua diversa 
da quella del sistema operativo, sarà inoltre necessario 
ridistribuire il file MFC80XXX.DLL delle risorse corrispondenti localizzate. 
Per ulteriori informazioni su entrambi gli argomenti, vedere la sezione relativa 
alla ridistribuzione di applicazioni Visual C++ nella documentazione MSDN.

/////////////////////////////////////////////////////////////////////////////