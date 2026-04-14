@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface Correlation : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _mtlLibrary;
    id<MTLComputePipelineState> _correlationKernel;
    id<MTLComputePipelineState> _correlationWithConcatKernel;
    id<MTLComputePipelineState> _correlationSIMDKernel;
    id<MTLComputePipelineState> _correlationWithConcatSIMDKernel;
    id<MTLComputePipelineState> _correlationWithScaleSIMDKernel;
    id<MTLComputePipelineState> _correlation5x5SIMDKernel;
    BOOL _interleaved;
}

@property (nonatomic) BOOL useSIMDShuffle;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setupMetal;
- (void)calcCorrelation:(id)a0 with:(id)a1 output:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 destination:(id)a3;
- (id)initWithDevice:(id)a0 interleaved:(BOOL)a1;
- (void)encode5x5ToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 flow:(id)a3 destination:(id)a4;
- (void)encodeToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 destination:(id)a3 scaleInput:(BOOL)a4;

@end
