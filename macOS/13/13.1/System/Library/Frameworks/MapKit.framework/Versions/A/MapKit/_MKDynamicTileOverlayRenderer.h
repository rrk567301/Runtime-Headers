@class VKCustomTileOverlayProviderData;

@interface _MKDynamicTileOverlayRenderer : MKOverlayRenderer {
    VKCustomTileOverlayProviderData *_customDataProvider;
}

@property (readonly, nonatomic, getter=isFallbackEnabled) BOOL fallbackEnabled;
@property (nonatomic) unsigned long long desiredDisplayRate;

- (void).cxx_destruct;
- (void)setAlpha:(double)a0;
- (id)initWithOverlay:(id)a0;
- (id)initWithTileOverlay:(id)a0;
- (BOOL)_mayExtendOutsideBounds;
- (void)drawTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 withTile:(id)a1 inIOSurface:(struct __IOSurface { } *)a2 withTimestamp:(double)a3;
- (BOOL)canDrawKey:(struct { long long x0; long long x1; long long x2; double x3; })a0 withTile:(id)a1;
- (void)didExitTile:(struct { long long x0; long long x1; long long x2; double x3; })a0;
- (void)onVisibleTiles:(const struct { long long x0; long long x1; long long x2; double x3; } *)a0 count:(unsigned long long)a1;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 withData:(id)a2 inIOSurface:(struct __IOSurface { } *)a3 withTimestamp:(double)a4;
- (BOOL)overlay:(id)a0 canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 withData:(id)a2;
- (void)overlay:(id)a0 didExitKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)overlay:(id)a0 onVisibleTiles:(id)a1;
- (BOOL)overlayCanProvideCustomTileData:(id)a0;
- (BOOL)areOverlayResourcesRequired:(id)a0;
- (id)customTileProviderForOverlay:(id)a0;

@end
