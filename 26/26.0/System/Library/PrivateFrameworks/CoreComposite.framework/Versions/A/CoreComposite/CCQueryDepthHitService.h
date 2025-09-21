@class CCQueryDepthHitServiceDescriptor, CCContextDeviceGroup, CCDRMServiceConnection, CCPipelineStateLibrary, CCLane, CCSimpleRenderPass;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CCQueryDepthHitService : CCService {
    CCContextDeviceGroup *_deviceGroup;
    CCQueryDepthHitServiceDescriptor *_queryDepthHitServiceDescriptor;
    CCSimpleRenderPass *_queryDepthHitPass;
    id<MTLBuffer> _queryBuffer;
    id<MTLBuffer> _protectedResultBuffer;
    unsigned long long _protectedResultBufferMapID;
    BOOL _deviceSupportsVRR;
    CCDRMServiceConnection *_drmServiceConnection;
    id<MTLComputePipelineState> _handComputePSOFoveated;
    id<MTLComputePipelineState> _handComputePSOUnfoveated;
    id<MTLComputePipelineState> _initializePSODRM;
    CCLane *resourceXRInputIndexed[2];
    CCLane *resourceIntermediateDataIndexed[2];
    CCLane *resourceQueryDepthHitData;
    CCLane *resourceDisplayCameras;
    CCLane *resourceDisplayTexture;
    unsigned long long _resultBufferOffset;
}

@property (retain, nonatomic) CCPipelineStateLibrary *renderPipelineLibrary;

+ (id)new;

- (BOOL)setDescriptor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)releaseBuffers;
- (void)addAllocations:(id)a0;
- (BOOL)preBuildService;
- (BOOL)buildWithDeviceGroup:(id)a0;
- (void)cacheLanes;
- (BOOL)queryDepthHitApply:(id)a0 queryDepthHitData:(id)a1 targetCameraData:(id)a2 XRData:(id[2])a3 intermediateData:(id[2])a4 displayTextureData:(id)a5;
- (BOOL)reallocateBuffersWithDeviceGroup:(id)a0;
- (void)removeAllocations:(id)a0;
- (BOOL)updateLanes:(id)a0;

@end
