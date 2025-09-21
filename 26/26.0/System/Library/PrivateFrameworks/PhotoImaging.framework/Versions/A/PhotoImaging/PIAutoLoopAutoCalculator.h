@interface PIAutoLoopAutoCalculator : NUAutoCalculator

@property (nonatomic) long long flavor;

+ (id)pipelineFilterForRevertedOriginal;
+ (id)pipelineFilterForUnRevertedOriginal;

- (id)initWithRequest:(id)a0;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (id)initWithMedia:(id)a0;

@end
