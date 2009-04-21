#include "PythonQtWrapper_QSizeF.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF()
{ 
return new QSizeF(); }

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF(const QSize&  sz)
{ 
return new QSizeF(sz); }

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF(qreal  w, qreal  h)
{ 
return new QSizeF(w, h); }

QSizeF&  PythonQtWrapper_QSizeF::operator_multiply_assign(QSizeF* theWrappedObject, qreal  c)
{
return  (*theWrappedObject)*= c;
}

QSize  PythonQtWrapper_QSizeF::toSize(QSizeF* theWrappedObject) const
{
return  (*theWrappedObject).toSize();
}

void PythonQtWrapper_QSizeF::writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

QSizeF  PythonQtWrapper_QSizeF::expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const
{
return  (*theWrappedObject).expandedTo(arg__1);
}

QSizeF&  PythonQtWrapper_QSizeF::operator_subtract_assign(QSizeF* theWrappedObject, const QSizeF&  arg__1)
{
return  (*theWrappedObject)-= arg__1;
}

qreal  PythonQtWrapper_QSizeF::height(QSizeF* theWrappedObject) const
{
return  (*theWrappedObject).height();
}

void PythonQtWrapper_QSizeF::setHeight(QSizeF* theWrappedObject, qreal  h)
{
 (*theWrappedObject).setHeight(h);
}

bool  PythonQtWrapper_QSizeF::isEmpty(QSizeF* theWrappedObject) const
{
return  (*theWrappedObject).isEmpty();
}

void PythonQtWrapper_QSizeF::scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode)
{
 (*theWrappedObject).scale(s, mode);
}

void PythonQtWrapper_QSizeF::scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode)
{
 (*theWrappedObject).scale(w, h, mode);
}

bool  PythonQtWrapper_QSizeF::operator_equal(QSizeF* theWrappedObject, const QSizeF&  s2)
{
return  (*theWrappedObject)== s2;
}

qreal  PythonQtWrapper_QSizeF::width(QSizeF* theWrappedObject) const
{
return  (*theWrappedObject).width();
}

QSizeF  PythonQtWrapper_QSizeF::boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const
{
return  (*theWrappedObject).boundedTo(arg__1);
}

void PythonQtWrapper_QSizeF::setWidth(QSizeF* theWrappedObject, qreal  w)
{
 (*theWrappedObject).setWidth(w);
}

void PythonQtWrapper_QSizeF::readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QSizeF::isValid(QSizeF* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

void PythonQtWrapper_QSizeF::transpose(QSizeF* theWrappedObject)
{
 (*theWrappedObject).transpose();
}

QSizeF&  PythonQtWrapper_QSizeF::operator_add_assign(QSizeF* theWrappedObject, const QSizeF&  arg__1)
{
return  (*theWrappedObject)+= arg__1;
}

bool  PythonQtWrapper_QSizeF::isNull(QSizeF* theWrappedObject) const
{
return  (*theWrappedObject).isNull();
}

QSizeF&  PythonQtWrapper_QSizeF::operator_divide_assign(QSizeF* theWrappedObject, qreal  c)
{
return  (*theWrappedObject)/= c;
}
