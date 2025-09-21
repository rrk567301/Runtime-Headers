@class NSString, SFWirelessSettingsController;

@interface FI_TAirDropWirelessSettingsController : NSObject <SFWirelessSettingsControllerDelegate> {
    SFWirelessSettingsController *_settingsController;
}

@property (nonatomic, getter=isBluetoothEnabled) BOOL bluetoothEnabled;
@property (nonatomic, getter=isWifiEnabled) BOOL wifiEnabled;
@property (readonly, nonatomic) BOOL deviceSupportsWAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;

- (id)_init;
- (void)updateState;
- (void)dealloc;
- (void).cxx_destruct;
- (void)wirelessSettingsDidChange:(id)a0;
- (void)_setBluetoothEnabledForUpdateState:(BOOL)a0;
- (void)_setDeviceSupportsWAPIForUpdateState:(BOOL)a0;
- (void)_setWifiEnabledForUpdateState:(BOOL)a0;

@end
