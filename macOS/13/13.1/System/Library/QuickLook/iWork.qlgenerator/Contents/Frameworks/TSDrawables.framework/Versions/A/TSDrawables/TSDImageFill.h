@class NSObject, NSSet, NSArray, NSString, TSPData, TSUColor, TSDImageFillCachedImage;
@protocol OS_dispatch_queue;

@interface TSDImageFill : TSDFill <TSDMixing, TSSPresetSource, TSPStyleObjectDataContainer, NSCopying, NSMutableCopying> {
    TSDImageFillCachedImage *mStandardSizeTintedImage;
    TSDImageFillCachedImage *mHalfSizeTintedImage;
    TSDImageFillCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    TSUColor *mCachedReferenceColor;
    BOOL mShouldSkipFurtherAttemptsToCalculateReferenceColor;
    BOOL mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    struct CGImage { } *mTempRenderCopy;
    struct CGImage { } *mSourceOfTempRenderCopy;
    long long mTempRenderCount;
}

@property (class, readonly, nonatomic) NSSet *presetKinds;

@property (nonatomic) unsigned long long technique;
@property (retain, nonatomic, setter=p_setImageData:) TSPData *p_imageData;
@property (nonatomic, setter=p_setTechnique:) unsigned long long p_technique;
@property (retain, nonatomic, setter=p_setTintColor:) TSUColor *p_tintColor;
@property (nonatomic, setter=p_setFillSize:) struct CGSize { double x0; double x1; } p_fillSize;
@property (readonly, retain, nonatomic) TSPData *imageData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fillSize;
@property (readonly, copy, nonatomic) TSUColor *tintColor;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL canCopyData;
@property (readonly, nonatomic) TSUColor *storedReferenceColor;
@property (readonly, nonatomic) NSArray *referencedDataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (long long)fillType;
- (id)copyWithNewImageData:(id)a0;
- (void)paintPath:(const struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)referenceColor;
- (id)presetKind;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)paintPath:(const struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (BOOL)drawsInOneStep;
- (id)p_validatedImageProvider;
- (void)p_setFillSizeForApplicationData;
- (id)imageDataAtFillSize;
- (BOOL)p_shouldApplyTintedImage;
- (struct CGSize { double x0; double x1; })renderedImageSizeForObjectSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })p_sizeOfFillImageForDestRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)p_standardSizeCachedImage;
- (id)p_halfSizeCachedImage;
- (id)p_quarterSizeCachedImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_drawnRectForImageSize:(struct CGSize { double x0; double x1; })a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
- (void)p_drawBitmapImage:(struct CGImage { } *)a0 withOrientation:(int)a1 inContext:(struct CGContext { } *)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)p_drawPDFWithProvider:(id)a0 inContext:(struct CGContext { } *)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)i_commonInit;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithImageData:(id)a0 technique:(unsigned long long)a1 tintColor:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
- (id)initWithImageData:(id)a0 technique:(unsigned long long)a1 tintColor:(id)a2 size:(struct CGSize { double x0; double x1; })a3 referenceColor:(id)a4;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)drawFillInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 clippingToPath:(const struct CGPath { } *)a2;
- (void)p_convertImageDataToMacCompatibleOnUnarchiveOrDownload;
- (id)referenceColorForFontArchiving;
- (id)initForUnarchiving;
- (void)i_commonSetup;
- (void)p_clearTintedImageCache;
- (void)flushImageCache;
- (struct CGSize { double x0; double x1; })p_imageDataNaturalSize;
- (void)i_setStoredReferenceColor:(id)a0;
- (id)p_calculateReferenceColor;
- (void)i_updateStoredReferenceColorIfNeeded;
- (void)p_updateCachedReferenceColorIfNeeded;
- (BOOL)canApplyToRenderable;
- (BOOL)canApplyToRenderableByAddingSubrenderables;
- (id)p_cachedImageForSize:(struct CGSize { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1 orContentsScaleProvider:(id)a2;
- (void)p_paintPath:(const struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 rectForFill:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)p_tintedImageWithScale:(double)a0;

@end
