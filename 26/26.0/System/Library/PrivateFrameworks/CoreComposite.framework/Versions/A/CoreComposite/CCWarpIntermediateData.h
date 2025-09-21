@class CCMultiviewTextureData, NSString, NSArray, CCReadbackTextureReader, CCWarpDepthExtremeDownSampleData, CCXRCamerasData, NSMutableArray, CCWarpIntermediateDataProtected, CCWarpIntermediateDataDescriptor, CCSharedWarpDepthExtremeDownSampleData;
@protocol MTLTexture, MTLDevice;

@interface CCWarpIntermediateData : CCData <CCVisitable> {
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; unsigned long long x4; unsigned long long x5; BOOL x6; BOOL x7; BOOL x8; } *_sharedData;
    unsigned long long _sharedDataSize;
    CCSharedWarpDepthExtremeDownSampleData *_sharedDepthDownsampleData;
    id<MTLDevice> _device;
    CCWarpIntermediateDataDescriptor *_descriptor;
    CCWarpIntermediateDataProtected *_protectedData;
    CCReadbackTextureReader *_readbackTextureReader;
    struct { char *rawData; unsigned long long itemLength; unsigned long long rowLength; } _readbackTextureCache;
    struct CCWarpIntermediateReaderData { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } physicalSize[2]; } _readerData;
    float _surfaceOccupancy[2];
    NSMutableArray *_resources;
}

@property (readonly, nonatomic) id<MTLTexture> readbackTexture;
@property (readonly, nonatomic) NSArray *depthBins;
@property (readonly, nonatomic) NSArray *tempInlineDepthBins;
@property (readonly, nonatomic) id<MTLTexture> lowPrecisionDepth;
@property (readonly, nonatomic) NSArray *vfwIndexBuffers;
@property (readonly, nonatomic) NSArray *downsampledDepthTextureArray;
@property (readonly, nonatomic) NSArray *countBuffersForAVFW;
@property (readonly, nonatomic) NSArray *vertexBuffersForAVFW;
@property (nonatomic) unsigned long long sourceHandle;
@property (nonatomic) unsigned long long frameUID;
@property (readonly, nonatomic) CCWarpDepthExtremeDownSampleData *downSampledDepth;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) CCXRCamerasData *targetCamera;
@property (retain, nonatomic) CCMultiviewTextureData *outputTargetData;
@property (nonatomic) unsigned long long previousFrameTimestamp;
@property (nonatomic) unsigned long long sharedImageblockSampleLength;
@property (nonatomic) BOOL isInlineExecuted;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerTile;
@property (nonatomic) unsigned long long protectionOptions;
@property (readonly, nonatomic) CCWarpIntermediateDataProtected *protectedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)resources;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 mtlDevice:(id)a1;
- (unsigned long long)getCadenceCount;
- (void)_allocateAdaptiveMeshBuffers;
- (BOOL)_allocateDepthBins;
- (void)_allocateReadbackTexture;
- (id)_allocateSharedMTLBufferWithLength:(unsigned long long)a0;
- (BOOL)_allocateVFWIndexBuffers;
- (void)_decodeAdaptiveMeshBuffersWithCoder:(id)a0;
- (void)_decodeDepthBinTexturesWithCoder:(id)a0;
- (void)_decodeObjectWithCoder:(id)a0;
- (void)_decodeReadbackTextureWithCoder:(id)a0;
- (id)_decodeSharedTextureWithCoder:(id)a0 forKey:(id)a1;
- (id)_decodeSurfaceBackedTextureWithCoder:(id)a0 forKey:(id)a1;
- (void)_decodeVFWIndexBuffersWithCoder:(id)a0;
- (void)_encodeAdaptiveMeshBuffersWithCoder:(id)a0;
- (void)_encodeDepthBinTexturesWithCoder:(id)a0;
- (void)_encodeReadbackTextureWithCoder:(id)a0;
- (void)_encodeSharedTexture:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (void)_encodeSurfaceBackedTexture:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (void)_encodeVFWIndexBuffersWithCoder:(id)a0;
- (void)_loadProtectedDataIfNecessary;
- (void)_readbackTextureUpdate;
- (id)decodeSharedMTLBufferWithDevice:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (id)decodeSurfaceBackedBufferWithCoder:(id)a0 forKey:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)encodeSharedMTLBuffer:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (void)encodeSurfaceBackedBuffer:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (unsigned long long)getRenderPassTime;
- (void)incrementCadenceCount;
- (void)recreateOpticalFlowTextureViews:(id)a0;
- (void)resetCadenceCount;
- (void)setRenderPassTime;

@end
