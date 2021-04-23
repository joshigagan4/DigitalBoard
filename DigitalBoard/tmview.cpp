#include "tmview.h"
#include<iostream>
using namespace std;
void TMView::add(DrawableComponent *object)
{
 list.prepend(object);
}

void TMView::draw(QPainter *painter)
{
DrawableComponent *l;
int i=0;

while(i<list.size())
{
    l=list[i];
    l->draw(painter);
    i++;
}
}
QList<DrawableComponent *>TMView::getComponentList()
{
    return list;
}
QString TMView::lastAddedComponentName()
{
    return list.first()->toString();
}

int TMView::processClick(int x, int y, QPainter *event)
{
int i=0;
DrawableComponent *d;
while(i<list.size())
{
    d=list[i];
    if(d->isOwnedByYou(x,y))
    {
        d->select(event);
        return i;
    }
    i++;
}
return -1;
}

QList<QString> TMView::update()
{
    return componentNameList;
}
void TMView::addComponentName(DrawableComponent *d)
{
    componentNameList.prepend(d->toString());
}

void TMView::clear()
{
    list.clear();
}

void TMView::deleteComponent(int index)
{
    list.removeAt(index);
}
