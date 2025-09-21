@class SignpostFrameLifetimeInterval, NSMutableDictionary, SignpostEvent, NSMutableArray;

@interface SignpostCAInstrumentationProcessor : NSObject

@property (readonly, nonatomic) NSMutableDictionary *frameSeedToAccumulatedStateDict;
@property (readonly, nonatomic) NSMutableDictionary *frameSeedToAccumulatedRenderStateDict;
@property (readonly, nonatomic) NSMutableDictionary *queueIDToSurfaceIDToClientDrawableIntervalDict;
@property (readonly, nonatomic) NSMutableArray *queueCommitIntervals;
@property (readonly, nonatomic) NSMutableArray *queueUpdateIntervals;
@property (retain, nonatomic) SignpostFrameLifetimeInterval *previousFrameLifetime;
@property (retain, nonatomic) SignpostEvent *curLongFrameLifetimeBegin;
@property (retain, nonatomic) SignpostEvent *curFrameLifetimeBegin;
@property (nonatomic) unsigned int curFrameSeed;
@property (nonatomic) BOOL isConciseFormat;
@property (copy, nonatomic) id /* block */ updateIntervalBlock;
@property (copy, nonatomic) id /* block */ commitIntervalBlock;
@property (copy, nonatomic) id /* block */ clientDrawableIntervalBlock;
@property (copy, nonatomic) id /* block */ transactionLifetimeBlock;
@property (copy, nonatomic) id /* block */ frameLatencyBlock;
@property (copy, nonatomic) id /* block */ hidLatencyBlock;
@property (copy, nonatomic) id /* block */ renderBlock;
@property (copy, nonatomic) id /* block */ gpuBlock;
@property (copy, nonatomic) id /* block */ frameLifetimeBlock;
@property (copy, nonatomic) id /* block */ contextInfoBlock;
@property (copy, nonatomic) id /* block */ imageQueueSampleEventBlock;

+ (id)_hitchesSubsystemCategoryArrayForPlatform:(unsigned long long)a0;
+ (void)addNeededMetalSCToAllowlist:(id)a0;
+ (void)addNeededSCToAllowlist:(id)a0;
+ (void)addNeededSCToAllowlist:(id)a0 platform:(unsigned long long)a1;
+ (void)addNeededSCToWhitelist:(id)a0;
+ (BOOL)filterPassesRequiredSCForCAInstrumentation:(id)a0;
+ (BOOL)filterPassesRequiredSCForCAInstrumentation:(id)a0 platform:(unsigned long long)a1;
+ (BOOL)filterPassesRequiredSCForCAMetalInstrumentation:(id)a0;
+ (id)hitchesAllowlistFilterForPlatform:(unsigned long long)a0;

- (void)_handleClientDrawableInterval:(id)a0;
- (BOOL)handleSignpostInterval:(id)a0;
- (id)_updatesMatchingFrameLifetime:(id)a0;
- (id)_stateForFrameSeed:(unsigned int)a0;
- (void)_removeOrphansFromQueue:(id)a0 preceedingMCT:(unsigned long long)a1 timebaseRatio:(double)a2;
- (id)newConfiguredExtractor;
- (void)_handleUpdateSequenceInterval:(id)a0;
- (void)_handleRenderInterval:(id)a0;
- (void)handleDeviceReboot;
- (void)_handleContextInfo:(id)a0;
- (id)init;
- (void)handleSignpostIntervalBegin:(id)a0;
- (void)_handleFrameLifetimeBegin:(id)a0 isLong:(BOOL)a1;
- (id)_renderStateForFrameSeed:(unsigned int)a0;
- (void)_handleImageQueueSampleEvent:(id)a0;
- (void)_handleFrameLatencyInterval:(id)a0;
- (void)_handleFrameLifetimeInterval:(id)a0;
- (void)_handleCommitInterval:(id)a0;
- (void)_cleanupStateWithSeed:(unsigned int)a0;
- (BOOL)handleSignpostEvent:(id)a0;
- (void).cxx_destruct;

@end
