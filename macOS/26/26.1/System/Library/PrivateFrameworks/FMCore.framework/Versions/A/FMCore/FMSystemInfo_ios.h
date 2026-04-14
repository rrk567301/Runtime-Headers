@interface FMSystemInfo_ios : FMSystemInfo

- (id)osVersion;
- (id)deviceClass;
- (id)productName;
- (id)productType;
- (id)deviceName;
- (id)serialNumber;
- (id)wifiMacAddress;
- (id)deviceModelName;
- (id)meid;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (BOOL)isDeviceSecured;
- (id)imei;
- (id)osBuildVersion;
- (id)ecid;
- (id)chipId;
- (id)deviceUDID;
- (id)btMacAddress;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (BOOL)hasSEP;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;

@end
