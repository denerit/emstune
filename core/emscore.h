#ifndef EMSCORE_H
#define EMSCORE_H

#include <QApplication>
#include "mainwindow.h"
#include "pluginmanager.h"
class EMSCore : public QApplication
{
public:
	EMSCore(int argc, char *argv[]);
private:
	QList<QPair<QString,QString> > getArgs(int argc, char **argv);
	void printHelp();

	MainWindow *mainWindow;
	PluginManager *pluginManager;
};

#endif // EMSCORE_H
