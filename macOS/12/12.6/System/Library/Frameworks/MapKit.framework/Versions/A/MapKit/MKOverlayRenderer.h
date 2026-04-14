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

@property (nonatomic, getter=_blendMode, setter=_setBlendMode:) int blendMode;
@property (nonatomic, getter=_extendedBlendMode, setter=_setExtendedBlendMode:) long long extendedBlendMode;
@property (readonly, nonatomic) id<MKOverlay> overlay;
@property double alpha;
@property (readonly) double contentScaleFactor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_renderer;
- (void)setNeedsDisplay;
- (id)_mapView;
- (id)initWithOverlay:(id)a0;
- (struct { double x0; double x1; })_originMapPoint;
- (BOOL)_hasNonDefaultBlendMode;
- (void)_updateRenderColors;
- (BOOL)overlayCanProvideVectorData:(id)a0;
- (id)vectorDataForOverlay:(id)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_boundingMapRect;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (void)_setMapView:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForMapPoint:(struct { double x0; double x1; })a0;
- (void)_animateIfNecessaryForKey:(id)a0 withStepHandler:(id /* block */)a1;
- (BOOL)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (BOOL)_mayExtendOutsideBounds;
- (void)_forEachMapRectForKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0 withContext:(struct CGContext { } *)a1 performBlock:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)set_renderer:(id)a0;
- (void)setContentScaleFactor:(double)a0;
- (id)_mk_overlayLayer;
- (struct { double x0; double x1; })mapPointForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)set_boundingMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)overlay:(id)a0 canPossiblyDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (BOOL)overlay:(id)a0 canDrawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
- (void)overlay:(id)a0 drawKey:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)overlayCanProvideRasterTileData:(id)a0;
- (id)rasterTileProviderForOverlay:(id)a0;

@end
