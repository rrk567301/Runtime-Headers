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
+ (BOOL)hasiCloudSignOutRestriction;
+ (id)apnsToken;
+ (id)appleIDClientIdentifier;
+ (id)clientInfoHeader;
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
- (id)deviceInfoDictionary;
- (id)wifiMacAddress;
- (id)bluetoothMacAddress;
- (id)deviceCoverGlassColor;
- (id)deviceHousingColor;
- (id)deviceBackingColor;
- (id)storageCapacity;
- (id)osName;
- (id)regionCode;
- (id)apnsToken;
- (id)chipIdentifier;
- (id)uniqueChipIdentifier;
- (id)appleIDClientIdentifier;
- (id)clientInfoHeader;
- (id)userAgentHeader;

@end
