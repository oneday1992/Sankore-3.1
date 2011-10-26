#include "UBDockPaletteWidget.h"

UBDockPaletteWidget::UBDockPaletteWidget(QWidget *parent, const char *name):QWidget(parent)
{
    setObjectName(name);
}

UBDockPaletteWidget::~UBDockPaletteWidget()
{

}

QPixmap UBDockPaletteWidget::iconToRight()
{
    return mIconToRight;
}

QPixmap UBDockPaletteWidget::iconToLeft()
{
    return mIconToLeft;
}

QString UBDockPaletteWidget::name()
{
    return mName;
}

void UBDockPaletteWidget::registerMode(eUBDockPaletteWidgetMode mode)
{
    if(!mRegisteredModes.contains(mode))
        mRegisteredModes.append(mode);
}

void UBDockPaletteWidget::slot_changeMode(eUBDockPaletteWidgetMode newMode)
{
    this->setVisible(mRegisteredModes.contains(newMode));
}

