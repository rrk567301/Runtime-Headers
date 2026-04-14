@class NSString, VFXMTLResourceManager, VFXMTLComputePipeline;
@protocol MTLBuffer;

@interface VFXMTLSkinDeformer : NSObject <VFXMTLDeformer> {
    struct __CFXSkinner { } *_skinner;
    struct __CFXGeometry { } *_baseGeometry;
    unsigned char _dataKind;
    VFXMTLResourceManager *_resourceManager;
    BOOL _skinNormals;
    BOOL _skinTangents;
    unsigned int _baseVertexCount;
    unsigned long long _currentFrameHash;
    id<MTLBuffer> _influenceOffsetsBuffer;
    id<MTLBuffer> _boneIndicesBuffer;
    id<MTLBuffer> _boneWeightsBuffer;
    VFXMTLComputePipeline *_computePipeline;
    BOOL _useFallbackCopyKernel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)requiredInputs;

@end
