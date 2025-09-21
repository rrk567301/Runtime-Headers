@class CKAsset;

@interface CKSyncEngineWillFetchAssetEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKAsset *asset;

- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;

@end
