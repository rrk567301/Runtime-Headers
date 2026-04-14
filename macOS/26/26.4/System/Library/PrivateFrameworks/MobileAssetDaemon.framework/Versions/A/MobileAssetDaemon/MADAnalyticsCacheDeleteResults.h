@interface MADAnalyticsCacheDeleteResults : NSObject

@property (nonatomic) long long reclaimV2AssetSpace;
@property (nonatomic) long long reclaimV2AssetCount;
@property (nonatomic) long long reclaimUnlockedUnreferencedAutoAssetSpace;
@property (nonatomic) long long reclaimUnlockedUnreferencedAutoAssetCount;
@property (nonatomic) long long reclaimUnlockedReferencedAutoAssetSpace;
@property (nonatomic) long long reclaimUnlockedReferencedAutoAssetCount;
@property (nonatomic) long long reclaimLockedOverridableAutoAssetSpace;
@property (nonatomic) long long reclaimLockedOverridableAutoAssetCount;
@property (nonatomic) long long reclaimLockedNeverRemoveAutoAssetSpace;
@property (nonatomic) long long reclaimLockedNeverRemoveAutoAssetCount;
@property (nonatomic) long long reclaimStagedAutoAssetSpace;
@property (nonatomic) long long reclaimStagedAutoAssetCount;
@property (nonatomic) long long reclaimMetadataBlockedSpace;
@property (nonatomic) long long reclaimMetadataBlockedCount;

+ (id)copyWith:(id)a0;

- (id)copy;
- (id)init;
- (id)summary;
- (id)description;
- (id)initWithReclaimV2AssetSpace:(long long)a0 reclaimV2AssetCount:(long long)a1 reclaimUnlockedUnreferencedAutoAssetSpace:(long long)a2 reclaimUnlockedUnreferencedAutoAssetCount:(long long)a3 reclaimUnlockedReferencedAutoAssetSpace:(long long)a4 reclaimUnlockedReferencedAutoAssetCount:(long long)a5 reclaimLockedOverridableAutoAssetSpace:(long long)a6 reclaimLockedOverridableAutoAssetCount:(long long)a7 reclaimLockedNeverRemoveAutoAssetSpace:(long long)a8 reclaimLockedNeverRemoveAutoAssetCount:(long long)a9 reclaimStagedAutoAssetSpace:(long long)a10 reclaimStagedAutoAssetCount:(long long)a11 reclaimMetadataBlockedSpace:(long long)a12 reclaimMetadataBlockedCount:(long long)a13;

@end
