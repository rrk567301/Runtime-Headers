@class CALayer, NSDictionary, NSString;

@interface CAContext : NSObject {
    void *_impl;
}

@property (readonly) unsigned int contextId;
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
@property (readonly) NSDictionary *options;
@property float level;
@property (readonly) unsigned int displayId;
@property (getter=isSecure) BOOL secure;
@property float desiredDynamicRange;
@property (readonly) BOOL valid;

+ (id)currentContext;
+ (id)contextWithCGSConnection:(unsigned int)a0 options:(id)a1;
+ (id)allContexts;
+ (id)localContext;
+ (id)localContextWithOptions:(id)a0;
+ (id)remoteContextWithOptions:(id)a0;
+ (BOOL)allowsCGSConnections;
+ (id)remoteContext;
+ (void)setClientPort:(unsigned int)a0;
+ (void)setAllowsCGSConnections:(BOOL)a0;
+ (id)objectForSlot:(unsigned int)a0;

- (void)dealloc;
- (id)debugDescription;
- (void)invalidate;
- (void *)renderContext;
- (void)setFencePort:(unsigned int)a0;
- (unsigned int)createFencePort;
- (void *)contextImpl;
- (id)initWithOptions:(id)a0 localContext:(BOOL)a1;
- (id)initRemoteWithOptions:(id)a0;
- (id)initWithCGSConnection:(unsigned int)a0 options:(id)a1;
- (void)orderAbove:(unsigned int)a0;
- (void)orderBelow:(unsigned int)a0;
- (BOOL)waitForRenderingWithTimeout:(double)a0;
- (BOOL)addFence:(id)a0;
- (BOOL)addFence:(id)a0 completionHandler:(id /* block */)a1;
- (void)setFencePort:(unsigned int)a0 commitHandler:(id /* block */)a1;
- (void)setFence:(unsigned int)a0 count:(unsigned int)a1;
- (void)invalidateFences;
- (unsigned int)createSlot;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(BOOL)a1;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(BOOL)a1 extendedColors:(BOOL)a2;
- (void)deleteSlot:(unsigned int)a0;
- (void)setObject:(id)a0 forSlot:(unsigned int)a1;
- (void)transferSlot:(unsigned int)a0 toContextWithId:(unsigned int)a1;
- (unsigned int)hitTestContext:(struct CGPoint { double x0; double x1; })a0;
- (void *)retainRenderContext;
- (void)requestClientGlitch:(double)a0;
- (void)requestServerGlitch:(double)a0;

@end
