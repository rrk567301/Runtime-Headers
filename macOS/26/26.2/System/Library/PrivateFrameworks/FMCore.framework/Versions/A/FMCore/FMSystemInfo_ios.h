@interface FMSystemInfo_ios : FMSystemInfo

- (id)osBuildVersion;
- (id)deviceUDID;
- (BOOL)isDeviceSecured;
- (id)productName;
- (id)deviceClass;
- (id)productType;
- (id)osVersion;
- (id)meid;
- (id)serialNumber;
- (id)ecid;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)imei;
- (id)deviceModelName;
- (id)deviceName;
- (BOOL)hasSEP;
- (id)chipId;
- (id)btMacAddress;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;
- (id)wifiMacAddress;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;

@end
