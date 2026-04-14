@interface IASImagePlaygroundUsageAnalyzer : IASAnalyzer

+ (id)addCaptionSignals;
+ (id)copySignals;
+ (id)createdSignals;
+ (id)deleteSignals;
+ (id)duplicateSignals;
+ (id)editSignals;
+ (id)insertSignals;
+ (BOOL)isUsageSignal:(id)a0;
+ (id)shareSignals;

- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBeGarbageCollected;

@end
