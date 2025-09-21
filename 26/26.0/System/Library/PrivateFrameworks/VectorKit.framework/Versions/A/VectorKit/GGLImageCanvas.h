@class NSString;
@protocol GGLRenderQueueSource;

@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    struct shared_ptr<ggl::Device> { struct Device *__ptr_; struct __shared_weak_count *__cntrl_; } _device;
    BOOL _canMakeImage;
    BOOL _recreateRenderTarget;
    struct unique_ptr<ggl::IOSurfaceTexture, std::default_delete<ggl::IOSurfaceTexture>> { struct IOSurfaceTexture *__ptr_; } _flippedSurfaceTexture;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__ptr_; } _flippedRenderTarget;
    struct unique_ptr<md::YFlipPass, std::default_delete<md::YFlipPass>> { struct YFlipPass *__ptr_; } _yFlipPass;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _sRGBFormat;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _resolvedRenderTargetFormat;
    struct unique_ptr<ggl::Renderer, std::default_delete<ggl::Renderer>> { struct Renderer *__ptr_; } _renderer;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__ptr_; } _sRGBRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _sRGBColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> { struct RenderBuffer *__ptr_; } _depthStencilBuffer;
    struct array<std::shared_ptr<ggl::RenderBuffer>, 3UL> { struct shared_ptr<ggl::RenderBuffer> { struct RenderBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } __elems_[3]; } _sRGBColorTextures;
    struct RenderTargetFormat { int colorFormats[4]; unsigned long long colorFormatsCount; unsigned int samples; int depthStencilFormat; } _linearFormat;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> { struct RenderTarget *__ptr_; } _linearRenderTarget;
    struct shared_ptr<ggl::Texture2DAbstract> { struct Texture2DAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } _linearColorBuffer;
    struct array<std::shared_ptr<ggl::RenderBuffer>, 3UL> { struct shared_ptr<ggl::RenderBuffer> { struct RenderBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } __elems_[3]; } _linearColorTextures;
    struct shared_ptr<ggl::Texture> { struct Texture *__ptr_; struct __shared_weak_count *__cntrl_; } _msaaResolveBuffer;
    unsigned long long _signpostId;
    void *_mdDevice;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _debugConsoleManagerCreationLock;
    struct unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>> { struct DebugConsoleManager *__ptr_; } _debugConsoleManager;
    void *_services;
}

@property (readonly, nonatomic) void *flipTarget;
@property (readonly, nonatomic) void *flipPass;
@property (readonly, nonatomic) unsigned long long signpost;
@property (readonly, nonatomic) void *renderTarget;
@property (readonly, nonatomic) void *finalRenderTarget;
@property (readonly, nonatomic) void *linearRenderTarget;
@property (readonly, nonatomic) void *imageTexture;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (weak, nonatomic) id<GGLRenderQueueSource> renderSource;
@property (readonly, nonatomic) BOOL multiSample;
@property (readonly, nonatomic) BOOL supportsFramebufferFetch;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *format;
@property (readonly, nonatomic) void *renderer;
@property (readonly, nonatomic) BOOL shouldRasterize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (readonly, nonatomic) const struct RenderTargetFormat { int x0[4]; unsigned long long x1; unsigned int x2; int x3; } *linearFormat;
@property (readonly, nonatomic) float averageFPS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)debugConsoleForId:(int)a0;
- (void)dealloc;
- (BOOL)hasRenderTarget;
- (void)createRenderTarget;
- (void)willDealloc;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 useMultisampling:(BOOL)a2 extraColorFormats:(const void *)a3 taskContext:(const void *)a4 device:(void *)a5 services:(void *)a6 signpostId:(unsigned long long)a7;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase *x0; struct __shared_weak_count *x1; })bitmapData;
- (struct __IOSurface { } *)flipImage;
- (id).cxx_construct;
- (void)prepareRenderTask:(const void *)a0;
- (void *)finalSurface;
- (void)willDrawView;
- (void)destroyRenderTarget;
- (void).cxx_destruct;
- (void *)_internalRenderTarget;
- (void)didDrawView;

@end
