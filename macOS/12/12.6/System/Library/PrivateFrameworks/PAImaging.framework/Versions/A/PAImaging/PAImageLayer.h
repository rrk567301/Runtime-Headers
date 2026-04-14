@class PAItemViewConfiguration, PFAsyncDispatchMulticaster, NSDictionary, PAImageDrawStatistics, PADisplay, NSObject, NSColor;
@protocol OS_dispatch_queue, PAImageLayerPerformanceMulticaster, PAImageDrawingDelegate;

@interface PAImageLayer : PAOpenGLLayer {
    NSObject<OS_dispatch_queue> *_queue;
    double _perfLayerUpdateTimer;
    double _perfLastLayerUpdateTimings[25];
    unsigned long long _perfNextLayerUpdateTimingIndex;
    PFAsyncDispatchMulticaster<PAImageLayerPerformanceMulticaster> *_multicaster;
    PAImageDrawStatistics *_lastStatistics;
    BOOL _wantsOverlay;
    PADisplay *_displayDevice;
}

@property (retain) PADisplay *displayDevice;
@property struct CGSize { double x0; double x1; } imageSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageBounds;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } imageTransform;
@property struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } layerImageTransform;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentTransform;
@property (retain) PAItemViewConfiguration *viewConfiguration;
@property long long viewOrientation;
@property (copy) NSDictionary *images;
@property (retain) id<PAImageDrawingDelegate> drawingDelegate;
@property (retain, nonatomic) NSColor *overlayColor;
@property (nonatomic) unsigned long long maximumDrawCount;

+ (BOOL)_canDrawConcurrently;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (BOOL)_hasImage;
- (id)actionForKey:(id)a0;
- (double)currentTime;
- (id)multicaster;
- (void)drawInOpenGLContext:(id)a0;
- (id)copyForAnimate;
- (void)_drawInOpenGLContext:(id)a0 display:(id)a1;
- (void)_clearBackground;
- (void)_drawImageWithContext:(id)a0 display:(id)a1;
- (id)_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(id)a1 transform:(id)a2 context:(id)a3;
- (BOOL)_debugShowFrameRate;
- (double)_instantLayerFPS;
- (void)_debugDrawDisplayFPS:(double)a0 context:(id)a1 display:(id)a2;
- (BOOL)_debugShowSharpness;
- (void)_debugDrawSharpness:(double)a0 context:(id)a1 display:(id)a2;
- (void)_layerDidUpdate:(id)a0;
- (id)copyForPreview;
- (void)_setupViewport;
- (id)lastDrawStatistics;
- (void)_debugDrawGaugeValue:(double)a0 label:(id)a1 color:(id)a2 slot:(unsigned long long)a3 context:(id)a4 display:(id)a5;
- (void)PALayerDebug_encodeToDictionary:(id)a0;
- (void)PALayerDebug_decodeFromDictionary:(id)a0;

@end
