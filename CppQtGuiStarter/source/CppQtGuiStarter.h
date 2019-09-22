#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CppQtGuiStarter.h"

class CppQtGuiStarter : public QMainWindow
{
	Q_OBJECT

public:
	CppQtGuiStarter(QWidget *parent = Q_NULLPTR);

private:
	Ui::CppQtGuiStarterClass ui;
};
