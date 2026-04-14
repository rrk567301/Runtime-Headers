@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)infoDictionary;
+ (id)serialNumber;
+ (id)productVersion;
+ (BOOL)isInternalBuild;
+ (id)udid;
+ (id)osVersion;
+ (BOOL)isMultiUserMode;
+ (id)apnsToken;
+ (id)clientInfoHeader;
+ (id)appleIDClientIdentifier;
+ (BOOL)hasiCloudSignOutRestriction;
+ (id)userAgentHeader;

- (id)serialNumber;
- (id)deviceName;
- (id)productVersion;
- (id)productType;
- (id)deviceClass;
- (id)buildVersion;
- (id)modelNumber;
- (id)udid;
- (id)osVersion;
- (id)internationalMobileEquipmentIdentity;
- (id)mobileEquipmentIdentifier;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (BOOL)hasCellularCapability;
- (id)apnsToken;
- (id)clientInfoHeader;
- (id)appleIDClientIdentifier;
- (id)regionCode;
- (id)osName;
- (id)deviceInfoDictionary;
- (id)wifiMacAddress;
- (id)bluetoothMacAddress;
- (id)deviceCoverGlassColor;
- (id)deviceHousingColor;
- (id)deviceBackingColor;
- (id)storageCapacity;
- (id)chipIdentifier;
- (id)uniqueChipIdentifier;
- (id)userAgentHeader;

@end
