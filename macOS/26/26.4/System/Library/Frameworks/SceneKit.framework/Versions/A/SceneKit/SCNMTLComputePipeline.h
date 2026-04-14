@protocol MTLComputePipelineState, MTLFunction;

@interface SCNMTLComputePipeline : NSObject {
    id<MTLComputePipelineState> _state;
    id<MTLFunction> _computeFunction;
}

- (id)init;
- (id)description;
- (void)dealloc;

@end
