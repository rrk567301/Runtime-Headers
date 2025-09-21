@class VKCustomTileOverlayProviderData;

@interface _MKDynamicTileOverlayRenderer : MKOverlayRenderer {
    VKCustomTileOverlayProviderData *_customDataProvider;
}

@property (readonly, nonatomic, getter=isFallbackEnabled) char fallbackEnabled;
@property (readonly, nonatomic) char useMetalTexture;
@property (readonly, nonatomic) unsigned char anisotropy;
@property (nonatomic) unsigned long long desiredDisplayRate;
@property (nonatomic) char useNativeDisplayRate;
@property (nonatomic) char forceContinuousLayout;

- (void).cxx_destruct;
- (void)setAlpha:(double)a0;
- (struct { long long x0; long long x1; long long x2; double x3; })_keyToTilePath:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 withData:(id)a2 inTexture:(id)a3 withTimestamp:(double)a4 withTileScale:(float)a5;
- (char)_mayExtendOutsideBounds;
- (unsigned char)anisotropy:(id)a0;
- (char)areOverlayResourcesRequired:(id)a0;
- (char)canDrawKey:(struct { long long x0; long long x1; long long x2; double x3; })a0 withTile:(id)a1;
- (id)customTileProviderForOverlay:(id)a0;
- (void)didEnterTile:(struct { long long x0; long long x1; long long x2; double x3; })a0 withFallback:(char)a1;
- (void)didExitTile:(struct { long long x0; long long x1; long long x2; double x3; })a0;
- (void)drawTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 withTile:(id)a1 inIOSurface:(struct __IOSurface { } *)a2 withTimestamp:(double)a3;
- (void)drawTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 withTile:(id)a1 inIOSurface:(struct __IOSurface { } *)a2 withTimestamp:(double)a3 withTileScale:(float)a4;
- (void)drawTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 withTile:(id)a1 inTexture:(id)a2 withTimestamp:(double)a3 withTileScale:(float)a4;
- (unsigned long long)estimatedCostForTile:(id)a0;
- (id)initWithOverlay:(id)a0;
- (id)initWithTileOverlay:(id)a0;
- (void)onVisibleTiles:(const struct { long long x0; long long x1; long long x2; double x3; } *)a0 count:(unsigned long long)a1;
- (char)overlay:(id)a0 canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 withData:(id)a2;
- (void)overlay:(id)a0 didEnterKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 withFallback:(char)a2;
- (void)overlay:(id)a0 didExitKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 withData:(id)a2 inIOSurface:(struct __IOSurface { } *)a3 withTimestamp:(double)a4;
- (unsigned long long)overlay:(id)a0 estimatedCostForCustomTileData:(id)a1;
- (void)overlay:(id)a0 onVisibleTiles:(id)a1;
- (char)overlayCanProvideCustomTileData:(id)a0;
- (char)shouldUseMetalTexture:(id)a0;

@end
