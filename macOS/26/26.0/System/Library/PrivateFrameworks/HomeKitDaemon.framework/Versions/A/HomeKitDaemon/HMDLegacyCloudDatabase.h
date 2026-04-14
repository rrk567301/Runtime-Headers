@interface HMDLegacyCloudDatabase : HMBCloudDatabase

+ (id)recordZoneIDForLegacyName:(id)a0;

- (id)createLegacyZone:(id)a0 controllerIdentity:(id)a1 delegate:(id)a2 error:(id *)a3;
- (id)initWithLocalDatabase:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)mirrorLegacyZone:(id)a0 controllerIdentity:(id)a1 delegate:(id)a2 error:(id *)a3;

@end
