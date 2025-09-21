@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (BOOL)isInternalBuild;
+ (id)udid;
+ (id)productVersion;
+ (id)serialNumber;
+ (id)infoDictionary;
+ (id)osVersion;
+ (id)clientInfoHeader;
+ (BOOL)isMultiUserMode;
+ (id)apnsToken;
+ (id)userAgentHeader;
+ (id)appleIDClientIdentifier;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)deviceColor;
- (id)mobileEquipmentIdentifier;
- (id)buildVersion;
- (id)internationalMobileEquipmentIdentity;
- (id)udid;
- (id)deviceClass;
- (id)productType;
- (id)modelNumber;
- (id)productVersion;
- (id)deviceEnclosureColor;
- (id)regionCode;
- (id)bluetoothMacAddress;
- (id)deviceName;
- (id)serialNumber;
- (id)storageCapacity;
- (id)uniqueChipIdentifier;
- (id)osVersion;
- (id)clientInfoHeader;
- (id)chipIdentifier;
- (id)localSecretType;
- (id)wifiMacAddress;
- (id)deviceCoverGlassColor;
- (id)deviceBackingColor;
- (id)apnsToken;
- (BOOL)hasCellularCapability;
- (id)deviceHousingColor;
- (id)osName;
- (id)userAgentHeader;
- (id)qualifiedBuildVersion;
- (id)deviceInfoDictionary;
- (id)appleIDClientIdentifier;

@end
