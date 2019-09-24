
#ifndef CPP_STARTER_CPP_QT_GUI_STARTER_H
#define CPP_STARTER_CPP_QT_GUI_STARTER_H

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

#endif // CPP_STARTER_CPP_QT_GUI_STARTER_H