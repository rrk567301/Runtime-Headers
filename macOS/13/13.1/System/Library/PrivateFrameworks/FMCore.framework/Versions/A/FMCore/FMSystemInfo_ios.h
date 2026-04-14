@interface FMSystemInfo_ios : FMSystemInfo

- (id)productName;
- (id)serialNumber;
- (id)deviceName;
- (id)productType;
- (id)deviceClass;
- (id)osVersion;
- (BOOL)hasSEP;
- (id)wifiMacAddress;
- (id)osBuildVersion;
- (id)deviceUDID;
- (id)ecid;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;
- (id)deviceModelName;
- (id)imei;
- (id)meid;
- (id)chipId;
- (id)btMacAddress;
- (BOOL)isDeviceSecured;

@end
