@class NSMutableDictionary, MKMapView, VKOverlay, NSObject;
@protocol OS_dispatch_queue, MKOverlay;

@interface MKOverlayRenderer : NSObject {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingMapRect;
    VKOverlay *_renderer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKMapView *_mapView;
    double _contentScaleFactor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _runningAnimationsLock;
    NSMutableDictionary *_runningAnimations;
}

@property (nonatomic, getter=_extendedBlendMode, setter=_setExtendedBlendMode:) long long extendedBlendMode;
@property (readonly, nonatomic) id<MKOverlay> overlay;
@property double alpha;
@property (readonly) double contentScaleFactor;
@property (nonatomic) int blendMode;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (struct { double x0; double x1; })_originMapPoint;
- (void)_animateIfNecessaryForKey:(id)a0 withStepHandler:(id /* block */)a1;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_boundingMapRect;
- (char)_canPossiblyDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)_decodePropertiesWithCoder:(id)a0;
- (void)_encodePropertiesWithCoder:(id)a0;
- (void)_forEachMapRectForKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 withContext:(struct CGContext { } *)a1 performBlock:(id /* block */)a2;
- (id)_mapView;
- (char)_mayExtendOutsideBounds;
- (id)_mk_overlayLayer;
- (id)_renderer;
- (void)_setMapView:(id)a0;
- (void)_updateRenderColors;
- (char)areOverlayResourcesRequired:(id)a0;
- (char)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (id)customTileProviderForOverlay:(id)a0;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)initWithOverlay:(id)a0;
- (struct { double x0; double x1; })mapPointForPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)overlay:(id)a0 canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (char)overlay:(id)a0 canPossiblyDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 inContext:(struct CGContext { } *)a2;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 withData:(id)a2 inIOSurface:(struct __IOSurface { } *)a3;
- (char)overlayCanProvideCustomTileData:(id)a0;
- (char)overlayCanProvideRasterTileData:(id)a0;
- (char)overlayCanProvideVectorData:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForMapPoint:(struct { double x0; double x1; })a0;
- (id)rasterTileProviderForOverlay:(id)a0;
- (void)setContentScaleFactor:(double)a0;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)set_boundingMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)set_renderer:(id)a0;
- (char)shouldUseMetalTexture:(id)a0;
- (id)vectorDataForOverlay:(id)a0;

@end
