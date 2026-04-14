@class VSTProxyRendererTextureBounds;

@interface VSTProxyRendererVolumeBounds : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ boxMin;
@property (nonatomic) void /* unknown type, empty encoding */ boxMax;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } volumeToWorld;
@property (retain, nonatomic) VSTProxyRendererTextureBounds *customColorTextureBounds;
@property (retain, nonatomic) VSTProxyRendererTextureBounds *customDepthTextureBounds;
@property (retain, nonatomic) VSTProxyRendererTextureBounds *customGridDepthTextureBounds;

- (void).cxx_destruct;
- (id)initWithVolumeInfo:(id)a0;

@end
