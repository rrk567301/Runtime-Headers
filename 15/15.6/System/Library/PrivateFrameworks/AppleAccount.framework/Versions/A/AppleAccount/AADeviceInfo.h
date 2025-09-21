@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) char locationServicesRestricted;

+ (id)infoDictionary;
+ (id)serialNumber;
+ (id)productVersion;
+ (char)isInternalBuild;
+ (id)udid;
+ (id)osVersion;
+ (char)isMultiUserMode;
+ (id)userAgentHeader;
+ (id)apnsToken;
+ (id)appleIDClientIdentifier;
+ (id)clientInfoHeader;
+ (char)hasiCloudSignOutRestriction;

- (id)regionCode;
- (id)serialNumber;
- (id)deviceName;
- (id)productVersion;
- (id)deviceClass;
- (id)productType;
- (id)buildVersion;
- (id)modelNumber;
- (id)udid;
- (id)osVersion;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (id)internationalMobileEquipmentIdentity;
- (id)mobileEquipmentIdentifier;
- (id)storageCapacity;
- (id)localSecretType;
- (id)userAgentHeader;
- (id)apnsToken;
- (id)appleIDClientIdentifier;
- (id)bluetoothMacAddress;
- (id)chipIdentifier;
- (id)clientInfoHeader;
- (id)deviceBackingColor;
- (id)deviceCoverGlassColor;
- (id)deviceHousingColor;
- (id)deviceInfoDictionary;
- (char)hasCellularCapability;
- (id)osName;
- (id)uniqueChipIdentifier;
- (id)wifiMacAddress;

@end
