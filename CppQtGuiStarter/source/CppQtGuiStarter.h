
#ifndef CppQtGuiStarter_h
#define CppQtGuiStarter_h

#include "ui_CppQtGuiStarter.h"
#include <CppDllStarter/Sample.h>
#include <QtWidgets/QMainWindow>

class CppQtGuiStarter : public QMainWindow
{
	Q_OBJECT

public:
	CppQtGuiStarter(QWidget *parent = Q_NULLPTR);

private:
	Ui::CppQtGuiStarterClass ui;
	CppDllStarter::Sample m_Sample;

private slots:
	void HandleSquareClick();
	void HandleMultiplyByTwoClick();
};

#endif // CppQtGuiStarter_h