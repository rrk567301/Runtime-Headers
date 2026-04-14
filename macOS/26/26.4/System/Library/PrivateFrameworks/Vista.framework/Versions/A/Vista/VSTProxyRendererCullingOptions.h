@interface VSTProxyRendererCullingOptions : NSObject

@property (nonatomic) BOOL useNormalCulling;
@property (nonatomic) BOOL useBoundingBoxCulling;
@property (nonatomic) BOOL usePreciseFrustumCulling;

- (id)init;

@end
