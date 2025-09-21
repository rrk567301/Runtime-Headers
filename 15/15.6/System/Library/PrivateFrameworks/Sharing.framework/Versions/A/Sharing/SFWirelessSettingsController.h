@interface SFWirelessSettingsController : NSObject {
    char _wifiEnabled;
    char _airplaneModeEnabled;
    char _bluetoothEnabled;
    char _deviceSupportsWAPI;
    char _firstCallbackCompleted;
    char _wirelessCarPlayEnabled;
    char _wirelessAccessPointEnabled;
    struct __SFOperation { } *_information;
}

@property (weak) id delegate;
@property (getter=isAirplaneModeEnabled) char airplaneModeEnabled;
@property (getter=isBluetoothEnabled) char bluetoothEnabled;
@property (getter=isWifiEnabled) char wifiEnabled;
@property (getter=isWirelessAccessPointEnabled) char wirelessAccessPointEnabled;
@property (readonly, getter=isWirelessCarPlayEnabled) char wirelessCarPlayEnabled;
@property (readonly) char deviceSupportsWAPI;
@property (readonly) char isAirDropMDMRestricted;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;

@end
