#include "CppQtGuiStarter.h"

CppQtGuiStarter::CppQtGuiStarter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButtonSquare, SIGNAL(released()), this,
			SLOT(HandleSquareClick()));
	connect(ui.pushButtonMultiplyByTwo, SIGNAL(released()), this,
			SLOT(HandleMultiplyByTwoClick()));
}

void CppQtGuiStarter::HandleSquareClick()
{
	auto value = ui.spinBoxInput->value();
	auto sq = m_Sample.Square(value);
	ui.labelResult->setText(QString::number(sq));
}

void CppQtGuiStarter::HandleMultiplyByTwoClick()
{
	auto value = ui.spinBoxInput->value();
	auto sq = m_Sample.MultiplyByTwo(value);
	ui.labelResult->setText(QString::number(sq));
}
