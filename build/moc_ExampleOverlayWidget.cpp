/****************************************************************************
** Meta object code from reading C++ file 'ExampleOverlayWidget.h'
**
** Created: Sun Jul 15 20:48:37 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ExampleOverlayWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExampleOverlayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExampleOverlayWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   29,   29,   29, 0x05,
      30,   29,   29,   29, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ExampleOverlayWidget[] = {
    "ExampleOverlayWidget\0focus()\0\0shutter()\0"
};

const QMetaObject ExampleOverlayWidget::staticMetaObject = {
    { &OverlayWidget::staticMetaObject, qt_meta_stringdata_ExampleOverlayWidget,
      qt_meta_data_ExampleOverlayWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExampleOverlayWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExampleOverlayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExampleOverlayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExampleOverlayWidget))
        return static_cast<void*>(const_cast< ExampleOverlayWidget*>(this));
    return OverlayWidget::qt_metacast(_clname);
}

int ExampleOverlayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OverlayWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: focus(); break;
        case 1: shutter(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ExampleOverlayWidget::focus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ExampleOverlayWidget::shutter()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
