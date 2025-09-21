@class NSString, _CUIPSDSublayerInfo;

@interface CUIPSDImageRef : NSObject {
    char _parsedForLayers;
    _CUIPSDSublayerInfo *_rootLayers;
}

@property (nonatomic) int file;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) void *psd;

+ (char)isValidPSDResourceAtPath:(id)a0;
+ (char)isValidPSDResourceAtPath:(id)a0 withImageInfo:(struct _PSDImageInfo { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; } *)a1;
+ (char)isValidPSDResourceAtPath:(id)a0 withLayerCount:(unsigned int *)a1;
+ (char)isValidPSDResourceAtPath:(id)a0 withLayerCount:(unsigned int *)a1 validateLayers:(char)a2;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithPath:(id)a0;
- (id)_innerGlowFromLayerEffectsInfo:(void *)a0;
- (id)_outerGlowFromLayerEffectsInfo:(void *)a0;
- (void *)_psdLayerRecordAtAbsoluteIndex:(unsigned int)a0;
- (id)imageFromSlice:(unsigned int)a0 atAbsoluteLayer:(unsigned int)a1;
- (id)layerEnumerator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForSlice:(unsigned int)a0;
- (void *)psdFile;
- (unsigned int)_absoluteIndexOfRootLayer:(unsigned int)a0;
- (id)_bevelEmbossFromLayerEffectsInfo:(void *)a0;
- (int)_blendModeAtAbsluteIndex:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsAtAbsoluteIndex:(unsigned int)a0;
- (id)_colorOverlayFromLayerEffectsInfo:(void *)a0;
- (struct CGImage { } *)_copyCGImageAtAbsoluteIndex:(unsigned int)a0;
- (id)_copySublayerInfoAtAbsoluteIndex:(unsigned int)a0 atRoot:(char)a1;
- (id)_createMaskFromSlice:(unsigned int)a0 atAbsoluteIndex:(unsigned int)a1;
- (id)_dropShadowFromLayerEffectsInfo:(void *)a0;
- (double)_fillOpacityAtAbsoluteIndex:(unsigned int)a0;
- (id)_fillSampleAtAbsoluteIndex:(unsigned int)a0;
- (id)_gradientAtAbsoluteIndex:(unsigned int)a0;
- (id)_gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned int)a0;
- (id)_imageAtAbsoluteIndex:(unsigned int)a0 isZeroSizeImage:(char *)a1;
- (id)_imageFromSlice:(unsigned int)a0 atAbsoluteIndex:(unsigned int)a1 isEmptyImage:(char *)a2;
- (id)_innerShadowFromLayerEffectsInfo:(void *)a0;
- (id)_layerEffectsAtAbsoluteIndex:(unsigned int)a0;
- (int)_layerIndexFromLayerNames:(id)a0 indexRangeBegin:(int)a1 indexRangeEnd:(int)a2 isTopLevel:(char)a3;
- (id)_layerInfo;
- (id)_layerRefAtAbsoluteIndex:(unsigned int)a0;
- (void)_logInvalidAbsoluteIndex:(unsigned int)a0 psd:(void *)a1;
- (id)_nameAtAbsoluteIndex:(unsigned int)a0;
- (id)_namesOfSublayers:(id)a0;
- (double)_opacityAtAbsoluteIndex:(unsigned int)a0;
- (id)_patternFromSlice:(unsigned int)a0 atAbsoluteIndex:(unsigned int)a1 isZeroSizeImage:(char *)a2;
- (void *)_psdFileWithLayers:(char)a0;
- (char)_treatDividerAsLayer;
- (char)_visibilityAtAbsoluteIndex:(unsigned int)a0;
- (int)absoluteLayerIndexFromLayerNames:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsAtLayer:(unsigned int)a0;
- (int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned int)a0;
- (id)colorFromDocumentColor:(double *)a0;
- (id)compositeImage;
- (struct CGColorSpace { } *)copyColorSpace;
- (struct CGImage { } *)createCGImageAtLayer:(unsigned int)a0;
- (struct CGImage { } *)createCompositeCGImage;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;
- (id)fillSampleAtLayer:(unsigned int)a0;
- (id)gradientAtLayer:(unsigned int)a0;
- (id)imageAtLayer:(unsigned int)a0;
- (id)imageAtLayer:(unsigned int)a0 isZeroSizeImage:(char *)a1;
- (id)imageFromRef:(struct CGImage { } *)a0;
- (id)imageFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1;
- (id)imageFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1 isEmptyImage:(char *)a2;
- (struct _PSDImageInfo { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; })imageInfo;
- (id)layerNames;
- (id)layerRefAtIndex:(unsigned int)a0;
- (char)loadPSDFileWithLayers:(char)a0;
- (id)maskFromCompositeAlphaChannel:(long long)a0;
- (id)maskFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1;
- (id)metadataString;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })metricsInAlphaChannel:(long long)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })metricsInMask:(id)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned int)numberOfChannels;
- (unsigned int)numberOfLayers;
- (unsigned int)numberOfSlices;
- (char)openImageFile;
- (id)patternFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1;
- (id)patternFromSlice:(unsigned int)a0 atLayer:(unsigned int)a1 isZeroSizeImage:(char *)a2;
- (void *)psdFileForComposite;
- (char)visibilityAtLayer:(unsigned int)a0;

@end
