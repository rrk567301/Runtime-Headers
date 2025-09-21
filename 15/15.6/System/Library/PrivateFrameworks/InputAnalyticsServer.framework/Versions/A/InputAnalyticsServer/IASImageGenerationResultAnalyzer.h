@class BMGeneratedImageFailureReason;

@interface IASImageGenerationResultAnalyzer : IASAnalyzer

@property (nonatomic) char sendToBiomeStream;
@property (retain, nonatomic) BMGeneratedImageFailureReason *biomeGeneratedImageFailureReason;

- (id)description;
- (void).cxx_destruct;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (void)sendBiomeAnalyticsForSignal:(id)a0;
- (char)shouldBeGarbageCollected;

@end
