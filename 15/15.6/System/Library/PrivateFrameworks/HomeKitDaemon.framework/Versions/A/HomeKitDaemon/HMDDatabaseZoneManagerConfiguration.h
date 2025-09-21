@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDDatabaseZoneManagerConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (getter=isZoneOwner) char zoneOwner;
@property char shouldCreateZone;
@property (copy) NSSet *externalRecordTypesForSubscriptions;
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion;
@property (copy) NSSet *requiredSupportedFeatures;
@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;

@end
