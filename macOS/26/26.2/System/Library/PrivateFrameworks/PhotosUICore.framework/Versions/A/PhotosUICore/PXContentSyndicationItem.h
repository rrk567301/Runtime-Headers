@class PXAssetCollectionActionManager;
@protocol PXDisplayAssetCollection;

@interface PXContentSyndicationItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;

@end
