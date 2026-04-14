@protocol MTLComputePipelineState, MTLFunction;

@interface VFXMTLComputePipeline : NSObject {
    id<MTLComputePipelineState> _state;
    id<MTLFunction> _computeFunction;
}

- (id)description;
- (id)init;
- (void)dealloc;

@end
