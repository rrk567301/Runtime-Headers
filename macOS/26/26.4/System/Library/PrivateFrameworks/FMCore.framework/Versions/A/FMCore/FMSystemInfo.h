@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)deviceClass;
- (id)productType;
- (id)deviceModelName;
- (id)productName;
- (id)ecid;
- (id)osVersion;
- (id)imei;
- (id)deviceName;
- (id)chipId;
- (BOOL)isInternalBuild;
- (id)serialNumber;
- (id)meid;
- (id)wifiMacAddress;
- (id)deviceUDID;
- (id)osBuildVersion;
- (BOOL)isDeviceSecured;
- (BOOL)hasSEP;
- (id)btMacAddress;
- (id)ownerAccount;

@end
