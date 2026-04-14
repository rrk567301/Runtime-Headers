@class IASImageGenerationPreviewImageModel, IASAnalyzerErrors, IASImageGenerationCreationAnalyzer, NSDate;

@interface IASImageGenerationVGFResultModel : NSObject

@property (weak, nonatomic) IASImageGenerationCreationAnalyzer *parentAnalyzer;
@property (weak, nonatomic) IASImageGenerationPreviewImageModel *parentImage;
@property (retain, nonatomic) NSDate *vgfStartTime;
@property (nonatomic) double vgfRuntime;
@property (nonatomic) BOOL foundVGFLatency;
@property (retain, nonatomic) IASAnalyzerErrors *resultLevelErrors;

- (void).cxx_destruct;
- (void)consumeSignal:(id)a0;
- (void)enumerateAnalyticsForSignal:(id)a0;
- (id)initWithParentAnalyzer:(id)a0 WithParentImage:(id)a1;
- (void)sendBiomeAnalyticsForSignal:(id)a0;
- (unsigned long long)totalVgfLatencyInMs;
- (void)updateVGFRuntimeWithEndTimestamp:(id)a0;

@end
