#pragma once
class CWinVersionHelper
{
public:
	CWinVersionHelper();
	~CWinVersionHelper();

	bool IsWindows10FallCreatorOrLater() const;		//�жϵ�ǰWindows�汾�Ƿ�ΪWin10�＾�����߸��»���µİ汾
	bool IsWindows7() const;					//�ж�Windows�汾�Ƿ�ΪWindows7
	bool IsWindows8Or8point1() const;			//�ж�Windows�汾�Ƿ�ΪWindows8��Windows8.1
	bool IsWindows8OrLater() const;
	bool IsWindows10OrLater() const;

	int GetMajorVersion() const { return m_major_version; }
	int GetMinorVersion() const { return m_minor_version; }
	int GetBuildNumber() const { return m_build_number; }
protected:
	int m_major_version{};
	int m_minor_version{};
	int m_build_number{};
};
