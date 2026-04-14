@protocol MTLCommandQueue, MTLDevice;

@interface NUMetalRenderer : NURenderer

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;

- (id)name;
- (void).cxx_destruct;
- (void)_configureCommandQueue:(id)a0 withOptions:(id)a1;
- (id)imageForSurface:(id)a0 options:(id)a1;
- (id)initWithCIContext:(id)a0 priority:(long long)a1;
- (id)initWithMetalDevice:(id)a0 options:(id)a1;
- (id)renderDestinationForSurface:(id)a0;

@end
