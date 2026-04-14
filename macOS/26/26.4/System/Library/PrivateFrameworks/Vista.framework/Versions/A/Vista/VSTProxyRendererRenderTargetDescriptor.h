@class MTLTextureDescriptor, MTLRasterizationRateMapDescriptor;

@interface VSTProxyRendererRenderTargetDescriptor : NSObject

@property (retain, nonatomic) MTLTextureDescriptor *colorTextureDescriptor;
@property (retain, nonatomic) MTLTextureDescriptor *depthTextureDescriptor;
@property (retain, nonatomic) MTLTextureDescriptor *gridDepthTextureDescriptor;
@property (retain, nonatomic) MTLRasterizationRateMapDescriptor *rasterizationRateMapDescriptor;

- (void).cxx_destruct;

@end
