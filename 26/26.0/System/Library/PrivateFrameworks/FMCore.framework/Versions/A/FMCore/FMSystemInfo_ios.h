@interface FMSystemInfo_ios : FMSystemInfo

- (id)deviceUDID;
- (id)imei;
- (id)osBuildVersion;
- (id)productName;
- (id)deviceClass;
- (id)productType;
- (id)deviceModelName;
- (id)deviceName;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (BOOL)isDeviceSecured;
- (id)serialNumber;
- (id)meid;
- (id)osVersion;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (id)wifiMacAddress;
- (id)btMacAddress;
- (id)chipId;
- (BOOL)hasSEP;
- (id)ecid;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;

@end
