@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface FigDepthValueMultiplier : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _pipelineState;
}

+ (void)initialize;

- (void).cxx_destruct;
- (int)_initShaders;
- (int)depthValueInputPixelBuffer:(struct __CVBuffer { } *)a0 bias:(float)a1 scaleFactor:(float)a2;
- (id)initWithMetalContext:(id)a0;

@end
