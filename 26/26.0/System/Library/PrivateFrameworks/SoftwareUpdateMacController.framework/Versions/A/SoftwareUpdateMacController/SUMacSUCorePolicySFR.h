@interface SUMacSUCorePolicySFR : SUCorePolicy

- (id)summary;
- (id)description;
- (void)selectSoftwareUpdatePrimaryAsset:(id *)a0 secondaryAsset:(id *)a1 fromAssetQuery:(id)a2;
- (id)initWithSoftwareUpdateAssetType:(id)a0 documentationAssetType:(id)a1 usingPolicies:(long long)a2 usingExtensions:(id)a3;

@end
