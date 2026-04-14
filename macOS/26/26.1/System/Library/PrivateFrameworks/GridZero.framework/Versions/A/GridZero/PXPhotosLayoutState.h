@class PXAssetReference, PXPhotosViewLens;
@protocol PXPhotosSectionBodyLayoutProvider, PXPhotosSectionHeaderLayoutProvider;

@interface PXPhotosLayoutState : NSObject <NSCopying>

@property (retain, nonatomic) PXPhotosViewLens *lens;
@property (retain, nonatomic) id<PXPhotosSectionBodyLayoutProvider> bodyProvider;
@property (retain, nonatomic) id<PXPhotosSectionHeaderLayoutProvider> headerProvider;
@property (retain, nonatomic) PXAssetReference *anchorAssetReference;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
