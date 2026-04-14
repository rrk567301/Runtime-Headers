@class PXAssetCollectionActionManager;
@protocol PXDisplayAssetCollection;

@interface PXContentSyndicationItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetCollection:(id)a0;

@end
