@protocol MTLCommandQueue, MTLDevice, MTLCommandBuffer;

@interface VCPCNNMetalContext : NSObject

@property (retain) id<MTLDevice> device;
@property (retain) id<MTLCommandQueue> commandQueue;
@property (retain) id<MTLCommandBuffer> commandBuffer;

+ (char)supportGPU;
+ (char)supportVectorForward;

- (void).cxx_destruct;
- (int)execute;
- (id)initNewContext:(char)a0;

@end
