@protocol MTLBuffer;

@interface VSTProxyRendererProxyBuffers : NSObject

@property (retain, nonatomic) id<MTLBuffer> proxyPositionsBuffer;
@property (retain, nonatomic) id<MTLBuffer> proxyUVsBuffer;

- (void).cxx_destruct;

@end
