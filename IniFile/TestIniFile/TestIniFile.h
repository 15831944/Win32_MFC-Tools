
// TestIniFile.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTestIniFileApp:
// �йش����ʵ�֣������ TestIniFile.cpp
//

class CTestIniFileApp : public CWinAppEx
{
public:
	CTestIniFileApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTestIniFileApp theApp;