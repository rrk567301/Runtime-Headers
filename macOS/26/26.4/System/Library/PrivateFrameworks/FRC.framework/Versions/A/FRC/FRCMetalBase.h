@protocol MTLCommandQueue, MTLLibrary, MTLDevice;

@interface FRCMetalBase : NSObject {
    id<MTLLibrary> _mtlLibrary;
    id<MTLDevice> _device;
}

@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;

- (void).cxx_destruct;
- (id)init;
- (id)newVertexBuffer;
- (id)createKernel:(id)a0;
- (id)createKernel:(id)a0 constantValues:(id)a1;
- (id)createRenderKernel:(id)a0 renderTargetFormat:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (id)newTextureCoordinateBufferWithWidth:(double)a0 height:(double)a1;

@end
