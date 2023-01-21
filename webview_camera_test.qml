// Copyright (C) 2017 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

import QtQuick
import QtMultimedia

Rectangle {
    id : cameraUI

    width: 800
    height: 480
//    color: "black"
    state: "VideoCapture"

    states: [
        State {
            name: "VideoCapture"
            StateChangeScript {
                script: {
                    camera.start()
//                    camera.stop()
                }
            }
        }
    ]

    CaptureSession {
        id: captureSession
        camera: Camera {
            id: camera
        }
        videoOutput: viewfinder
    }

    VideoOutput {
        id: viewfinder
        visible: true
        x: 0
        y: 0
    }

}
