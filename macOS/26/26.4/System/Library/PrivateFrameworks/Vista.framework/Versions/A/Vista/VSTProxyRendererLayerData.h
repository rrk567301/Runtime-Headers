@class NSArray, VSTProxyRendererFrameStats, VSTProxyRendererUpdateState;

@interface VSTProxyRendererLayerData : NSObject

@property (retain, nonatomic) NSArray *proxies;
@property (retain, nonatomic) VSTProxyRendererFrameStats *stats;
@property (retain, nonatomic) VSTProxyRendererUpdateState *updateState;

- (void).cxx_destruct;

@end
