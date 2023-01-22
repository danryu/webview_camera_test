#include <QGuiApplication>
#include <QQuickView>
#include <QQmlEngine>
#include <QtWebView/QtWebView>
#include <QtMultimedia>

int main(int argc, char* argv[])
{
    QtWebView::initialize();
    qInfo() << "QT_WEBVIEW_PLUGIN: " << QString(qgetenv("QT_WEBVIEW_PLUGIN"));

    QGuiApplication app(argc,argv);
    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:///webview.qml"));
    view.resize(800, 650);
    view.show();
    return app.exec();
}
