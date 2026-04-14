@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (BOOL)isInternalBuild;
+ (id)productVersion;
+ (id)infoDictionary;
+ (id)udid;
+ (id)osVersion;
+ (id)serialNumber;
+ (id)apnsToken;
+ (id)appleIDClientIdentifier;
+ (BOOL)isMultiUserMode;
+ (id)userAgentHeader;
+ (id)clientInfoHeader;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)mobileEquipmentIdentifier;
- (id)productVersion;
- (id)bluetoothMacAddress;
- (BOOL)hasCellularCapability;
- (id)internationalMobileEquipmentIdentity;
- (id)deviceColor;
- (id)udid;
- (id)deviceClass;
- (id)modelNumber;
- (id)regionCode;
- (id)productType;
- (id)osVersion;
- (id)buildVersion;
- (id)serialNumber;
- (id)storageCapacity;
- (id)apnsToken;
- (id)appleIDClientIdentifier;
- (id)qualifiedBuildVersion;
- (id)deviceEnclosureColor;
- (id)deviceBackingColor;
- (id)chipIdentifier;
- (id)deviceCoverGlassColor;
- (id)deviceName;
- (id)deviceHousingColor;
- (id)userAgentHeader;
- (id)deviceInfoDictionary;
- (id)clientInfoHeader;
- (id)wifiMacAddress;
- (id)localSecretType;
- (id)osName;
- (id)uniqueChipIdentifier;

@end
