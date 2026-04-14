@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)infoDictionary;
+ (id)productVersion;
+ (id)osVersion;
+ (BOOL)isMultiUserMode;
+ (id)udid;
+ (BOOL)isInternalBuild;
+ (id)serialNumber;
+ (id)apnsToken;
+ (id)userAgentHeader;
+ (id)appleIDClientIdentifier;
+ (id)clientInfoHeader;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)deviceClass;
- (id)buildVersion;
- (id)productType;
- (id)productVersion;
- (id)osVersion;
- (id)regionCode;
- (id)deviceName;
- (id)deviceEnclosureColor;
- (BOOL)hasCellularCapability;
- (id)deviceColor;
- (id)osName;
- (id)deviceBackingColor;
- (id)deviceInfoDictionary;
- (id)udid;
- (id)uniqueChipIdentifier;
- (id)serialNumber;
- (id)qualifiedBuildVersion;
- (id)deviceCoverGlassColor;
- (id)apnsToken;
- (id)chipIdentifier;
- (id)wifiMacAddress;
- (id)userAgentHeader;
- (id)storageCapacity;
- (id)bluetoothMacAddress;
- (id)modelNumber;
- (id)appleIDClientIdentifier;
- (id)deviceHousingColor;
- (id)mobileEquipmentIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (id)clientInfoHeader;
- (id)localSecretType;

@end
