@class RBDevice, NSString, NSDictionary, RBSurfaceContentsLayer, RBImageQueueLayer, CAContext;

@interface RBLayer : CALayer <_RBDrawableDelegate, _RBSharedSurfaceOwner, RBDrawableStatistics> {
    struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _lock;
    struct objc_ptr<RBDevice *> { RBDevice *_p; } _device;
    struct refcounted_ptr<RB::Drawable> { struct Drawable *_p; } _drawable;
    struct objc_ptr<RBImageQueueLayer *> { RBImageQueueLayer *_p; } _queueLayer;
    struct objc_ptr<RBSurfaceContentsLayer *> { RBSurfaceContentsLayer *_p; } _contentsLayer;
    void *_pending_async_surface;
    struct SharedSubsurface { struct SharedSurface *_surface; void /* unknown type, empty encoding */ _origin; void /* unknown type, empty encoding */ _size; struct SharedSurfaceTimestamp { struct objc_ptr<CAContext *> { CAContext *_p; } _context; double _deadline; unsigned int _seed; } _timestamp; unsigned int _serial; BOOL _has_border; } _subsurface;
    struct refcounted_ptr<RB::SharedSurfaceClient> { struct SharedSurfaceClient *_p; } _surface_client;
    unsigned long long _statistics_mask;
    double _statistics_alpha;
    struct objc_ptr<void (^)(id<RBDrawableStatistics>)> { id /* block */ _p; } _statistics_handler;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _deallocating;
    BOOL _visible;
    BOOL _needs_display_on_visible;
    BOOL _pending_visible_callback;
    BOOL _failed_to_render;
    BOOL _in_render_in_context;
}

@property (retain, nonatomic) RBDevice *device;
@property (nonatomic) char rendersAsynchronously;
@property (nonatomic) int colorMode;
@property (nonatomic) char promotesFramebuffer;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) char clearsBackground;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;
@property (nonatomic) long long maxDrawableCount;
@property (nonatomic) char allowsPackedDrawable;
@property (nonatomic) char allowsBottomLeftOrigin;
@property (readonly, nonatomic, getter=isDrawableAvailable) char drawableAvailable;
@property (nonatomic) char needsSynchronousUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *statistics;
@property (copy, nonatomic) id /* block */ statisticsHandler;

+ (id)defaultValueForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)display;
- (void)layoutSublayers;
- (void)displayIfNeeded;
- (void)_renderForegroundInContext:(struct CGContext { } *)a0;
- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)layerDidBecomeVisible:(char)a0;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContents:(id)a0;
- (void)_RBDrawableStatisticsDidChange;
- (void)_moveSubsurface:(void *)a0;
- (BOOL)_willMoveSubsurface:(unsigned int)a0;
- (void)copyImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 completionQueue:(id)a2 handler:(id /* block */)a3;
- (char)displayWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 callback:(id /* block */)a1;
- (void)drawInDisplayList:(id)a0;
- (void)resetStatistics:(unsigned long long)a0 alpha:(double)a1;
- (void)waitUntilAsyncRenderingCompleted;

@end
