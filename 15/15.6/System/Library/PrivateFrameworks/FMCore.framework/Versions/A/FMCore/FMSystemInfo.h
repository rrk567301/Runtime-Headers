@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)productName;
- (id)serialNumber;
- (id)deviceName;
- (id)deviceClass;
- (id)productType;
- (char)isInternalBuild;
- (id)osVersion;
- (char)hasSEP;
- (id)wifiMacAddress;
- (id)osBuildVersion;
- (id)deviceUDID;
- (id)ecid;
- (id)deviceModelName;
- (char)isDeviceSecured;
- (id)btMacAddress;
- (id)chipId;
- (id)imei;
- (id)meid;
- (id)ownerAccount;

@end
