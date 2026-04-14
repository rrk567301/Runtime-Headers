@class NSDate;

@interface IASDailyGarbageCollectionAnalyzer : IASAnalyzer

@property (copy, nonatomic) NSDate *dateOfLastAction;
@property (copy, nonatomic) NSDate *lastConsumedSignalTimestamp;

- (void).cxx_destruct;
- (BOOL)asynchronousSignalIsConsistent:(id)a0;
- (void)consumeAction:(id)a0;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBeGarbageCollected;

@end
