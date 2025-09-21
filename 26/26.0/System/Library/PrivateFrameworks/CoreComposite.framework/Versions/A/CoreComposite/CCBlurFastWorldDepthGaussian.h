@class CCMTLBufferAllocator, MTLTextureDescriptor, CCContextDeviceGroup;
@protocol MTLComputePipelineState, MTLTexture;

@interface CCBlurFastWorldDepthGaussian : NSObject {
    CCContextDeviceGroup *_deviceGroup;
    CCMTLBufferAllocator *_allocator;
    id<MTLComputePipelineState> _kernel[2];
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _size;
    float _radius;
    struct { struct { int value; } identity; MTLTextureDescriptor *descriptor; struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } buffer; } _scratchTexture;
    void /* unknown type, empty encoding */ _dispatchSize[2];
    struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } _argumentBuffersRegion[2];
    struct CCFastWorldDepthGaussianBlurShaderArgumentBuffer *_argumentBuffers[2];
    id<MTLTexture> _source;
    id<MTLTexture> _target;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
