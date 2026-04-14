@class NSDictionary;

@interface AppleBluetoothHIDDevice : BluetoothHIDDevice {
    NSDictionary *_featureDict;
}

- (void).cxx_destruct;
- (int)disconnect;
- (int)setDeviceName:(id)a0;
- (id)deviceNameFromHardware;
- (int)getMaxDeviceNameLength;
- (int)userMode;
- (BOOL)setUserMode:(int)a0;
- (BOOL)fullFactoryDefault;
- (BOOL)factoryDefault;
- (BOOL)recantConnection;
- (BOOL)suspendDevice:(BOOL)a0;
- (float)batteryPercent;
- (BOOL)batteryLow;
- (BOOL)batteryDangerouslyLow;
- (id)initWithHIDDevice:(unsigned int)a0;
- (void)serviceInterestOfType:(unsigned int)a0 argument:(void *)a1;
- (int)deleteAllLinkKeys;
- (int)connectionCounts:(struct ConnectionCount { int x0; int x1; } *)a0;
- (BOOL)sendSCODevicePaired;
- (BOOL)sendSCODeviceUnpaired;
- (BOOL)sendSCOLinkActive;
- (BOOL)sendSCOLinkInactive;
- (BOOL)setLLREnabled:(BOOL)a0;
- (BOOL)sendConnectionIntervalUpdate:(BOOL)a0 intervalSlots:(unsigned char)a1 transmitAttempts:(unsigned char)a2 asymmetricMultiplier:(unsigned char)a3;
- (BOOL)connectToHost:(const struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a0 linkKey:(const struct BluetoothKey { unsigned char x0[16]; } *)a1;
- (BOOL)removeCurrentHost;
- (BOOL)handoffAndRemoveHost:(BOOL)a0 pageType:(unsigned char)a1 deviceAddress:(const struct BluetoothDeviceAddress { unsigned char x0[6]; } *)a2 linkKey:(const struct BluetoothKey { unsigned char x0[16]; } *)a3;
- (float)getFloatFeatureReport:(id)a0;
- (BOOL)setFloatFeatureReport:(id)a0 value:(float)a1;
- (long long)getFeatureReport:(id)a0;
- (BOOL)sendCommandFeatureReport:(id)a0;
- (BOOL)setFeatureReport:(id)a0 value:(long long)a1;
- (BOOL)setFeatureWithReportID:(int)a0 value:(unsigned char)a1;
- (int)reportIDForReportKey:(id)a0;
- (BOOL)report:(id)a0 reportID:(int *)a1 min:(int *)a2 max:(int *)a3;
- (BOOL)report:(id)a0 info:(struct ReportInfo { int x0; int x1; long long x2; long long x3; } *)a1;
- (void)remoteNameRequestComplete:(id)a0 status:(int)a1;

@end
