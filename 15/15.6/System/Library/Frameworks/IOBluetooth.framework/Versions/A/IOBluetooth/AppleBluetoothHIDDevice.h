@class NSDictionary;

@interface AppleBluetoothHIDDevice : BluetoothHIDDevice {
    NSDictionary *_featureDict;
}

- (void).cxx_destruct;
- (int)disconnect;
- (int)setDeviceName:(id)a0;
- (void)serviceInterestOfType:(unsigned int)a0 argument:(void *)a1;
- (char)batteryDangerouslyLow;
- (char)batteryLow;
- (float)batteryPercent;
- (char)connectToHost:(const struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a0 linkKey:(const struct BluetoothKey { unsigned char x0[16]; } *)a1;
- (int)connectionCounts:(struct ConnectionCount { int x0; int x1; } *)a0;
- (int)deleteAllLinkKeys;
- (id)deviceNameFromHardware;
- (char)factoryDefault;
- (char)fullFactoryDefault;
- (long long)getFeatureReport:(id)a0;
- (float)getFloatFeatureReport:(id)a0;
- (int)getMaxDeviceNameLength;
- (char)handoffAndRemoveHost:(char)a0 pageType:(unsigned char)a1 deviceAddress:(const struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a2 linkKey:(const struct BluetoothKey { unsigned char x0[16]; } *)a3;
- (id)initWithHIDDevice:(unsigned int)a0;
- (char)recantConnection;
- (void)remoteNameRequestComplete:(id)a0 status:(int)a1;
- (char)removeCurrentHost;
- (char)report:(id)a0 info:(struct ReportInfo { int x0; int x1; long long x2; long long x3; } *)a1;
- (char)report:(id)a0 reportID:(int *)a1 min:(int *)a2 max:(int *)a3;
- (int)reportIDForReportKey:(id)a0;
- (char)sendCommandFeatureReport:(id)a0;
- (char)sendConnectionIntervalUpdate:(char)a0 intervalSlots:(unsigned char)a1 transmitAttempts:(unsigned char)a2 asymmetricMultiplier:(unsigned char)a3;
- (char)sendSCODevicePaired;
- (char)sendSCODeviceUnpaired;
- (char)sendSCOLinkActive;
- (char)sendSCOLinkInactive;
- (char)setFeatureReport:(id)a0 value:(long long)a1;
- (char)setFeatureWithReportID:(int)a0 value:(unsigned char)a1;
- (char)setFloatFeatureReport:(id)a0 value:(float)a1;
- (char)setLLREnabled:(char)a0;
- (char)setUserMode:(int)a0;
- (char)suspendDevice:(char)a0;
- (int)userMode;

@end
