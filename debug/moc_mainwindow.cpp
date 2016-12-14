/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Nov 28 15:31:30 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qnetwalk_new/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      19,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      37,   11,   11,   11, 0x08,
      56,   50,   11,   11, 0x08,
      70,   50,   11,   11, 0x08,
      84,   11,   11,   11, 0x08,
     103,  101,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,
     134,   11,   11,   11, 0x08,
     151,   11,   11,   11, 0x08,
     168,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0help()\0about()\0newGame()\0"
    "updateTime()\0index\0lClicked(int)\0"
    "rClicked(int)\0showHighscores()\0s\0"
    "setSkill(int)\0setSkillNovice()\0"
    "setSkillNormal()\0setSkillExpert()\0"
    "setSkillMaster()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->help(); break;
        case 1: _t->about(); break;
        case 2: _t->newGame(); break;
        case 3: _t->updateTime(); break;
        case 4: _t->lClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->rClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showHighscores(); break;
        case 7: _t->setSkill((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setSkillNovice(); break;
        case 9: _t->setSkillNormal(); break;
        case 10: _t->setSkillExpert(); break;
        case 11: _t->setSkillMaster(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
