@class VSTProxyRendererUpdateState;
@protocol MTLCommandBuffer;

@interface VSTProxyRendererDrawInfo : NSObject

@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) VSTProxyRendererUpdateState *updateState;

- (void).cxx_destruct;

@end
