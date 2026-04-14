@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)osVersion;
+ (id)udid;
+ (id)productVersion;
+ (id)userAgentHeader;
+ (id)infoDictionary;
+ (id)serialNumber;
+ (id)clientInfoHeader;
+ (BOOL)isMultiUserMode;
+ (BOOL)isInternalBuild;
+ (id)appleIDClientIdentifier;
+ (id)apnsToken;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)osVersion;
- (id)mobileEquipmentIdentifier;
- (id)modelNumber;
- (id)udid;
- (id)productType;
- (id)productVersion;
- (id)deviceClass;
- (id)buildVersion;
- (id)userAgentHeader;
- (id)wifiMacAddress;
- (id)deviceEnclosureColor;
- (id)qualifiedBuildVersion;
- (id)serialNumber;
- (id)regionCode;
- (id)deviceBackingColor;
- (id)deviceName;
- (id)internationalMobileEquipmentIdentity;
- (id)deviceCoverGlassColor;
- (id)deviceColor;
- (id)uniqueChipIdentifier;
- (id)clientInfoHeader;
- (id)osName;
- (id)localSecretType;
- (id)deviceHousingColor;
- (id)deviceInfoDictionary;
- (id)appleIDClientIdentifier;
- (id)apnsToken;
- (id)bluetoothMacAddress;
- (id)storageCapacity;
- (BOOL)hasCellularCapability;
- (id)chipIdentifier;

@end
