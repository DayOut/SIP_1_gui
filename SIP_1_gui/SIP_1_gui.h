
// SIP_1_gui.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CSIP_1_guiApp:
// See SIP_1_gui.cpp for the implementation of this class
//

class CSIP_1_guiApp : public CWinApp
{
public:
	CSIP_1_guiApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSIP_1_guiApp theApp;