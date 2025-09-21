@class NSString, NSUUID, NSArray, NSDate;

@interface UARPAccessoryID : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_lastAddedDate;
    NSString *_countryCode;
    NSUUID *_uuid;
    unsigned long long _capability;
    unsigned long long _uarpVersion;
    NSArray *_partnerSerialNumbers;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *manufacturer;
@property (readonly) NSString *modelName;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *stagedFirmwareVersion;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *hwFusingType;
@property (readonly) NSString *hwRevision;
@property (readonly) NSString *friendlyName;
@property (readonly) unsigned long long uarpVersion;
@property (readonly) NSString *modelIdentifier;
@property (readonly) NSString *modelAnalytics;
@property char downloadOnCellularAllowed;
@property char autoDownloadAllowed;
@property (readonly) char suppressAutomaticDynamicAssets;
@property (readonly) char suppressInfoQueries;
@property long long transport;
@property (readonly) unsigned long long capability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)countryCode;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setUuid:(id)a0;
- (id)uuid;
- (void)setSerialNumber:(id)a0;
- (void)setModelName:(id)a0;
- (void)setModelNumber:(id)a0;
- (void)setFirmwareVersion:(id)a0;
- (void)setManufacturer:(id)a0;
- (void)setCountryCode:(id)a0;
- (void)setCapability:(unsigned long long)a0;
- (id)initWithoutUUID;
- (void)initCountryCode;
- (void)setUarpVersion:(unsigned long long)a0;
- (char)analyticsIsEqual:(id)a0;
- (const char *)assetAvailabilityUpdateNotification;
- (id)computeModelIdentifier;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3 productGroup:(id)a4 productNumber:(id)a5;
- (id)initWithModelNumber:(id)a0;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1;
- (id)partnerSerialNumbers;
- (void)setFriendlyName:(id)a0;
- (void)setHwFusingType:(id)a0;
- (void)setHwRevision:(id)a0;
- (void)setPartnerSerialNumbers:(id)a0;
- (void)setProductGroup:(id)a0;
- (void)setProductNumber:(id)a0;
- (void)setStagedFirmwareVersion:(id)a0;
- (void)setSuppressAutomaticDynamicAssets:(char)a0;
- (void)setSuppressInfoQueries:(char)a0;
- (char)shareAnalyticsEventsWithThirdParty;
- (const char *)supplementalAssetAvailabilityUpdateNotification;

@end
