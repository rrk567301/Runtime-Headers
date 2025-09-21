@class CCMTLBufferAllocator, MTLTextureDescriptor, CCContextDeviceGroup;
@protocol MTLComputePipelineState, MTLTexture;

@interface CCPassthroughDepthWarper : NSObject {
    CCContextDeviceGroup *_deviceGroup;
    CCMTLBufferAllocator *_allocator;
    void /* unknown type, empty encoding */ _sourceSize;
    void /* unknown type, empty encoding */ _verticesBufferSize;
    id<MTLComputePipelineState> _computeVerticesPipelineState;
    id<MTLComputePipelineState> _rasterizeTrianglesPipelineState;
    struct PassthroughDepthReprojectionParameters { struct { void /* unknown type, empty encoding */ columns[3]; } sourceIntrinsicsInv; struct { void /* unknown type, empty encoding */ columns[3]; } targetIntrinsics; void /* unknown type, empty encoding */ sourceSize; void /* unknown type, empty encoding */ sourceSizeInv; void /* unknown type, empty encoding */ targetSize; void /* unknown type, empty encoding */ targetSizeInv; unsigned int verticesRowStride; float clearValue; } _reprojectionUniforms;
    struct PassthroughDepthReprojectionRasterizerParameters { void /* unknown type, empty encoding */ targetSize; unsigned int targetRowStride; unsigned int verticesRowStride; } _rasterizerUniforms;
    BOOL _useMeshProtection;
    struct { struct { int value; } identity; MTLTextureDescriptor *descriptor; struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } buffer; } _reprojectedDepthHeapTexture;
    struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } _computeVerticesArgumentBufferRegion;
    struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } _rasterizeTrianglesArgumentBufferRegion;
    void *_computeVerticesParameters;
    struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } _rasterizeTrianglesBufferRegion;
    struct { struct { int value; } identity; long long offset; unsigned long long size; unsigned long long usage; } _verticesBufferRegion;
    id<MTLTexture> _targetDepthTexture;
    id<MTLTexture> _sourceDepth;
    void /* unknown type, empty encoding */ _reprojectedDepthSize;
    unsigned long long _reprojectedDepthPixelFormat;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
