import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.3

//Test Class - Its here!!!

Window {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Column {
        id: column
        width: 200
        height: 168
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        spacing: 25

        Label {
            id: label
            text: qsTr("Call a C++ Slot")
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Button {
            id: button
            text: qsTr("Click Me")
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                //Call a slot
                testing.bark()

                //Can not call a non-slot - must be a property


            }
        }
    }
}
