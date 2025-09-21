@class CCContextDeviceGroup, __cap_, NSArray, CCMultiLayerDisplayServiceDescriptor, __end_, MTLDepthStencilDescriptor, NSMutableArray, MTLRenderPassDescriptor, MTLStencilDescriptor;
@protocol MTLDepthStencilState;

@interface CCMultiLayerDisplayService : CCService {
    CCContextDeviceGroup *_deviceGroup;
    CCMultiLayerDisplayServiceDescriptor *_serviceDescriptor;
    NSMutableArray *keyMappingForLayer;
    id<MTLDepthStencilState> _depthState;
    BOOL _deviceSupportsVRR;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    MTLStencilDescriptor *_updateStencilDescriptor;
    MTLStencilDescriptor *_useStencilDescriptor;
    MTLDepthStencilDescriptor *_updateStencilNoDepthDescriptor;
    MTLDepthStencilDescriptor *_useStencilNoDepthDescriptor;
    id<MTLDepthStencilState> _updateStencil;
    id<MTLDepthStencilState> _useStencil;
    BOOL _isCIF10OutputEnabled;
}

@property (nonatomic) struct vector<id<MTLRenderPipelineState>, std::allocator<id<MTLRenderPipelineState>>> { __end_ **__begin_; __cap_ **x0; id *x1; } blendPipelines;
@property (retain, nonatomic) NSArray *internalServices;

+ (id)new;

- (BOOL)setDescriptor:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseBuffers;
- (void)addAllocations:(id)a0;
- (BOOL)preBuildService;
- (BOOL)buildWithDeviceGroup:(id)a0;
- (BOOL)reallocateBuffersWithDeviceGroup:(id)a0;
- (void)removeAllocations:(id)a0;
- (BOOL)updateLanes:(id)a0;

@end
