@class NSString, VFXMTLDeformerStack, VFXModelDeformer;
@protocol MTLBuffer, MTLDevice, VFXModelDeformerInstance, MTLBlitCommandEncoder, MTLComputeCommandEncoder;

@interface VFXModelDeformerInstanceWrapper : NSObject <VFXModelDeformerInitComputeContext, VFXModelDeformerUpdateComputeContext> {
    VFXMTLDeformerStack *_stack;
    VFXModelDeformer *_deformer;
    id<VFXModelDeformerInstance> _instance;
    struct { struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } srcPositions; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dstPositions; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } srcNormals; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dstNormals; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } srcTangents; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dstTangents; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency0Positions; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency0Normals; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency0Tangents; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency1Positions; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency1Normals; struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } dependency1Tangents; } _stageInputOutputDescriptors;
    id /* block */ _currentUpdateComputeEncoderProvider;
    id<MTLComputeCommandEncoder> _currentUpdateComputeEncoder;
    struct { id<MTLBuffer> srcPositions; id<MTLBuffer> dstPositions; id<MTLBuffer> srcNormals; id<MTLBuffer> dstNormals; id<MTLBuffer> srcTangents; id<MTLBuffer> dstTangents; id<MTLBuffer> dependency0Positions; id<MTLBuffer> dependency0Normals; id<MTLBuffer> dependency0Tangents; id<MTLBuffer> dependency1Positions; id<MTLBuffer> dependency1Normals; id<MTLBuffer> dependency1Tangents; } _currentUpdateBuffers;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLBlitCommandEncoder> currentBlitEncoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTLComputeCommandEncoder> currentComputeEncoder;
@property (readonly, nonatomic) id<MTLBuffer> srcPositionBuffer;
@property (readonly, nonatomic) id<MTLBuffer> dstPositionBuffer;
@property (readonly, nonatomic) id<MTLBuffer> srcNormalBuffer;
@property (readonly, nonatomic) id<MTLBuffer> dstNormalBuffer;
@property (readonly, nonatomic) id<MTLBuffer> srcTangentBuffer;
@property (readonly, nonatomic) id<MTLBuffer> dstTangentBuffer;

- (void)dealloc;
- (struct __CFXGPUDevice { } *)gpuDevice;
- (unsigned long long)_currentFrameHash;
- (struct { void /* unknown type, empty encoding */ x0[6]; })_currentFrustumInfo;
- (id)_currentRenderContext;
- (id)_currentResourceManager;
- (struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; })_currentTransforms;
- (void)configureStageInputOutputDescriptor:(id)a0 withDeformerFunction:(id)a1;
- (id)dependency0NormalBuffer;
- (id)dependency0PositionBuffer;
- (id)dependency0TangentBuffer;
- (id)dependency1NormalBuffer;
- (id)dependency1PositionBuffer;
- (id)dependency1TangentBuffer;
- (void)setStageInputOutputBuffersToComputeEncoder:(id)a0;
- (void)setStageInputOutputBuffersToCurrentComputeEncoder;

@end
