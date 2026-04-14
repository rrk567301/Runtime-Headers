@class NSString, NSDate;

@interface IASCandidateBarAnalyzer : IASDailyGarbageCollectionStateMachineAnalyzer

@property (retain, nonatomic) NSDate *shownTimestamp;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL isEngaged;
@property (nonatomic) unsigned long long shownDuration;

+ (id)stringForState:(unsigned long long)a0;

- (id)stringForState:(unsigned long long)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)description;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBeGarbageCollected;
- (unsigned long long)getShownDurationMsWithEndTimestamp:(id)a0;
- (BOOL)isValidCandidateBarSignal:(id)a0;
- (void)logStateMachineError:(id)a0 signal:(id)a1 errorDescription:(id)a2;
- (void)processBundleId:(id)a0;
- (void)processSignalAfterShown:(id)a0 withExpectedActionType:(unsigned long long)a1;

@end
