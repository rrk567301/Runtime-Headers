@class CAEDRMetadata, CADisplay, NSDictionary;
@protocol MTLDevice, MTLResidencySet;

@interface CAMetalLayer : CALayer {
    void *_priv;
}

@property (nonatomic) BOOL fenceEnabled;
@property (nonatomic) BOOL serverSyncEnabled;
@property (nonatomic) BOOL disableFIFO;
@property (nonatomic) BOOL muxLockEnabled;
@property (nonatomic) BOOL lowLatency;
@property (nonatomic) BOOL allowsDisplayCompositingWithCopy;
@property (nonatomic) BOOL nonDefaultColorspace;
@property (nonatomic) double drawableTimeoutSeconds;
@property (nonatomic) unsigned long long protectionOptions;
@property (nonatomic) unsigned long long textureUsage;
@property (nonatomic) BOOL premultiplied;
@property (readonly, nonatomic) unsigned long long displayCompositingInternalStatus;
@property (nonatomic) BOOL lowWorkload;
@property (retain) CAEDRMetadata *EDRMetadata;
@property (nonatomic) BOOL wantsIOSurfaceCompression;
@property (retain, nonatomic) CADisplay *cachedDisplay;
@property (retain) id<MTLDevice> device;
@property (readonly) id<MTLDevice> preferredDevice;
@property unsigned long long pixelFormat;
@property BOOL framebufferOnly;
@property struct CGSize { double x0; double x1; } drawableSize;
@property unsigned long long maximumDrawableCount;
@property BOOL presentsWithTransaction;
@property struct CGColorSpace { } *colorspace;
@property BOOL wantsExtendedDynamicRangeContent;
@property (retain) CAEDRMetadata *EDRMetadata;
@property BOOL displaySyncEnabled;
@property BOOL allowsNextDrawableTimeout;
@property (copy) NSDictionary *developerHUDProperties;
@property (readonly) id<MTLResidencySet> residencySet;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;

- (id)nextDrawable;
- (void)_didCommitLayer:(void *)a0;
- (id)currentDisplay;
- (id)newDrawable;
- (void)_display;
- (void)removeBackBuffers;
- (void)setContents:(id)a0;
- (void)setColorspace:(struct CGColorSpace { } *)a0 nonDefault:(BOOL)a1;
- (void)discardContents;
- (id)shimDrawable:(id)a0;
- (BOOL)_defersDidBecomeVisiblePostCommit;
- (BOOL)isDrawableAvailable;
- (void)dealloc;
- (void)setName:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)init;
- (void)didChangeValueForKey:(id)a0;

@end
