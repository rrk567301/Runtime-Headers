@class CIContext;
@protocol MTLBuffer, MTLDevice, MTLCommandQueue, MTLComputePipelineState;

@interface FastMetalColorSampler : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLComputePipelineState> pipelineState;
@property (retain, nonatomic) CIContext *ciContext;
@property (retain, nonatomic) id<MTLBuffer> reusableOutputBuffer;
@property (nonatomic) unsigned long long bufferCapacity;

+ (id)sharedPipelineStateForDevice:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)createTextureFromCIImage:(id)a0;
- (id)sampleColors:(id)a0 sampleCount:(unsigned long long)a1;
- (void)setupMetal;

@end
