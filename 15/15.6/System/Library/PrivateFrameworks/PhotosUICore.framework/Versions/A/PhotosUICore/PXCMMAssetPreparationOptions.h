@interface PXCMMAssetPreparationOptions : NSObject

@property (nonatomic) char publishAsOriginal;
@property (nonatomic) char publishLivePhotoAsStill;
@property (nonatomic) char removeLocationData;

- (id)init;

@end
