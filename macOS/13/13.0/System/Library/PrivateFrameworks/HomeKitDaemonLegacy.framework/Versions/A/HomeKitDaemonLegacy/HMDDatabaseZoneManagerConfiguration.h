@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDDatabaseZoneManagerConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (getter=isZoneOwner) BOOL zoneOwner;
@property BOOL shouldCreateZone;
@property (copy) NSSet *externalRecordTypesForSubscriptions;
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion;
@property (copy) NSSet *requiredSupportedFeatures;
@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;

@end
