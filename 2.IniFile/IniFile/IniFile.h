/*****************************************************************
 
	����:��ȡ��ǰĿ¼��ini�����ļ���
	����:dll�ļ�,lib�ļ�,.hͷ�ļ�,�����ļ�
	����:2013-11-30
	����:fusijie
	E_Mail:Geek.Jacky@Gmail.com
	version: 1.0
	ע:��ǰ�汾����ȫ�����ã���������׷�ӵ���ʽ

*****************************************************************/

#pragma once

// CIniFile ����Ŀ��

class AFX_EXT_CLASS CIniFile : public CObject
{
public:
	CIniFile();
	CIniFile(CString FileName):m_sFileName(FileName){}
	virtual ~CIniFile();

public:
	void SetFileName(CString FileName);

	CString GetString(CString Section, CString Item, CString default);
	int GetInt(CString Section, CString Item, int default);
	bool GetBool(CString Section, CString Item, bool default);

	void SetString(CString Section, CString Item, CString Value);
	void SetInt(CString Section, CString Item, int Value);
	void SetBool(CString Section, CString Item, bool Value);

private:

	void WriteFileString(CString Section, CString Item, CString Value);
	CString GetFileString(CString Section, CString Item, CString Value);

	BOOL WriteIniFile();
	BOOL ReadIniFile();

	CString m_sFileName;
	CStdioFile IniFile;
	BOOL  bFileExist;
	CStringArray FileContainer;
};


