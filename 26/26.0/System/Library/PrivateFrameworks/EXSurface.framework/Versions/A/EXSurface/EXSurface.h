@class EXSurfacePriv, EXSurfacePlaneArray;

@interface EXSurface : NSObject <EXSurfaceImageLayout>

@property (readonly) unsigned int pixelFormat;
@property (readonly) int useCount;
@property (readonly) unsigned long long surfaceID;
@property (readonly) long long allocationSize;
@property (readonly) unsigned long long planeCount;
@property (readonly) EXSurfacePlaneArray *planes;
@property (readonly) EXSurfacePriv *priv;
@property (readonly) long long offset;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly) long long bytesPerRow;
@property (readonly) long long bytesPerElement;
@property (readonly) long long elementWidth;
@property (readonly) long long elementHeight;
@property (readonly) void *baseAddress;

- (id)initWithDescriptor:(id)a0;
- (void)getMutableBytesWithHandler:(id /* block */)a0;
- (BOOL)isInUse;
- (void).cxx_destruct;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (unsigned long long)getDarwinID;
- (id)initWithMemoryRegion:(id)a0 darwinID:(unsigned long long)a1;
- (id)initWithPriv:(id)a0;

@end
