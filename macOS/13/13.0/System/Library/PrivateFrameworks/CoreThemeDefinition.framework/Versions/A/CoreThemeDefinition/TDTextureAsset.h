@class NSSet;

@interface TDTextureAsset : TDAsset

@property (retain, nonatomic) NSSet *renditions;
@property (nonatomic) int exifOrientation;

- (struct CGSize { double x0; double x1; })sourceImageSizeWithDocument:(id)a0;
- (id)sourceImageWithDocument:(id)a0;
- (void)_logError:(id)a0;

@end
