@class NSNumber, NSString;

@interface SUCorePolicyMacUpdateBrain : SUCorePolicy

@property (retain, nonatomic) NSNumber *compatibilityVersion;
@property (retain, nonatomic) NSString *majorTargetBuildVersion;
@property (retain, nonatomic) NSString *minorTargetBuildVersion;

+ (BOOL)supportsSecureCoding;

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetType:(id)a0 majorTargetBuild:(id)a1 minorTargetBuild:(id)a2 usingPolicies:(long long)a3 usingExtensions:(id)a4;
- (id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)a0 assetAudience:(id)a1;
- (id)constructSoftwareUpdateMAAssetQuery;
- (id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)a0;
- (void)selectSoftwareUpdateMajorPrimaryAsset:(id *)a0 majorSecondaryAsset:(id *)a1 minorPrimaryAsset:(id *)a2 minorSecondaryAsset:(id *)a3 fromAssetQuery:(id)a4;

@end
