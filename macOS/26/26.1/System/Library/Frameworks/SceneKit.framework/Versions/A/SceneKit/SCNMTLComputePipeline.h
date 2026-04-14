@protocol MTLComputePipelineState, MTLFunction;

@interface SCNMTLComputePipeline : NSObject {
    id<MTLComputePipelineState> _state;
    id<MTLFunction> _computeFunction;
}

- (id)description;
- (void)dealloc;
- (id)init;

@end
