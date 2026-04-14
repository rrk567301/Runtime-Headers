@interface FMSystemInfo_ios : FMSystemInfo

- (id)deviceClass;
- (id)productType;
- (id)deviceModelName;
- (id)productName;
- (id)ecid;
- (id)osVersion;
- (id)imei;
- (id)deviceName;
- (id)chipId;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;
- (id)serialNumber;
- (id)meid;
- (id)wifiMacAddress;
- (id)deviceUDID;
- (id)osBuildVersion;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (BOOL)isDeviceSecured;
- (BOOL)hasSEP;
- (id)btMacAddress;

@end
