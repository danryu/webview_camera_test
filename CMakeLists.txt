cmake_minimum_required(VERSION 3.16)
project(webview_camera_test LANGUAGES CXX)

#FIXME - doesn't work!
set(ENV{QT_WEBVIEW_PLUGIN} "native")

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Multimedia Qml Quick WebView)

qt_add_executable(webview_camera_test
    main.cpp
)

set_target_properties(webview_camera_test PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
    MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist.in
)

target_link_libraries(webview_camera_test PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Multimedia
    Qt::Qml
    Qt::Quick
    Qt::WebView
)

# Resources:
set(webview_camera_test_resource_files
    "webview.qml"
)

qt_add_resources(webview_camera_test "webview_camera_test"
    PREFIX
        "/"
    FILES
        ${webview_camera_test_resource_files}
)
