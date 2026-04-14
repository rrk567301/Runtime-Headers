@interface FMSystemInfo_ios : FMSystemInfo

- (id)osVersion;
- (id)ecid;
- (id)productType;
- (id)chipId;
- (id)deviceClass;
- (id)deviceModelName;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (id)productName;
- (id)wifiMacAddress;
- (id)serialNumber;
- (id)deviceName;
- (BOOL)isDeviceSecured;
- (id)meid;
- (id)deviceUDID;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)btMacAddress;
- (id)imei;
- (id)osBuildVersion;
- (BOOL)hasSEP;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;

@end
