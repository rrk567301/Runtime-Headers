@class IADefaultsDataStore, NSString, NSUUID, IASImageGenerationCreationAnalyzerCache, BMGeneratedImageFailureReason, BMGeneratedImageUserInteraction;

@interface IASImageGenerationCreationAnalyzer : IASDailyGarbageCollectionStateMachineAnalyzer

@property (retain, nonatomic) IASImageGenerationCreationAnalyzerCache *cache;
@property (nonatomic) BOOL fatalError;
@property (retain, nonatomic) IADefaultsDataStore *dataStore;
@property (nonatomic) BOOL sendToBiomeStream;
@property (nonatomic) unsigned long long montaraAccount;
@property (nonatomic) unsigned long long montaraEnablement;
@property (nonatomic) NSString *inputOutputCategory;
@property (nonatomic) NSString *errorSubcategory;
@property (retain, nonatomic) BMGeneratedImageUserInteraction *biomeGeneratedImageUserInteraction;
@property (retain, nonatomic) BMGeneratedImageFailureReason *biomeGeneratedImageFailureReason;
@property (copy, nonatomic) NSString *currentEventName;
@property (copy, nonatomic) NSUUID *sessionID;

+ (id)stringForState:(unsigned long long)a0;
+ (void)periodic24HourEvents;
+ (id)getDaterangeObjectWithName:(id)a0 dataStore:(id)a1;
+ (BOOL)montaraEnabled;
+ (void)periodic24HourEventsWithModelAvailability:(unsigned long long)a0 chatGPTAccount:(unsigned long long)a1 dataStore:(id)a2 eventHandler:(id /* block */)a3;
+ (id)postfixForFeature:(unsigned long long)a0;

- (void)reset;
- (id)description;
- (id)stringForState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)acceptsSpecialCaseSignal:(id)a0;
- (void)addNewImage;
- (void)attemptToCacheBundleId:(id)a0;
- (void)cacheIngredientCounts:(id)a0;
- (id)getNameOfDaterangeObjectWithPrefix:(id)a0;
- (void)handleCreationStartedSignal:(id)a0;
- (void)handleImageIndexedSignal:(id)a0 onValidIndex:(id /* block */)a1;
- (BOOL)isGenmojiSession;
- (void)logStateMachineError:(id)a0 signal:(id)a1 errorDescription:(id)a2;
- (void)logStateMachineMalformedSignalPayloadErrorForPayloadKey:(id)a0 payloadValue:(id)a1 signal:(id)a2;
- (void)recordCreationForToday;
- (void)recordCreationUISeenForToday;
- (void)recordEngagementForTodayWithDatastoreObjectName:(id)a0;
- (void)recordUsageForToday;
- (void)sendBiomeAnalytics;
- (void)sendSignal:(id)a0 toFirstImageMatchingFilter:(id /* block */)a1 withErrorCode:(id)a2;
- (void)sendSignalToAllGeneratingPreviewImageModels:(id)a0;
- (void)sendSignalToAllPreviewImageModels:(id)a0;
- (void)sendSignalToCurrentPreviewImageModel:(id)a0;
- (unsigned long long)totalCreationLatencyInMs;
- (void)updateTotalCreationModelRuntimeWithEndTimestamp:(id)a0;

@end
