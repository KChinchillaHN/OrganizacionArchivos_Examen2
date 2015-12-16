/****************************************************************************
** Meta object code from reading C++ file 'listaregalos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ExamenII_ArbolB/listaregalos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listaregalos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_listaregalos_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_listaregalos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_listaregalos_t qt_meta_stringdata_listaregalos = {
    {
QT_MOC_LITERAL(0, 0, 12), // "listaregalos"
QT_MOC_LITERAL(1, 13, 21), // "on_botAgregar_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "fibonacci"
QT_MOC_LITERAL(4, 46, 3), // "num"
QT_MOC_LITERAL(5, 50, 22), // "on_botEliminar_clicked"
QT_MOC_LITERAL(6, 73, 22), // "on_botCancelar_clicked"
QT_MOC_LITERAL(7, 96, 21) // "on_botGenerar_clicked"

    },
    "listaregalos\0on_botAgregar_clicked\0\0"
    "fibonacci\0num\0on_botEliminar_clicked\0"
    "on_botCancelar_clicked\0on_botGenerar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_listaregalos[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void listaregalos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        listaregalos *_t = static_cast<listaregalos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_botAgregar_clicked(); break;
        case 1: { int _r = _t->fibonacci((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->on_botEliminar_clicked(); break;
        case 3: _t->on_botCancelar_clicked(); break;
        case 4: _t->on_botGenerar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject listaregalos::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_listaregalos.data,
      qt_meta_data_listaregalos,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *listaregalos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *listaregalos::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_listaregalos.stringdata0))
        return static_cast<void*>(const_cast< listaregalos*>(this));
    return QDialog::qt_metacast(_clname);
}

int listaregalos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
