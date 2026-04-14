@class IASWritingToolsAnalyzerCache, IADefaultsDataStore;

@interface IASWritingToolsAnalyzer : IASDailyGarbageCollectionAnalyzer

@property (retain, nonatomic) IASWritingToolsAnalyzerCache *cache;
@property (nonatomic) BOOL fatalError;
@property (retain, nonatomic) IADefaultsDataStore *dataStore;
@property (nonatomic) unsigned long long state;

+ (id)stringForState:(unsigned long long)a0;
+ (void)periodic24HourEvents;
+ (void)periodic24HourEventsWithModelAvailability:(unsigned long long)a0 dataStore:(id)a1 eventHandler:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (BOOL)shouldBeGarbageCollected;
- (void)cacheActionSelectedPayload:(id)a0;
- (void)cacheResultTextIfNonNil:(id)a0;
- (BOOL)checkAndLogErrorForFeatureDetailsForSignal:(id)a0 updateFeatureDetailsOnMismatch:(BOOL)a1;
- (id)filterWritingToolsUIBundleID:(id)a0;
- (void)handleCommonResultsGeneratedOrFailedActionForSignal:(id)a0;
- (void)handlePanelAppearedSignal:(id)a0;
- (void)handleResultsOfferedSignal:(id)a0;
- (void)logStateMachineError:(id)a0 signal:(id)a1 errorDescription:(id)a2;
- (void)logStateMachineMalformedSignalPayloadErrorForPayloadKey:(id)a0 payloadValue:(id)a1 signal:(id)a2;
- (id)noSuggestionReason;
- (void)recordEngagementForToday;
- (unsigned long long)totalModelLatencyInMs;
- (unsigned long long)totalReviewTimeInS;
- (void)updateModelRuntimeWithEndTimestamp:(id)a0;
- (void)updateReviewTimeWithEndTimestamp:(id)a0;
- (BOOL)willAcceptAction:(id)a0;

@end
