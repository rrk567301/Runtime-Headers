@interface VideoAssetInfo : NSObject

@property (nonatomic) unsigned long long assetID;
@property (nonatomic) struct ArcWeakPtr<re::internal::AssetManagerAliveToken> { void *m_weak; } weakAssetManager;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAssetID:(unsigned long long)a0 weakAssetManager:(struct ArcWeakPtr<re::internal::AssetManagerAliveToken> { void *x0; })a1;

@end
