@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (BOOL)isInternalBuild;
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
- (id)imei;
- (id)deviceModelName;
- (id)deviceName;
- (BOOL)hasSEP;
- (id)chipId;
- (id)btMacAddress;
- (id)wifiMacAddress;
- (id)ownerAccount;

@end
