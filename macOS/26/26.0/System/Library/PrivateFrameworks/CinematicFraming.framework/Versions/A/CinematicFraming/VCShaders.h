@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface VCShaders : NSObject {
    id<MTLComputePipelineState> _kernels[2];
    FigMetalContext *_context;
}

- (id)initWithContext:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
