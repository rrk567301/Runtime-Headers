@class NSRecursiveLock, NSArray, KHFrameAttribute, NSValue, NSLock, KHImage;

@interface KHPhotoFrameRenderer : KHFrameRenderer {
    struct CGSize { double width; double height; } _imageSize;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _pan;
    double _zoom;
    float _imageRotation;
    KHFrameAttribute *_imageRotationAttr;
    struct CGSize { double width; double height; } _lastImageRenderSize;
    KHImage *_cachedImageRep;
    NSRecursiveLock *_cachedImageLock;
    NSLock *_renderLock;
    KHImage *_placeholderImageRep;
    NSRecursiveLock *_placeholderImageLock;
    unsigned long long _placeholderRenderingIntent;
    long long _backfillRequestId;
    KHImage *_cachedFilteredImageRep;
    NSValue *_cachedFilteredImageSourceHash;
    NSArray *_cachedFilteredImagePhotoEffects;
    char _liveZooming;
    char _photoPanNeedsValidation;
}

+ (char)_imageSize:(struct CGSize { double x0; double x1; })a0 equalToImageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)_uniqueHashForImage:(id)a0;
+ (double)maxFillFrameZoomForImageSize:(struct CGSize { double x0; double x1; })a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)dealloc;
- (void)clearCache;
- (double)zoom;
- (float)imageRotation;
- (struct { double x0; double x1; char x2; char x3; })pan;
- (void)setLiveZooming:(char)a0;
- (id)_applySmartLightToImage:(id)a0 context:(struct CGContext { } *)a1;
- (void)_cacheFilteredImage:(id)a0 sourceHash:(id)a1 photoEffects:(id)a2;
- (void)_cacheFilteredImage:(id)a0 sourceImage:(id)a1 photoEffects:(id)a2;
- (void)_cacheImage:(id)a0 forRenderSize:(struct CGSize { double x0; double x1; })a1;
- (id)_cachedFilteredImageForSourceImage:(id)a0 photoEffects:(id)a1 usingContext:(struct CGContext { } *)a2;
- (id)_cachedImage;
- (void)_clearAllCachedImages;
- (void)_clearCachedFilteredImage;
- (void)_clearCachedImage;
- (void)_clearPlaceholderImage;
- (id)_filteredImage:(id)a0 context:(struct CGContext { } *)a1;
- (id)_imageForSize:(struct CGSize { double x0; double x1; })a0 renderingIntent:(unsigned long long)a1 context:(struct CGContext { } *)a2 allowUpscale:(char)a3;
- (void)_renderAutoCompositionDebugInfoIntoCntext:(struct CGContext { } *)a0 forScaledImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct { double x0; double x1; char x2; char x3; })boundedPhotoPan:(struct { double x0; double x1; char x2; char x3; })a0;
- (struct { double x0; double x1; char x2; char x3; })boundedPhotoPan:(struct { double x0; double x1; char x2; char x3; })a0 usingPhoto:(id)a1;
- (struct CGPath { } *)clippingPathForScale:(double)a0;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (id)initForFrame:(id)a0;
- (char)liveZooming;
- (void)loadAttributes;
- (double)maxFillFrameZoom;
- (id)placeholderImageForRenderingIntent:(unsigned long long)a0 preferredIdentifier:(id)a1;
- (void)setImageRotation:(float)a0 momentary:(char)a1;
- (void)setPan:(struct { double x0; double x1; char x2; char x3; })a0 momentary:(char)a1;
- (void)setZoom:(double)a0 momentary:(char)a1;

@end
