#include "wizardview.h"

WizardView::WizardView(QWidget *parent) : QWidget(parent)
{
	m_wizardWidget = new WizardWidget();
	widget = QWidget::createWindowContainer(m_wizardWidget,this);
	widget->show();
}
void WizardView::setFile(EmsComms *comms,QString filename)
{
	m_wizardWidget->setFile(comms,filename);
	widget->setGeometry(m_wizardWidget->geometry());
}

void WizardView::passConfig(QMap<QString,QList<ConfigBlock> > config)
{
	m_wizardWidget->passConfig(config);
}

void WizardView::addConfig(QString name,ConfigData *config)
{
	m_wizardWidget->addConfig(name,config);
}
void WizardView::closeEvent(QCloseEvent *event)
{
	event->ignore();
	((QMdiSubWindow*)this->parent())->hide();
	emit windowHiding((QMdiSubWindow*)this->parent());
	emit visibilityChanged(false);
}
