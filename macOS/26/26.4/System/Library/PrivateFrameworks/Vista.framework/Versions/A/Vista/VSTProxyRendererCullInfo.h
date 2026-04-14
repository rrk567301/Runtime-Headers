@class VSTProxyRendererUpdateState;
@protocol MTLCommandBuffer;

@interface VSTProxyRendererCullInfo : NSObject

@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) VSTProxyRendererUpdateState *updateState;

- (void).cxx_destruct;

@end
