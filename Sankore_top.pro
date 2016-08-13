# This is the project that builds all the dependencies and the Sankore application itself.
# Open this project in Qt Creator to do development work.
TEMPLATE = subdirs

include(config.pri)

SUBDIRS = \
    sub_app \
    sub_quazip \
    sub_xpdf

sub_app.file = Sankore_3.1.pro
sub_app.depends = sub_quazip sub_xpdf

sub_quazip.subdir = thirdparty/quazip
sub_xpdf.subdir = thirdparty/xpdf

win32 {
    SUBDIRS += sub_zlib
    sub_app.depends += sub_zlib
    sub_zlib.subdir = thirdparty/zlib
}
