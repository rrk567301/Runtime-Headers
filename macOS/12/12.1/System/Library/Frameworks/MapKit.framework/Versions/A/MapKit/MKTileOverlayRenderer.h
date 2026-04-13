@class NSObject, VKRasterTileOverlayProviderData, NSImage, NSNumber, GEOTileKeyList;
@protocol OS_dispatch_queue;

@interface MKTileOverlayRenderer : MKOverlayRenderer {
    GEOTileKeyList *_pendingRequests;
    NSObject<OS_dispatch_queue> *_pendingRequestsLock;
    BOOL _externalSubclassOverridesDrawingMethods;
    VKRasterTileOverlayProviderData *_rasterProvider;
    unsigned long long _loopsRemaining;
}

@property (retain, nonatomic) NSNumber *visibleKeyframeOverride;
@property (readonly, nonatomic, getter=_visibleKeyframeIndex) unsigned long long visibleKeyframeIndex;
@property (retain, nonatomic) NSImage *colorMap;

+ (BOOL)_externalSubclassOverridesDrawingMethods;
+ (id)keyPathsForValuesAffectingVisibleKeyframeIndex;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)reloadData;
- (void)setAlpha:(double)a0;
- (id)initWithOverlay:(id)a0;
- (void)_updateRenderColors;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (BOOL)_mayExtendOutsideBounds;
- (BOOL)overlayCanProvideRasterTileData:(id)a0;
- (id)rasterTileProviderForOverlay:(id)a0;
- (void)_updateColorMap;
- (id)initWithTileOverlay:(id)a0;
- (void)_playWithLoopCount:(unsigned long long)a0;

@end
