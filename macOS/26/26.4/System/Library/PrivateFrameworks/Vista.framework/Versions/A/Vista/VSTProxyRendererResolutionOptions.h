@interface VSTProxyRendererResolutionOptions : NSObject

@property (nonatomic) float fovPixelsPerDegree;
@property (nonatomic) void /* unknown type, empty encoding */ minViewportSize;
@property (nonatomic) void /* unknown type, empty encoding */ maxViewportSize;
@property (nonatomic) long long gridTileSize;
@property (nonatomic) BOOL useTightlyFittingRenderTargets;

- (id)init;

@end
