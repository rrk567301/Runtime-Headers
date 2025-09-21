@class NSDictionary;
@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface FrameChecksumMetal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _calcChecksumTexture;
    BOOL _offsetsConfigured;
    unsigned int _horizontalOffsetLuma;
    unsigned int _horizontalOffsetChroma;
    unsigned int _verticalOffsetLuma;
    unsigned int _verticalOffsetChroma;
    unsigned int _startRow;
    unsigned int _verticalStepsLuma;
    unsigned int _verticalStepsChroma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChroma;
    id<MTLBuffer> _checksum[2];
    NSDictionary *_readAttributes;
    int _deviceGeneration;
    BOOL _H13P_H17P_UnormWorkaroundRequired;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compileFunction:(id)a0 constantValues:(id)a1;
- (int)calculateChecksumOneFrame:(struct __CVBuffer { } *)a0 checksum:(unsigned short *)a1 codecType:(int)a2 useOffsets:(BOOL)a3;
- (id)compileFunction:(id)a0;
- (BOOL)initOffsets:(int)a0;
- (int)initWithDevice:(struct __CVBuffer { } *)a0 codecType:(int)a1;
- (id)uintTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4;
- (id)unormTexture:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4;

@end
