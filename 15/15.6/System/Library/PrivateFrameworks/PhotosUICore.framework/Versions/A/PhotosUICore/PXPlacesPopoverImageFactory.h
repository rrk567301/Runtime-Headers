@class NSCache, NSColor;

@interface PXPlacesPopoverImageFactory : NSObject

@property (class, readonly) PXPlacesPopoverImageFactory *sharedInstance;

@property (retain, nonatomic) NSCache *cachedBackgroundImages;
@property (retain, nonatomic) NSColor *defaultBackgroundColor;

+ (struct CGSize { double x0; double x1; })backgroundImageSizeForType:(long long)a0 usingTraitCollection:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)imageNamed:(id)a0;
- (id)_fetchAndCacheBackgroundImageWithName:(id)a0;
- (id)_placesKitFrameworkBundle;
- (id)_thumbnailShadowForType:(long long)a0 usingTraitCollection:(id)a1;
- (id)backgroundImageNameForType:(long long)a0 usingTraitCollection:(id)a1;
- (struct CGSize { double x0; double x1; })backgroundImageSizeForType:(long long)a0 usingTraitCollection:(id)a1;
- (struct CGGradient { } *)createLegibilityGradient;
- (id)createPopoverImageForGeotaggable:(id)a0 withImage:(struct CGImage { } *)a1 imageType:(long long)a2 imageOptions:(unsigned long long)a3 usingTraitCollection:(id)a4;
- (struct CGImage { } *)newImage:(struct CGImage { } *)a0 croppedToAspectRatio:(struct CGSize { double x0; double x1; })a1;
- (id)placeholderImageForImageType:(long long)a0 usingTraitCollection:(id)a1;
- (struct CGSize { double x0; double x1; })thumbnailImageSizeForImageType:(long long)a0 usingTraitCollection:(id)a1 includeScale:(char)a2;
- (double)thumbnailTopMarginForImageType:(long long)a0 usingTraitCollection:(id)a1;

@end
