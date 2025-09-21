@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

@interface CommonMetal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    BOOL _offsetsConfigured;
    unsigned int _horizontalOffsetLuma;
    unsigned int _horizontalOffsetChroma;
    unsigned int _verticalOffsetLuma;
    unsigned int _verticalOffsetChroma;
}

- (void).cxx_destruct;
- (id)compileFunction:(id)a0 constantValues:(id)a1;
- (id)compileFunction:(id)a0;
- (unsigned long long)getPaddedInterchangeTiledHeight:(struct __CVBuffer { } *)a0 plane:(unsigned int)a1;
- (unsigned long long)getPaddedInterchangeTiledHeightFromIOSurface:(struct __IOSurface { } *)a0 plane:(unsigned int)a1;
- (unsigned long long)getPaddedInterchangeTiledWidth:(struct __CVBuffer { } *)a0 plane:(unsigned int)a1;
- (unsigned long long)getPaddedInterchangeTiledWidthFromIOSurface:(struct __IOSurface { } *)a0 plane:(unsigned int)a1;
- (BOOL)initOffsets:(int)a0;
- (id)uintTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 usingTextureCache:(struct __CVMetalTextureCache { } *)a2 withAttributes:(id)a3;
- (id)uintTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 usingTextureCache:(struct __CVMetalTextureCache { } *)a2 withAttributes:(id)a3 width:(unsigned long long)a4 height:(unsigned long long)a5;
- (id)unormTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 usingTextureCache:(struct __CVMetalTextureCache { } *)a2 withAttributes:(id)a3;
- (id)unormTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 usingTextureCache:(struct __CVMetalTextureCache { } *)a2 withAttributes:(id)a3 width:(unsigned long long)a4 height:(unsigned long long)a5;

@end
