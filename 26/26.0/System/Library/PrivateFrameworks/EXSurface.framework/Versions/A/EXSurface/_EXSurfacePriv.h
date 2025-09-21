@class EXSurfacePrivImageDescArray, EXSurfacePrivImageDesc, EXSurfaceMemory, EXSurfaceMemoryRegion;

@interface _EXSurfacePriv : NSObject {
    unsigned int _useCount;
}

@property (readonly) char *baseAddress;
@property (readonly) int useCount;
@property (readonly) long long offset;
@property (readonly) long long size;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly) long long bytesPerRow;
@property (readonly) long long bytesPerElement;
@property (readonly) long long elementWidth;
@property (readonly) long long elementHeight;
@property unsigned long long surfaceID;
@property unsigned long long planeCount;
@property unsigned int pixelFormat;
@property long long allocationSize;
@property (readonly) unsigned long long sharedMemoryRegionID;
@property (retain, nonatomic) EXSurfacePrivImageDesc *imageDesc;
@property (readonly) EXSurfacePrivImageDescArray *planes;
@property (readonly) EXSurfaceMemory *memory;
@property (readonly) EXSurfaceMemoryRegion *memoryRegion;

- (id)initWithDescriptor:(id)a0;
- (id)init;
- (BOOL)isInUse;
- (void).cxx_destruct;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (BOOL)allocateMemory:(id)a0 offset:(long long)a1 size:(long long)a2 rootService:(BOOL)a3;
- (unsigned long long)getDarwinID;
- (id)initWithMemoryRegion:(id)a0 darwinID:(unsigned long long)a1;

@end
