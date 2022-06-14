QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    homedialog.cpp \
    hostel.cpp \
    hostelsdialog.cpp \
    main.cpp \
    maininfo.cpp \
    teacher.cpp \
    teachersdialog.cpp \
    universitiesdialog.cpp \
    university.cpp \
    viewdialog.cpp \
    welcomewindow.cpp

HEADERS += \
    homedialog.h \
    hostel.h \
    hostelsdialog.h \
    maininfo.h \
    teacher.h \
    teachersdialog.h \
    universitiesdialog.h \
    university.h \
    viewdialog.h \
    welcomewindow.h

FORMS += \
    homedialog.ui \
    hostelsdialog.ui \
    teachersdialog.ui \
    universitiesdialog.ui \
    viewdialog.ui \
    welcomewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
