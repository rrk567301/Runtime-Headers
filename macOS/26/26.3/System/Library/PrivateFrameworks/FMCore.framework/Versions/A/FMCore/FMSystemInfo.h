@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)osVersion;
- (id)ecid;
- (id)productType;
- (id)chipId;
- (id)deviceClass;
- (id)deviceModelName;
- (id)productName;
- (id)wifiMacAddress;
- (id)serialNumber;
- (id)deviceName;
- (BOOL)isDeviceSecured;
- (id)meid;
- (id)deviceUDID;
- (id)btMacAddress;
- (id)imei;
- (BOOL)isInternalBuild;
- (id)osBuildVersion;
- (BOOL)hasSEP;
- (id)ownerAccount;

@end
