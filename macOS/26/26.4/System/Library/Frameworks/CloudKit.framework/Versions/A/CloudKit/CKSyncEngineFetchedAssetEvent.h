@class CKAsset;

@interface CKSyncEngineFetchedAssetEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKAsset *asset;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (long long)type;

@end
