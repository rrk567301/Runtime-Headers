@class CCContextDeviceGroup, CCLane, CCGazeBasedDimmingServiceDescriptor, CCSimpleRenderPass;
@protocol MTLComputePipelineState, MTLTexture;

@interface CCGazeBasedDimmingService : CCService {
    id<MTLComputePipelineState> _computePipelineTemporalFilterKernel;
    CCContextDeviceGroup *_deviceGroup;
    CCGazeBasedDimmingServiceDescriptor *_serviceDescriptor;
    BOOL _isVRRSupported;
    id<MTLTexture> _gazeBasedDimmingTemporalTexture;
    struct deque<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { struct __split_buffer<float * __attribute__((ext_vector_type(2))), std::allocator<float * __attribute__((ext_vector_type(2)))>> { void **__first_; void **__begin_; void **__end_; void **__cap_; } __map_; unsigned long long __start_; unsigned long long __size_; } _gazeUVQueue[2];
    CCLane *resourceGazeBasedDimming;
    CCSimpleRenderPass *_computeTemporalFilterPass;
    unsigned long long _requiredImageblockSampleLength;
}

+ (id)new;

- (BOOL)setDescriptor:(id)a0;
- (id)init;
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
