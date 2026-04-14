@protocol MTLTexture, MTLRasterizationRateMap;

@interface VSTProxyRendererRenderTarget : NSObject

@property (retain, nonatomic) id<MTLTexture> colorTexture;
@property (retain, nonatomic) id<MTLTexture> depthTexture;
@property (retain, nonatomic) id<MTLTexture> gridDepthTexture;
@property (retain, nonatomic) id<MTLRasterizationRateMap> rasterizationRateMap;

- (void).cxx_destruct;

@end
