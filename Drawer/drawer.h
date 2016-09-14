#ifndef DRAWER_H
#define DRAWER_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets\qmessagebox.h>
#include <QtWidgets\qdialog.h>
#include <QtWidgets\qfiledialog.h>
#include <QtWidgets\qlabel.h>
#include <QtWidgets\qpushbutton.h>
#include "ui_drawer.h"

class Drawer : public QMainWindow
{
	Q_OBJECT

public:
	Drawer(QWidget *parent = 0);
	~Drawer();

private:
	Ui::DrawerClass ui;
};

#endif // DRAWER_H
