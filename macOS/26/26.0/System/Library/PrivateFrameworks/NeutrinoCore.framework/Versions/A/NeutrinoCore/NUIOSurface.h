@class IOSurface, NSString, NSMutableDictionary, NUPixelFormat;

@interface NUIOSurface : NSObject {
    NSMutableDictionary *_textures;
    struct __CVBuffer { } *_pixelBuffer;
}

@property (readonly, nonatomic) struct __IOSurface { } *IOSurfaceRef;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) long long sizeInBytes;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) float contentHeadroom;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (id)debugQuickLookObject;
- (void)dealloc;
- (BOOL)read:(id /* block */)a0;
- (id)init;
- (id)description;
- (BOOL)write:(id /* block */)a0;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void).cxx_destruct;
- (BOOL)isPurged;
- (void)_allocateSurface;
- (int)_fetchPurgeState:(unsigned int *)a0;
- (id)_newTextureForDevice:(id)a0;
- (unsigned int)_purgeLevelToOSValue:(long long)a0;
- (id)_purgeStateDescription;
- (void)debugDump:(id)a0;
- (void)invalidatePixelBuffer;
- (BOOL)makeNonPurgeable;
- (void)makePurgeable:(long long)a0;
- (id)newRenderDestination;
- (id)textureForDevice:(id)a0;

@end
