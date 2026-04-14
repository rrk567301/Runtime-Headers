@class CCContextDeviceGroup, CCLane, NSArray, CCSparseTextureGenerationAlgorithm, CCWarpAlgorithmForward, CCSimpleRenderPass, NSMutableArray, CCMultiViewWarpServiceDescriptor, MTLRenderPassDescriptor, CCPipelineStateLibrary;
@protocol MTLTexture, MTLDepthStencilState;

@interface CCMultiViewWarpService : CCService {
    CCContextDeviceGroup *_deviceGroup;
    CCMultiViewWarpServiceDescriptor *_multiViewWarpServiceDescriptor;
    CCSimpleRenderPass *_multiViewWarpPass;
    CCSparseTextureGenerationAlgorithm *_sparseTextureGenerationAlgorithm;
    long long _nSourceViews;
    long long _sourceTextureWidth;
    long long _sourceTextureHeight;
    BOOL _deviceSupportsVRR;
    BOOL _mapSparseTextures;
    CCWarpAlgorithmForward *_warpAlgorithmForward;
    id<MTLTexture> _depthTarget;
    unsigned long long _colorSparseTexturePixelFormat;
    unsigned long long _depthSparseTexturePixelFormat;
    unsigned long long _occupancyMapPixelFormat;
    NSMutableArray *_depthBinsForForwardWarp;
    unsigned long long _numberOfTargets;
    id<MTLDepthStencilState> _depthStateForFlushPass;
    BOOL _enableFlushPass;
    struct CCPatchStruct { char atlasID; char viewID; long long sizeX; long long sizeY; long long positionInViewX; long long positionInViewY; long long positionInAtlasX; long long positionInAtlasY; char rotation; char flip; long long patchID; } _patches[2][2];
    struct CCMultiViewSourceCameraStruct { long long sizeX; long long sizeY; NSArray *position; NSArray *rotation; long long projectionType; NSArray *erpPhiRange; NSArray *erpThetaRange; NSArray *perspectiveFocal; NSArray *perspectiveCenter; NSArray *depthRange; struct { void /* unknown type, empty encoding */ columns[4]; } rotationMatrix; long long pp; } _sourceCameras[2][2];
    NSMutableArray *_patchBuffers;
    struct CCCameraStruct { struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; unsigned long long timestamp; struct CCGazeDataStruct { void /* unknown type, empty encoding */ gazeUV; void /* unknown type, empty encoding */ gazeDirection; void /* unknown type, empty encoding */ gazeTanAngles; float gazeUncertainty; } gaze; struct CCTextureViewStruct { struct { double originX; double originY; double width; double height; double znear; double zfar; } viewport; long long sliceIndex; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } physicalViewportSize; } textureView; } _ccSourceViewCameras[2][2];
    struct { void /* unknown type, empty encoding */ columns[4]; } _targetProjectionMatrix;
    struct { void /* unknown type, empty encoding */ columns[4]; } _targetViewMatrix;
    long long _patchAndCameraBufferIndex;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    CCLane *resourceMultiViewWarpIntraFrameInput;
}

@property (retain, nonatomic) CCPipelineStateLibrary *renderPipelineLibrary;
@property (retain, nonatomic) CCPipelineStateLibrary *tiledRenderPipelineLibrary;

+ (id)new;

- (BOOL)setDescriptor:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)preBuildService;
- (BOOL)buildWithDeviceGroup:(id)a0;
- (BOOL)reallocateBuffersWithDeviceGroup:(id)a0;
- (BOOL)updateLanes:(id)a0;

@end
