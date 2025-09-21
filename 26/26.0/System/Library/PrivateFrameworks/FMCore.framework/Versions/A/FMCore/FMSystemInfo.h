@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (BOOL)isInternalBuild;
- (id)deviceUDID;
- (id)imei;
- (id)osBuildVersion;
- (id)productName;
- (id)deviceClass;
- (id)productType;
- (id)deviceModelName;
- (id)deviceName;
- (BOOL)isDeviceSecured;
- (id)serialNumber;
- (id)meid;
- (id)osVersion;
- (id)wifiMacAddress;
- (id)btMacAddress;
- (id)chipId;
- (BOOL)hasSEP;
- (id)ecid;
- (id)ownerAccount;

@end
