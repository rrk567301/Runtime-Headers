@protocol MTLComputePipelineState, MTLFunction;

@interface VFXMTLComputePipeline : NSObject {
    id<MTLComputePipelineState> _state;
    id<MTLFunction> _computeFunction;
}

- (void)dealloc;
- (id)init;
- (id)description;

@end
