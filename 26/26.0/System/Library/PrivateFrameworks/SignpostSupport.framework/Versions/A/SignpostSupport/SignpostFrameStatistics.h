@class NSString, SignpostSupportValueStats;

@interface SignpostFrameStatistics : NSObject <SignpostJSONRepresentable>

@property (readonly, nonatomic) SignpostSupportValueStats *updateTime;
@property (readonly, nonatomic) SignpostSupportValueStats *renderTime;
@property (readonly, nonatomic) SignpostSupportValueStats *gpuTime;
@property (readonly, nonatomic) SignpostSupportValueStats *renderAndGPUTime;
@property (readonly, nonatomic) SignpostSupportValueStats *offscreenPassCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)jsonDescription:(unsigned long long)a0;

@end
