@class NSString, NSDate;

@interface PKCloudStoreZoneShareLock : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *originDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *originDeviceName;

+ (id)recordNamePrefix;
+ (void)_deleteDeviceDataFromCloudStoreRecord:(id)a0;
+ (void)deleteFromCloudStoreRecord:(id)a0 codingType:(unsigned long long)a1;
+ (id)recordNameForZoneName:(id)a0;
+ (id)zoneNameFromRecordName:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (id)initWithCloudStoreCoder:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)_encodeDeviceDataForCloudStoreCoder:(id)a0;
- (BOOL)isEqualToCloudStoreZoneShareLock:(id)a0;
- (id)initWithZoneName:(id)a0 creationDate:(id)a1 originDeviceIdentifier:(id)a2 originDeviceName:(id)a3;

@end
