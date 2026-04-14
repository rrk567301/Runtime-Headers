@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)osVersion;
- (id)deviceClass;
- (id)productName;
- (id)productType;
- (id)deviceName;
- (BOOL)isInternalBuild;
- (id)serialNumber;
- (id)wifiMacAddress;
- (id)deviceModelName;
- (id)meid;
- (BOOL)isDeviceSecured;
- (id)imei;
- (id)osBuildVersion;
- (id)ecid;
- (id)chipId;
- (id)deviceUDID;
- (id)btMacAddress;
- (BOOL)hasSEP;
- (id)ownerAccount;

@end
