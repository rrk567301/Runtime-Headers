@class IASignalAnalyticsObject, IASAnalyzerErrors, IASImageGenerationCreationAnalyzer, IASImageGenerationVGFResultModel, NSNumber, NSDate;

@interface IASImageGenerationPreviewImageModel : NSObject

@property (weak, nonatomic) IASImageGenerationCreationAnalyzer *parentAnalyzer;
@property (nonatomic) unsigned long long previewIndex;
@property (nonatomic) unsigned long long generationStatus;
@property (retain, nonatomic) IASImageGenerationVGFResultModel *vgfResultModel;
@property (copy, nonatomic) NSNumber *tokenCount;
@property (nonatomic) unsigned long long numRetry;
@property (retain, nonatomic) NSDate *totalGenerationStartTime;
@property (nonatomic) double totalGenerationRuntime;
@property (retain, nonatomic) NSDate *rewriteStartTime;
@property (retain, nonatomic) IASignalAnalyticsObject *danglingRewriteStarted;
@property (nonatomic) double rewriteRuntime;
@property (retain, nonatomic) IASAnalyzerErrors *imageLevelErrors;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL isCopied;
@property (nonatomic) BOOL isInserted;
@property (nonatomic) BOOL isSaved;
@property (nonatomic) BOOL isShared;
@property (nonatomic) BOOL isViewed;

- (void).cxx_destruct;
- (void)enumerateAnalytics;
- (void)consumeSignal:(id)a0;
- (void)handlePreviewGeneratedSignal:(id)a0;
- (void)handlePreviewGenerationStartedSignal:(id)a0;
- (void)handlePreviewNotGeneratedSignal:(id)a0;
- (void)handleRetryRequestedSignal:(id)a0;
- (id)initWithParentAnalyzer:(id)a0 WithPreviewIndex:(unsigned long long)a1;
- (BOOL)isGenerating;
- (BOOL)isGeneratingOrPendingGenerated;
- (BOOL)isPendingGenerated;
- (void)resetVGFModel;
- (void)terminateWithGenerationStatus:(unsigned long long)a0 WithEndTimestamp:(id)a1;
- (unsigned long long)totalGenerationLatencyInMs;
- (unsigned long long)totalRewriteLatencyInMs;
- (void)updateRewriteRuntimeWithEndTimestamp:(id)a0;
- (void)updateTotalGenerationRuntimeWithEndTimestamp:(id)a0;

@end
