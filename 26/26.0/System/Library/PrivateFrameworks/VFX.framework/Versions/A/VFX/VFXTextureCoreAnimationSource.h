@class CALayer;

@interface VFXTextureCoreAnimationSource : VFXTextureOffscreenRenderingSource {
    double _lastUpdate;
    double _nextUpdateDate;
}

@property (retain, nonatomic) CALayer *layer;

- (void)dealloc;
- (double)__updateTextureWithLayer:(id)a0 texture:(id)a1 engineContext:(struct __CFXEngineContext { } *)a2 sampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a3;
- (void)_resizeLayer:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1 updateLayer:(BOOL)a2 updateTransform:(BOOL)a3 caRenderer:(id)a4;
- (float)clearValue;
- (double)layerContentsScaleFactor;
- (struct CGSize { double x0; double x1; })layerSizeInPixels;
- (id)layerToFocusForRenderedLayer:(id)a0;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)renderWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (BOOL)requiresMainThreadUpdates;
- (BOOL)supportsMetal;
- (double)__renderLayerUsingMetal:(SEL)a0 withCARenderer:(id)a1 engineContext:(id)a2 viewport:(struct __CFXEngineContext { } *)a3 atTime:(double)a4;
- (BOOL)usesBoundsInPixels;

@end
