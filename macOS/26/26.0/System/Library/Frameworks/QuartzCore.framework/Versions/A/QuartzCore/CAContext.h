@class NSString, NSDictionary, CAHostingToken, CALayer;

@interface CAContext : NSObject {
    void *_impl;
}

@property (class, copy, nonatomic) id /* block */ drawInContextBlock;
@property (class, copy, nonatomic) id /* block */ finalizeContextBlock;
@property (class, copy, nonatomic) id /* block */ createCacheBlock;

@property (readonly) unsigned int contextId;
@property (readonly, nonatomic) CAHostingToken *hostingToken;
@property (retain) CALayer *layer;
@property unsigned int displayNumber;
@property unsigned int displayMask;
@property unsigned long long GPURegistryID;
@property unsigned int eventMask;
@property int restrictedHostProcessId;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unobscuredRegionOfInterest;
@property BOOL occlusionClearsEventShape;
@property (copy) NSDictionary *payload;
@property struct CGColorSpace { } *colorSpace;
@property unsigned int commitPriority;
@property BOOL colorMatchUntaggedContent;
@property (copy) NSString *contentsFormat;
@property (copy) NSString *annotation;
@property BOOL zombifyOnInvalidate;
@property (readonly) NSDictionary *options;
@property float level;
@property (readonly) unsigned int displayId;
@property (getter=isSecure) BOOL secure;
@property float desiredDynamicRange;
@property (readonly) BOOL valid;
@property (readonly, nonatomic) unsigned int commitId;

+ (id)currentContext;
+ (id)allContexts;
+ (id)localContext;
+ (BOOL)allowsCGSConnections;
+ (id)remoteContext;
+ (id)contextWithId:(unsigned int)a0;
+ (void)setAllowsCGSConnections:(BOOL)a0;
+ (void)setClientPort:(unsigned int)a0;
+ (id)localContextWithOptions:(id)a0;
+ (id)objectForSlot:(unsigned int)a0;
+ (id)contextWithCGSConnection:(unsigned int)a0 options:(id)a1;
+ (id)remoteContextWithOptions:(id)a0;

- (BOOL)addFence:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (void)invalidate;
- (void)orderAbove:(unsigned int)a0;
- (void)requestServerGlitch:(double)a0;
- (id)initWithOptions:(id)a0 localContext:(BOOL)a1;
- (void *)retainRenderContext;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(BOOL)a1;
- (void)setFencePort:(unsigned int)a0;
- (BOOL)addFence:(id)a0 completionHandler:(id /* block */)a1;
- (void)setFence:(unsigned int)a0 count:(unsigned int)a1;
- (void)orderBelow:(unsigned int)a0;
- (void)invalidateFences;
- (id)initRemoteWithOptions:(id)a0;
- (void *)renderContext;
- (void)transferSlot:(unsigned int)a0 toContextWithId:(unsigned int)a1;
- (unsigned int)createFencePort;
- (BOOL)waitForCommitId:(unsigned int)a0 timeout:(double)a1;
- (void)setFencePort:(unsigned int)a0 commitHandler:(id /* block */)a1;
- (void *)contextImpl;
- (id)initWithCGSConnection:(unsigned int)a0 options:(id)a1;
- (void)requestClientGlitch:(double)a0;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(BOOL)a1 extendedColors:(BOOL)a2;
- (void)setObject:(id)a0 forSlot:(unsigned int)a1;
- (BOOL)addFence:(id)a0 completion:(id /* block */)a1;
- (BOOL)waitForRenderingWithTimeout:(double)a0;
- (unsigned int)hitTestContext:(struct CGPoint { double x0; double x1; })a0;
- (void)deleteSlot:(unsigned int)a0;
- (unsigned int)createSlot;

@end
