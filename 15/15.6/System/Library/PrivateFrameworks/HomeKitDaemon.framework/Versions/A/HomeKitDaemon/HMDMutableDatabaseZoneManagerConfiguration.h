@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDMutableDatabaseZoneManagerConfiguration : HMDDatabaseZoneManagerConfiguration

@property (getter=isZoneOwner) char zoneOwner;
@property char shouldCreateZone;
@property (copy) NSSet *externalRecordTypesForSubscriptions;
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion;
@property (copy) NSSet *requiredSupportedFeatures;
@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration;

@end
