@class NSString, NSDate;

@interface PKCloudStoreZoneShareLock : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *originDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *originDeviceName;

+ (void)_deleteDeviceDataFromCloudStoreRecord:(id)a0;
+ (void)deleteFromCloudStoreRecord:(id)a0 codingType:(unsigned long long)a1;
+ (id)recordNameForZoneName:(id)a0;
+ (id)recordNamePrefix;
+ (id)zoneNameFromRecordName:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (void)_encodeDeviceDataForCloudStoreCoder:(id)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)initWithZoneName:(id)a0 creationDate:(id)a1 originDeviceIdentifier:(id)a2 originDeviceName:(id)a3;
- (char)isEqualToCloudStoreZoneShareLock:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
