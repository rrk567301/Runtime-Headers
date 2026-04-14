@class SignpostCAInstrumentationProcessor, NSMutableDictionary, NSMapTable;

@interface SignpostIntervalBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *systemwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *processwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *threadwideDictionary;
@property (retain, nonatomic) NSMapTable *outstandingAnimationState;
@property (readonly, nonatomic) NSMutableDictionary *pidToProcessNameDictionary;
@property (nonatomic) unsigned long long totalSkyLightCompositeIntervalCount;
@property (nonatomic) BOOL skyLightCompositeIntervalIsInFlight;
@property (nonatomic) unsigned long long previousMCT;
@property (readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (nonatomic) BOOL isProcessingSplitAnimations;
@property (nonatomic) double maximumAnimationIntervalProcessingDuration;
@property (nonatomic) BOOL buildSkyLightAnimationCompositeIntervalTimelines;
@property (readonly, nonatomic) BOOL hasOutstandingAnimations;

+ (BOOL)_filterPassesRequiredSCForFramerate:(id)a0 includeMetal:(BOOL)a1 platform:(unsigned long long)a2;
+ (id)_metalCalculationAllowlist;
+ (id)_framerateCalculationAllowlist:(BOOL)a0 platform:(unsigned long long)a1;

- (BOOL)signpostIsAnimationMetadata:(id)a0;
- (BOOL)timestampIndicatesDeviceReboot:(unsigned long long)a0;
- (id)_matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (BOOL)isMetadataSubsystem:(id)a0 category:(id)a1;
- (BOOL)processBeginEvent:(id)a0 intervalBuilderSource:(id)a1;
- (void)_splitAnimationsIfNeededWithEvent:(id)a0 intervalBuilderSource:(id)a1;
- (void)processEmittedEvent:(id)a0;
- (BOOL)_handleCommonSpecialIntervals:(id)a0;
- (BOOL)signpostIsSkyLightCompositeLoop:(id)a0;
- (void)collectPIDToProcessNameForEvent:(id)a0;
- (void)_processSkyLightCompositeInterval:(id)a0;
- (BOOL)processBeginEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSkyLightCompositeLoopSubsystem:(id)a0 category:(id)a1;
- (void)processEmittedEvent:(id)a0 intervalBuilderSource:(id)a1;
- (BOOL)_trackBegin:(id)a0;
- (id)doneProcessingWithIntervalBuilderSource:(id)a0;
- (void)_startTrackingAnimationWithBeginEvent:(id)a0;
- (void)dropAccumulatedState;
- (id)matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (void)runSynchronized:(id /* block */)a0;
- (void)_cleanupStateForBeginEvent:(id)a0;
- (id)_animationWithBegin:(id)a0 endEvent:(id)a1;
- (id)processEndEvent:(id)a0 intervalBuilderSource:(id)a1 isAnimation:(BOOL *)a2;
- (id)init;
- (BOOL)_handleMacOsSpecialIntervals:(id)a0;
- (id)processBeginEvent:(id)a0 endEvent:(id)a1 intervalBuilderSource:(id)a2 isAnimation:(BOOL *)a3;
- (void)_initializeMapsIfNecessary;
- (void)_splitAnimationWithBeginEvent:(id)a0 atEvent:(id)a1 intervalBuilderSource:(id)a2;

@end
