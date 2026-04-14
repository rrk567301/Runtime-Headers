@class CKAsset;

@interface CKSyncEngineFetchedAssetEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKAsset *asset;

- (id)initWithAsset:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (void).cxx_destruct;

@end
