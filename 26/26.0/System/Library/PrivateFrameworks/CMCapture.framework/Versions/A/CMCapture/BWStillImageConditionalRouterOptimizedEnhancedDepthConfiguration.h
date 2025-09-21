@interface BWStillImageConditionalRouterOptimizedEnhancedDepthConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int mainImageOutputIndex;
@property (readonly, nonatomic) unsigned int deepFusionImageOutputIndex;

+ (id)optimizedEnhancedDepthConfiguration;

- (id)init;

@end
