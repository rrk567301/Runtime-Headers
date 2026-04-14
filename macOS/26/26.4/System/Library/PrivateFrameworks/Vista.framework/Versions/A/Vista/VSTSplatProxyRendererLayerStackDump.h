@class VSTSplatProxyRendererRenderTargetDump, VSTSplatProxyRendererTextureInfoDump, VSTSplatProxyRendererLayerQuadDump, VSTSplatProxyRendererProxyBuffersDump;

@interface VSTSplatProxyRendererLayerStackDump : VSTSplatVersionDump

@property (retain, nonatomic) VSTSplatProxyRendererLayerQuadDump *quad;
@property (nonatomic) void /* unknown type, empty encoding */ uvScale;
@property (nonatomic) void /* unknown type, empty encoding */ viewportSize;
@property (nonatomic) void /* unknown type, empty encoding */ proxyRenderTargetOrigin;
@property (nonatomic) void /* unknown type, empty encoding */ proxyRenderTargetSize;
@property (nonatomic) void /* unknown type, empty encoding */ viewportShift;
@property (retain, nonatomic) VSTSplatProxyRendererRenderTargetDump *renderTarget;
@property (nonatomic) unsigned long long renderTargetSliceIndex;
@property (nonatomic) unsigned long long rasterizationRateMapSliceIndex;
@property (retain, nonatomic) VSTSplatProxyRendererProxyBuffersDump *proxyBuffers;
@property (retain, nonatomic) VSTSplatProxyRendererTextureInfoDump *colorTextureInfo;
@property (retain, nonatomic) VSTSplatProxyRendererTextureInfoDump *depthTextureInfo;
@property (retain, nonatomic) VSTSplatProxyRendererTextureInfoDump *gridDepthTextureInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
