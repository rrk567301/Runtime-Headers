@class CADisplay, CAEDRMetadata, NSDictionary;
@protocol MTLDevice;

@interface CAMetalLayer : CALayer {
    void *_priv;
}

@property (nonatomic) char fenceEnabled;
@property (nonatomic) char serverSyncEnabled;
@property (nonatomic) char disableFIFO;
@property (nonatomic) char muxLockEnabled;
@property (nonatomic) char lowLatency;
@property (nonatomic) char allowsDisplayCompositingWithCopy;
@property (nonatomic) char nonDefaultColorspace;
@property (nonatomic) double drawableTimeoutSeconds;
@property (nonatomic) unsigned long long protectionOptions;
@property (nonatomic) unsigned long long textureUsage;
@property (readonly, nonatomic) unsigned long long displayCompositingInternalStatus;
@property (nonatomic) char lowWorkload;
@property (retain, nonatomic) CADisplay *cachedDisplay;
@property (retain) id<MTLDevice> device;
@property (readonly) id<MTLDevice> preferredDevice;
@property unsigned long long pixelFormat;
@property char framebufferOnly;
@property struct CGSize { double x0; double x1; } drawableSize;
@property unsigned long long maximumDrawableCount;
@property char presentsWithTransaction;
@property struct CGColorSpace { } *colorspace;
@property char wantsExtendedDynamicRangeContent;
@property (retain) CAEDRMetadata *EDRMetadata;
@property char displaySyncEnabled;
@property char allowsNextDrawableTimeout;
@property (copy) NSDictionary *developerHUDProperties;

+ (id)defaultValueForKey:(id)a0;
+ (char)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)dealloc;
- (id)init;
- (void)didChangeValueForKey:(id)a0;
- (void)setName:(id)a0;
- (void)_display;
- (char)isDrawableAvailable;
- (void)layerDidBecomeVisible:(char)a0;
- (id)nextDrawable;
- (void)setContents:(id)a0;
- (void)discardContents;
- (char)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(void *)a0;
- (id)currentDisplay;
- (id)newDrawable;
- (void)removeBackBuffers;
- (void)setColorspace:(struct CGColorSpace { } *)a0 nonDefault:(char)a1;
- (id)shimDrawable:(id)a0;
- (char)shouldArchiveValueForKey:(id)a0;

@end
