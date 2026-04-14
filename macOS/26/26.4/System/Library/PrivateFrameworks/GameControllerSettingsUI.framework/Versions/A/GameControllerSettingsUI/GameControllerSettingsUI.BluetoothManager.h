@interface GameControllerSettingsUI.BluetoothManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ discovery;
    void /* unknown type, empty encoding */ controllerInfo;
    void /* unknown type, empty encoding */ controllerSettings;
    void /* unknown type, empty encoding */ numericComparisonPairingDevice;
    void /* unknown type, empty encoding */ passkeyPairingDevice;
    void /* unknown type, empty encoding */ pincodeEntryPairingDevice;
    void /* unknown type, empty encoding */ btsaSettingsChanged;
    void /* unknown type, empty encoding */ didFinishLaunching;
    void /* unknown type, empty encoding */ _anyDeviceIsConnecting;
    void /* unknown type, empty encoding */ _connectedPairedDevices;
    void /* unknown type, empty encoding */ _controllerDiscoverableState;
    void /* unknown type, empty encoding */ _controllerInquiryState;
    void /* unknown type, empty encoding */ _devicePincode;
    void /* unknown type, empty encoding */ _nearbyDevices;
    void /* unknown type, empty encoding */ _shouldShowBTSAKeyboardModal;
    void /* unknown type, empty encoding */ _shouldShowBTSAPointingModal;
    void /* unknown type, empty encoding */ _showNumericComparisonPairingAlert;
    void /* unknown type, empty encoding */ _showPasskeyPairingAlert;
    void /* unknown type, empty encoding */ _showPincodeEntryPairingAlert;
    void /* unknown type, empty encoding */ _bluetoothEnabled;
    void /* unknown type, empty encoding */ _setupAssistantIfNoKeyboard;
    void /* unknown type, empty encoding */ _setupAssistantIfNoPointingDevice;
}

- (void)willEnterForeground;
- (void)didEnterBackground;

@end
