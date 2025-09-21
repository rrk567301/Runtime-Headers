@class MPSImageSobel, CCMTLBufferAllocator, CCContextDeviceGroup;
@protocol MTLComputePipelineState, MTLDevice, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface CCTextureBlitter : NSObject {
    CCContextDeviceGroup *_deviceGroup;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLBuffer> _pixelBuffer;
    id<MTLComputePipelineState> _pipelineStates[73];
    MPSImageSobel *_sobelFilter;
    CCMTLBufferAllocator *_allocator;
    struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } _argumentBuffer;
    struct CCTextureBlitOrCopyParameters { struct MTLResourceID { unsigned long long x0; } x0; struct MTLResourceID { unsigned long long x0; } x1; } *_parameters;
    int _kernelIndex;
    unsigned long long _sourceFormat;
    void /* unknown type, empty encoding */ _sourceSize;
    unsigned long long _targetFormat;
    void /* unknown type, empty encoding */ _targetSize;
    id<MTLTexture> _source;
    id<MTLTexture> _target;
}

- (id)copy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)nonZeroTexture:(id)a0;
- (id)absTexture:(id)a0;
- (id)applySamplingCoordinates:(id)a0 toInput:(id)a1;
- (BOOL)blitSource:(id)a0 destination:(id)a1;
- (BOOL)blitSource:(id)a0 destination:(id)a1 commandBuffer:(id)a2;
- (id)clampTexture:(id)a0 min:(SEL)a1 max:(id)a2;
- (void)clearTexture:(id)a0 withColor:(struct { double x0; double x1; double x2; double x3; })a1;
- (void)clearTexture:(id)a0 withColor:(struct { double x0; double x1; double x2; double x3; })a1 computeEncoder:(id)a2;
- (id)colorizeTexture:(id)a0 colorLUT:(unsigned long long)a1;
- (void)colorizeTexture:(id)a0 colorLUT:(unsigned long long)a1 intoTexture:(id)a2;
- (id)colorizeTexture:(SEL)a0 colorLUT:(id)a1 targetSize:(unsigned long long)a2;
- (id)combineTextureA:(id)a0 weightsA:(SEL)a1 textureB:(id)a2 weightsB:(id)a3 offset:(void /* unknown type, empty encoding */)a4;
- (id)computeTextureHistogram:(id)a0;
- (id)convertRayTexture:(id)a0 fromLensModel:(long long)a1 toLensModel:(long long)a2;
- (id)convertTextureLensModel:(id)a0 sourceLensModel:(long long)a1 sourceAngleRange:(struct CCAngleRange { float x0; float x1; float x2; float x3; })a2 destinationLensModel:(long long)a3 destinationAngleRange:(struct CCAngleRange { float x0; float x1; float x2; float x3; })a4;
- (void)convolveImage:(id)a0 location:(SEL)a1 kernel:(id)a2 kernelSize:(const void *)a3 size:(void /* unknown type, empty encoding */)a4;
- (id)copy:(id)a0 format:(unsigned long long)a1;
- (id)diffTexture:(id)a0 withTexture:(id)a1 andMask:(long long)a2;
- (id)initWithDeviceGroup:(id)a0;
- (struct CCPixelf { float x0; float x1; float x2; float x3; })mean:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1;
- (void)populateTexture:(id)a0 withPixelForPosition:(id /* block */)a1;
- (void /* unknown type, empty encoding */)readPixel:(SEL)a0 location:(id)a1;
- (id)readPixelsRGBA32F:(id)a0;
- (id)rectifyTexture:(id)a0 tanAngleToPixelTexture:(id)a1 tanAngleRange:(struct CCTanAngleRange { float x0; float x1; float x2; float x3; })a2 rectifiedTanAngleRange:(struct CCTanAngleRange { float x0; float x1; float x2; float x3; })a3 fillPixel:(struct CCPixelf { float x0; float x1; float x2; float x3; })a4;
- (id)rotateTexture:(id)a0 angleRange:(struct CCAngleRange { float x0; float x1; float x2; float x3; })a1 rotationMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a2;
- (void /* unknown type, empty encoding */)samplePixel:(SEL)a0 location:(id)a1;
- (void)setupArgumentBuffer;
- (id)textureLike:(id)a0;
- (id)textureLike:(id)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2;
- (id)textureLike:(id)a0 usage:(unsigned long long)a1;
- (void)writeRegion:(id)a0 value:(SEL)a1 location:(id)a2 size:(void /* unknown type, empty encoding */)a3;

@end
