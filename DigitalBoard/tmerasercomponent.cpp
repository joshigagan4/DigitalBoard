#include "tmerasercomponent.h"

#include <QPainter>
int TMEraserComponent::getX1() const
{
    return x1;
}

void TMEraserComponent::setX1(int value)
{
    x1 = value;
}

int TMEraserComponent::getY1() const
{
    return y1;
}

void TMEraserComponent::setY1(int value)
{
    y1 = value;
}

int TMEraserComponent::getX2() const
{
    return x2;
}

void TMEraserComponent::setX2(int value)
{
    x2 = value;
}

int TMEraserComponent::getY2() const
{
    return y2;
}

void TMEraserComponent::setY2(int value)
{
    y2 = value;
}

QString TMEraserComponent::getColor() const
{
    return color;
}

void TMEraserComponent::setColor(const QString &value)
{
    color = value;
}

int TMEraserComponent::getWidth() const
{
    return width;
}

void TMEraserComponent::setWidth(int value)
{
    width = value;
}

QString TMEraserComponent::toString()
{
    return "Eraser tool";
}
QString TMEraserComponent::getBorderColor() const
{
    return borderColor;
}

void TMEraserComponent::setBorderColor(QString value)
{
    borderColor = value;
}

int TMEraserComponent::getPenWidth() const
{
    return penWidth;
}

void TMEraserComponent::setPenWidth(int value)
{
    penWidth = value;
}

void TMEraserComponent::draw(QPainter *event)
{
    QPainter *painter=event;
    QPen pen;
    if(borderColor.compare("")==0)
    {
    pen.setColor(Qt::white);
    }
    else
    {
    pen.setColor(Qt::white);
    }
    pen.setWidth(penWidth);
    painter->setPen(pen);
    painter->drawLine(x1,y1,x2,y2);
}

bool TMEraserComponent::isOwnedByYou(int currentX, int currentY)
{
return false;
}
void TMEraserComponent::select(QPainter *event)
{

}
