@class NSNumber;

@interface SUCorePolicyUpdateBrain : SUCorePolicy

@property (retain, nonatomic) NSNumber *compatibilityVersion;

+ (BOOL)supportsSecureCoding;

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)selectSoftwareUpdatePrimaryAsset:(id *)a0 secondaryAsset:(id *)a1 fromAssetQuery:(id)a2;
- (id)initWithSoftwareUpdateAssetType:(id)a0 documentationAssetType:(id)a1 usingPolicies:(long long)a2 usingExtensions:(id)a3;
- (id)constructSoftwareUpdateMAAssetQuery;
- (id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)a0;
- (id)initWithSoftwareUpdateAssetType:(id)a0 documentationAssetType:(id)a1 usingExtensions:(id)a2;

@end
