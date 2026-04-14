@interface CUIPSDLayerRef : CUIPSDLayerBaseRef

- (void)dealloc;
- (id)image;
- (id)gradient;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (struct CGImage { } *)createCGImage;
- (id)imageIsZeroSizeImage:(BOOL *)a0;
- (id)imageFromSlice:(unsigned int)a0;
- (id)imageFromSlice:(unsigned int)a0 isEmptyImage:(BOOL *)a1;
- (id)patternFromSlice:(unsigned int)a0;
- (id)patternFromSlice:(unsigned int)a0 isZeroSizeImage:(BOOL *)a1;
- (id)maskFromSlice:(unsigned int)a0;
- (id)fillSample;
- (id)layerEffects;
- (id)colorFill;

@end
