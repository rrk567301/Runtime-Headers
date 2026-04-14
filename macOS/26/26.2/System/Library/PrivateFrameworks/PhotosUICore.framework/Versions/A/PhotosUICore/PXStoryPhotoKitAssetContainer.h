@class NSString, PHObject, PHPhotoLibrary, PHAssetCollection;

@interface PXStoryPhotoKitAssetContainer : NSObject <NSCopying>

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHObject *originalContainer;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHObject *container;
@property (readonly, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithAssetCollection:(id)a0 originalContainer:(id)a1;

@end
