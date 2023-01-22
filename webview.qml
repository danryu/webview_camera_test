import QtQuick
import QtQuick.Controls
import QtWebView
import QtMultimedia

Rectangle {
    visible: true
    width: 800
    height: 600

    WebView {
        id: webView
        x: 0
        y: 60
        width: 800
        height: 600
//        anchors.fill: parent
        url: "https://webrtc.github.io/samples/src/content/getusermedia/gum/"
        onLoadingChanged: function(loadRequest) {
            if (loadRequest.errorString)
                console.error(loadRequest.errorString);
        }
    }

//    function startupFunction() {
//        camera.start()
////        camera.stop()
//    }
//    Component.onCompleted: startupFunction();

//    CaptureSession {
//        id: captureSession
//        camera: Camera {
//            id: camera
//        }
//        videoOutput: viewfinder
//    }

//    VideoOutput {
//        id: viewfinder
//        visible: true
//        x: 0
//        y: 0
//        width: 100
//        height: 50
//    }

}

