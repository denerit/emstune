#ifndef EMSCORE_H
#define EMSCORE_H

#include <QApplication>
#include <QSettings>
#include "mainwindow.h"
#include "pluginmanager.h"
class EMSCore : public QApplication
{
public:
	EMSCore(int argc = 1, char *argv[] = 0);
	static EMSCore& instance(int argc = 1, char *argv[] = 0)  // return a reference
	{
		static EMSCore instance(argc, argv);
		return instance;
	}
	void run();
	QString &getSettingsDirectory() { return m_settingsDir; }
	QString &getDefaultsDirectory() { return m_defaultsDir; }
	QString &getHomeDirectory() { return m_localHomeDir; }
	QString &getSettingsFile() { return m_settingsFile; }
	QSettings &getSettings() { return QSettings(getSettingsFile(),QSettings::IniFormat); }
private:
	QList<QPair<QString,QString> > getArgs(int argc, char **argv);
	void printHelp();

	MainWindow *mainWindow;
	PluginManager *pluginManager;

	QString m_settingsDir;
	QString m_defaultsDir;
	QString m_localHomeDir;
	QString m_settingsFile;
	QString m_port;
	QString m_plugin;

};

#endif // EMSCORE_H
