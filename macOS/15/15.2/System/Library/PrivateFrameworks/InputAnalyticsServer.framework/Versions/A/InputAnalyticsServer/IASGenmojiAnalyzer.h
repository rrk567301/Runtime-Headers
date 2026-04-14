@class IADefaultsDataStore, IASGenmojiAnalyzerCache;

@interface IASGenmojiAnalyzer : IASDailyGarbageCollectionAnalyzer

@property (retain, nonatomic) IASGenmojiAnalyzerCache *cache;
@property (nonatomic) BOOL fatalError;
@property (retain, nonatomic) IADefaultsDataStore *dataStore;
@property (nonatomic) BOOL sendToBiomeStream;
@property (nonatomic) unsigned long long state;

+ (id)stringForState:(unsigned long long)a0;
+ (void)periodic24HourEvents;
+ (id)getDaterangeObjectWithName:(id)a0 dataStore:(id)a1;
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
- (BOOL)checkForInteractionWithImage:(id)a0;
- (void)enumerateCurrentSessionAndInitializeSubsequentSession;
- (id)getFailureReasonString;
- (id)getSortedComponentsJoinedByStringForSet:(id)a0 separator:(id)a1;
- (void)handleDidPersonalizeStatusSignal:(id)a0 isInitialImage:(BOOL)a1;
- (void)handleImageGeneratedSignal:(id)a0;
- (BOOL)handleImageGenerationStartedSignal:(id)a0 isInitialImage:(BOOL)a1;
- (void)handleImageNotGenerated:(id)a0;
- (void)handlePersonIdentificationStarted1Signal:(id)a0;
- (void)logStateMachineError:(id)a0 signal:(id)a1 errorDescription:(id)a2;
- (void)logStateMachineMalformedSignalPayloadErrorForPayloadKey:(id)a0 payloadValue:(id)a1 signal:(id)a2;
- (void)publishAndResetOrTerminateBasedOnSignal:(id)a0;
- (void)recordCreationForToday;
- (void)recordEngagementForTodayWithDatastoreObjectName:(id)a0;
- (void)recordUsageForToday;
- (void)sendBiomeAnalytics;
- (unsigned long long)totalAllImagesModelLatencyInMs;
- (unsigned long long)totalInitialImageModelLatencyInMs;
- (void)updateAllImagesModelRuntimeWithEndTimestamp:(id)a0;
- (void)updateInitialImageModelRuntimeWithEndTimestamp:(id)a0;
- (BOOL)verifyConsistencyOfPromptAndCacheIfNecessary:(id)a0;

@end
