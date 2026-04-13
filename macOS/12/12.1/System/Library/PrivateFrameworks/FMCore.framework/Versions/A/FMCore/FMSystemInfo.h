@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)productName;
- (id)serialNumber;
- (id)deviceName;
- (id)productType;
- (id)deviceClass;
- (BOOL)isInternalBuild;
- (id)osVersion;
- (BOOL)hasSEP;
- (id)wifiMacAddress;
- (id)deviceUDID;
- (id)ecid;
- (id)osBuildVersion;
- (id)deviceModelName;
- (id)imei;
- (id)meid;
- (id)chipId;
- (id)btMacAddress;
- (BOOL)isDeviceSecured;
- (id)ownerAccount;

@end
