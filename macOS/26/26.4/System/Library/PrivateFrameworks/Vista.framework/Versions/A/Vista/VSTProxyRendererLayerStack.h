@class VSTProxyRendererRenderTarget, VSTProxyRendererLayerQuad, VSTProxyRendererTextureInfo, VSTProxyRendererProxyBuffers;

@interface VSTProxyRendererLayerStack : NSObject

@property (retain, nonatomic) VSTProxyRendererLayerQuad *quad;
@property (nonatomic) void /* unknown type, empty encoding */ viewportSize;
@property (nonatomic) void /* unknown type, empty encoding */ proxyRenderTargetOrigin;
@property (nonatomic) void /* unknown type, empty encoding */ proxyRenderTargetSize;
@property (nonatomic) void /* unknown type, empty encoding */ uvScale;
@property (retain, nonatomic) VSTProxyRendererRenderTarget *renderTarget;
@property (nonatomic) unsigned int renderTargetSliceIndex;
@property (nonatomic) unsigned int rasterizationRateMapSliceIndex;
@property (nonatomic) void /* unknown type, empty encoding */ viewportShift;
@property (retain, nonatomic) VSTProxyRendererProxyBuffers *proxyBuffers;
@property (retain, nonatomic) VSTProxyRendererTextureInfo *colorTextureInfo;
@property (retain, nonatomic) VSTProxyRendererTextureInfo *depthTextureInfo;
@property (retain, nonatomic) VSTProxyRendererTextureInfo *gridDepthTextureInfo;

- (void).cxx_destruct;
- (id)quads;

@end
