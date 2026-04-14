@class NSArray, IOSurface, PGTask;
@protocol MTLBuffer;

@interface PGBackingResource : PGResource {
    PGTask *_task;
    unsigned int _planeCount;
    struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 : 24; unsigned char x4 : 8; } *_planes;
    id<MTLBuffer> _transferBuffer;
    unsigned long long _backingAllocationLength;
    unsigned int _backingVirtualPage;
}

@property (readonly) IOSurface *ioSurface;
@property (readonly) NSArray *textures;

+ (BOOL)validateBackingDescriptor:(struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned char x3; } *)a0 dest:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 : 24; unsigned char x4 : 8; } *)a1 planeCount:(unsigned int)a2 backingAllocationLength:(unsigned long long)a3;

- (void)dealloc;
- (void)discard;
- (void)synchronizeInEncoder:(id)a0;
- (void)synchronizeAndDiscardInEncoder:(id)a0;
- (void)prepareInEncoder:(id)a0;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(void *)a2 descriptorLength:(unsigned int)a3;
- (void)replacePhysical:(id)a0;
- (void)ensurePhysical;
- (unsigned long long)pixelFormatForBacking:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 : 24; unsigned char x4 : 8; } *)a0;
- (id)getIOSurface;

@end
