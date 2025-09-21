@interface _TUIGeneratorResultAccumulatorPolicy : NSObject

@property (nonatomic) double accumulatorTimeout;
@property (nonatomic) double delayedGenerationInterval;

+ (id)defaultPolicy;
+ (id)policyForContext:(id)a0 enabledCandidateSources:(id)a1;

- (id)init;

@end
