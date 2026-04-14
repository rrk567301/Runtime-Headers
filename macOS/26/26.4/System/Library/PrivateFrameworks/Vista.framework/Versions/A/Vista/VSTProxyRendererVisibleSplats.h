@protocol MTLBuffer;

@interface VSTProxyRendererVisibleSplats : NSObject

@property (retain, nonatomic) id<MTLBuffer> visibleSplatIndicesBuffer;
@property (retain, nonatomic) id<MTLBuffer> maxVisibilityContributionBuffer;

- (void).cxx_destruct;

@end
