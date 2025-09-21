@class RBDevice, NSString, RBLayerGroup, NSDictionary, RBImageQueueLayer, RBSurfaceContentsLayer, CAContext;

@interface RBLayer : CALayer <_RBSharedSurfaceOwner, RBDrawableStatistics> {
    struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _lock;
    struct objc_ptr<RBDevice *> { RBDevice *_p; } _device;
    struct refcounted_ptr<RB::Drawable> { struct Drawable *_p; } _drawable;
    struct objc_ptr<RBImageQueueLayer *> { RBImageQueueLayer *_p; } _queueLayer;
    struct objc_ptr<RBSurfaceContentsLayer *> { RBSurfaceContentsLayer *_p; } _contentsLayer;
    void *_pending_async_surface;
    struct objc_ptr<RBLayerGroup *> { RBLayerGroup *_p; } _async_group;
    struct SharedSubsurface { struct SharedSurface *_surface; void /* unknown type, empty encoding */ _origin; void /* unknown type, empty encoding */ _size; struct objc_ptr<CAContext *> { CAContext *_p; } _context; struct CommitMarker { struct refcounted_ptr<RB::CommitMarker::Observer> { struct Observer *_p; } _observer; } _commit_marker; unsigned int _serial; BOOL _has_border; } _subsurface;
    struct refcounted_ptr<RB::SharedSurfaceClient> { struct SharedSurfaceClient *_p; } _surface_client;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _deallocating;
    float _dpy_headroom;
    float _content_headroom;
    unsigned char _tracking_dpy_headroom : 1;
    unsigned char _visible : 1;
    unsigned char _needs_display_on_visible : 1;
    unsigned char _pending_visible_callback : 1;
    unsigned char _failed_to_render : 1;
    unsigned char _in_render_in_context : 1;
    unsigned char _pending_subsurface : 1;
}

@property (retain, nonatomic) RBDevice *device;
@property (nonatomic) BOOL rendersAsynchronously;
@property (retain, nonatomic) RBLayerGroup *asynchronousGroup;
@property (nonatomic) int colorMode;
@property (nonatomic) int HDRMode;
@property (nonatomic) float displayHeadroomLimit;
@property (nonatomic) BOOL promotesFramebuffer;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) BOOL clearsBackground;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;
@property (nonatomic) long long maxDrawableCount;
@property (nonatomic) BOOL allowsPackedDrawable;
@property (nonatomic) BOOL allowsBottomLeftOrigin;
@property (readonly, nonatomic, getter=isDrawableAvailable) BOOL drawableAvailable;
@property (nonatomic) BOOL needsSynchronousUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *statistics;
@property (copy, nonatomic) id /* block */ statisticsHandler;

+ (id)defaultValueForKey:(id)a0;

- (void)renderInContext:(struct CGContext { } *)a0;
- (void)setContents:(id)a0;
- (id)actionForKey:(id)a0;
- (void)waitUntilAsyncRenderingCompleted;
- (void)dealloc;
- (void)displayIfNeeded;
- (void)layoutSublayers;
- (void)_moveSubsurface:(void *)a0;
- (id)initWithLayer:(id)a0;
- (void)copyImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 completionQueue:(id)a2 handler:(id /* block */)a3;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)init;
- (BOOL)displayWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 callback:(id /* block */)a1;
- (void)drawInDisplayList:(id)a0;
- (void)display;
- (BOOL)displayHeadroomMayHaveChanged;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)resetStatistics:(unsigned long long)a0 alpha:(double)a1;
- (BOOL)_willMoveSubsurface:(unsigned int)a0;
- (void)_renderForegroundInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
