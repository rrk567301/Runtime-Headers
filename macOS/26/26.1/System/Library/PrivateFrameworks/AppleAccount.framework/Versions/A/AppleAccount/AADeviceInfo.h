@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)osVersion;
+ (id)udid;
+ (id)productVersion;
+ (BOOL)isInternalBuild;
+ (id)clientInfoHeader;
+ (id)serialNumber;
+ (id)infoDictionary;
+ (id)userAgentHeader;
+ (id)apnsToken;
+ (BOOL)isMultiUserMode;
+ (id)appleIDClientIdentifier;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)osVersion;
- (id)udid;
- (id)deviceClass;
- (id)deviceEnclosureColor;
- (id)productVersion;
- (id)modelNumber;
- (id)productType;
- (id)mobileEquipmentIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (id)deviceName;
- (id)clientInfoHeader;
- (id)serialNumber;
- (id)wifiMacAddress;
- (id)deviceCoverGlassColor;
- (id)userAgentHeader;
- (id)buildVersion;
- (id)storageCapacity;
- (id)regionCode;
- (id)chipIdentifier;
- (id)apnsToken;
- (id)qualifiedBuildVersion;
- (id)uniqueChipIdentifier;
- (id)localSecretType;
- (id)deviceColor;
- (id)deviceInfoDictionary;
- (id)deviceBackingColor;
- (id)bluetoothMacAddress;
- (id)appleIDClientIdentifier;
- (id)osName;
- (BOOL)hasCellularCapability;
- (id)deviceHousingColor;

@end
