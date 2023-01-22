# webview_camera_test
Test Qt web view on macOS

Demonstrates varying behavior with Qt WebView on different macOS versions.

Uses WebRTC demo to attempt access to camera / microphone devices.

macOS 11 and later - WebView successfully requests for Camera permission

macOS 10.15 - ???

macOS 10.14 - WebView fails - does NOT request Camera permission
- getUserMedia() returns TypeError - suggesting no camera found ???