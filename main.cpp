// Copyright (C) 2017 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QGuiApplication>
#include <QQuickView>
#include <QQmlEngine>
#include <QtWebView/QtWebView>
#include <QtMultimedia>

int main(int argc, char* argv[])
{
    QtWebView::initialize();
//    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
//    QQuickWindow::setGraphicsApi(QSGRendererInterface::OpenGLRhi);


    qInfo() << "QT_WEBVIEW_PLUGIN: " << QString(qgetenv("QT_WEBVIEW_PLUGIN"));

    QGuiApplication app(argc,argv);
    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    // Qt.quit() called in embedded .qml by default only emits
    // quit() signal, so do this (optionally use Qt.exit()).
    QObject::connect(view.engine(), &QQmlEngine::quit,
                     qApp, &QGuiApplication::quit);
//    view.setSource(QUrl("qrc:///webview_camera_test.qml"));
    view.setSource(QUrl("qrc:///webview.qml"));
    view.resize(800, 480);
    view.show();
    return app.exec();
}
