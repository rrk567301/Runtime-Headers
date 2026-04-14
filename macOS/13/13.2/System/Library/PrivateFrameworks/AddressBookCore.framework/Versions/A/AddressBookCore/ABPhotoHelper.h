@class ABCDLegacyFilesystemImageHelper;

@interface ABPhotoHelper : NSObject {
    ABCDLegacyFilesystemImageHelper *_cdImageHelper;
}

+ (id)helperWithImagesFolder:(id)a0 personIdentifier:(id)a1 emailAddresses:(id)a2;
+ (long long)imageTypeFromKind:(id)a0;

- (void)dealloc;
- (BOOL)hasCustomImage;
- (BOOL)hasImageData;
- (id)largeImagePath;
- (id)thumbnailImagePath;
- (id)initWithImagesFolder:(id)a0 personIdentifier:(id)a1 emailAddresses:(id)a2;
- (id)imageCropRectsOfKind:(id)a0;
- (id)imageCropRectTypesOfKind:(id)a0;
- (id)largeImageCropRectTypes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageCropRectOfType:(id)a0 imageKind:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largeImageCropRectOfType:(id)a0;
- (id)imageDataOfKind:(id)a0;
- (id)largeImageHashOfType:(id)a0;
- (id)imageOfKind:(id)a0;
- (void)removeLegacyImageDataOfKind:(id)a0;
- (BOOL)hasImageDataOfKind:(id)a0;
- (BOOL)hasCustomImageOfKind:(id)a0;

@end
