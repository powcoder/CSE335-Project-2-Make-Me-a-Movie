https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/**
 * \file MachineLib.cpp
 *
 * \author Charles Owen
 */


#include "pch.h"
#include "MachineLib.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


BEGIN_MESSAGE_MAP(CMachineLibApp, CWinApp)
END_MESSAGE_MAP()


/**
 * Constructor
 */
CMachineLibApp::CMachineLibApp()
{
}


/// The one and only CMachineLibApp object
CMachineLibApp theApp;


/**
 * CMachineLibApp initialization
 * \returns 
 */
BOOL CMachineLibApp::InitInstance()
{
	CWinApp::InitInstance();
    srand((unsigned int)time(nullptr));
	return TRUE;
}

