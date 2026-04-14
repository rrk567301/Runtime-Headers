@interface BluetoothDeviceManager : NSObject

+ (id)sharedDeviceManager;

- (void)dealloc;
- (id)init;
- (int)clearCachedValues:(unsigned int)a0;
- (int)removeCachedValue:(unsigned int)a0 andKeyString:(struct __CFString { } *)a1;
- (int)addServiceDict:(struct __CFDictionary { } *)a0 andSDPRecord:(struct OpaqueIOBluetoothObjectRef **)a1;
- (int)removeServiceWithRecordHandle:(unsigned int)a0;
- (int)disallowRoleSwitchForDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (int)allowRoleSwitchForDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (id)getLocalServices;
- (void)configureHIDDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (void)removeIgnoredHIDDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (void)ignoreHIDDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (unsigned char)isConfiguredHIDDevice:(id)a0;
- (int)addSCOAudioDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0 andConfigDict:(struct __CFDictionary { } *)a1;
- (int)removeSCOAudioDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (int)addPANDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (int)removePANDevice:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (int)setPANConnectionState:(unsigned char)a0 andDevice:(struct OpaqueIOBluetoothObjectRef { } *)a1 andServiceUUID:(unsigned short)a2;
- (int)getPANConnectionState:(struct OpaqueIOBluetoothObjectRef { } *)a0;
- (int)gainAdministrationPrivileges;
- (unsigned char)isBluetoothSecured;
- (void)secureBluetooth:(unsigned char)a0;
- (int)getConfiguredTypes:(struct OpaqueIOBluetoothObjectRef { } *)a0 andTypes:(unsigned int *)a1;
- (id)_serviceToNSData:(id)a0;
- (id)_elementToNSData:(id)a0;

@end
