@class CKAsset, NSError;

@interface CKSyncEngineDidFetchAssetEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) CKAsset *asset;
@property (readonly, copy, nonatomic) NSError *error;

- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (id)initWithAsset:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
