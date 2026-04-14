@class VSTProxyRendererTextureBounds, VSTVolumeData;

@interface VSTProxyRendererVolumeInfo : NSObject

@property (retain, nonatomic) VSTVolumeData *volumeData;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } volumeToWorld;
@property (retain, nonatomic) VSTProxyRendererTextureBounds *customColorTextureBounds;
@property (retain, nonatomic) VSTProxyRendererTextureBounds *customDepthTextureBounds;
@property (retain, nonatomic) VSTProxyRendererTextureBounds *customGridDepthTextureBounds;

- (void).cxx_destruct;
- (id)init;

@end
