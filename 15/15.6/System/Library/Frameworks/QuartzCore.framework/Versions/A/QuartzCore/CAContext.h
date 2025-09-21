@class CALayer, NSDictionary, NSString;

@interface CAContext : NSObject {
    void *_impl;
}

@property (class, copy, nonatomic) id /* block */ drawInContextBlock;
@property (class, copy, nonatomic) id /* block */ finalizeContextBlock;
@property (class, copy, nonatomic) id /* block */ createCacheBlock;

@property (readonly) unsigned int contextId;
@property (retain) CALayer *layer;
@property unsigned int displayNumber;
@property unsigned int displayMask;
@property unsigned long long GPURegistryID;
@property unsigned int eventMask;
@property int restrictedHostProcessId;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unobscuredRegionOfInterest;
@property char occlusionClearsEventShape;
@property (copy) NSDictionary *payload;
@property struct CGColorSpace { } *colorSpace;
@property unsigned int commitPriority;
@property char colorMatchUntaggedContent;
@property (copy) NSString *contentsFormat;
@property (copy) NSString *annotation;
@property (readonly) NSDictionary *options;
@property float level;
@property (readonly) unsigned int displayId;
@property (getter=isSecure) char secure;
@property float desiredDynamicRange;
@property (readonly) char valid;
@property (readonly, nonatomic) unsigned int commitId;

+ (id)currentContext;
+ (id)allContexts;
+ (id)contextWithCGSConnection:(unsigned int)a0 options:(id)a1;
+ (id)localContext;
+ (id)localContextWithOptions:(id)a0;
+ (id)remoteContext;
+ (char)allowsCGSConnections;
+ (id)contextWithId:(unsigned int)a0;
+ (id)objectForSlot:(unsigned int)a0;
+ (id)remoteContextWithOptions:(id)a0;
+ (void)setAllowsCGSConnections:(char)a0;
+ (void)setClientPort:(unsigned int)a0;

- (void)dealloc;
- (id)debugDescription;
- (void)invalidate;
- (unsigned int)createFencePort;
- (char)addFence:(id)a0;
- (void)setFencePort:(unsigned int)a0;
- (void *)renderContext;
- (unsigned int)hitTestContext:(struct CGPoint { double x0; double x1; })a0;
- (void)setFence:(unsigned int)a0 count:(unsigned int)a1;
- (char)addFence:(id)a0 completionHandler:(id /* block */)a1;
- (void *)contextImpl;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(char)a1;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(char)a1 extendedColors:(char)a2;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)a0;
- (id)initRemoteWithOptions:(id)a0;
- (id)initWithCGSConnection:(unsigned int)a0 options:(id)a1;
- (id)initWithOptions:(id)a0 localContext:(BOOL)a1;
- (void)invalidateFences;
- (void)orderAbove:(unsigned int)a0;
- (void)orderBelow:(unsigned int)a0;
- (void)requestClientGlitch:(double)a0;
- (void)requestServerGlitch:(double)a0;
- (void *)retainRenderContext;
- (void)setFencePort:(unsigned int)a0 commitHandler:(id /* block */)a1;
- (void)setObject:(id)a0 forSlot:(unsigned int)a1;
- (void)transferSlot:(unsigned int)a0 toContextWithId:(unsigned int)a1;
- (char)waitForCommitId:(unsigned int)a0 timeout:(double)a1;
- (char)waitForRenderingWithTimeout:(double)a0;

@end
