@interface FMSystemInfo_ios : FMSystemInfo

- (id)productName;
- (id)serialNumber;
- (id)deviceName;
- (id)deviceClass;
- (id)productType;
- (id)osVersion;
- (char)hasSEP;
- (id)wifiMacAddress;
- (id)osBuildVersion;
- (id)deviceUDID;
- (id)ecid;
- (id)deviceModelName;
- (char)isDeviceSecured;
- (char)_boolDeviceInfoForKey:(struct __CFString { } *)a0;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (id)btMacAddress;
- (id)chipId;
- (id)imei;
- (id)meid;

@end
