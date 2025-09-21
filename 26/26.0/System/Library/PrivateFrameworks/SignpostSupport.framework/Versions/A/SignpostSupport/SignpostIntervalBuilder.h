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
@property (nonatomic) BOOL buildSkyLightAnimationCompositeIntervalTimelines;
@property (readonly, nonatomic) BOOL hasOutstandingAnimations;

+ (id)_framerateCalculationAllowlist:(BOOL)a0 platform:(unsigned long long)a1;
+ (BOOL)_filterPassesRequiredSCForFramerate:(id)a0 includeMetal:(BOOL)a1 platform:(unsigned long long)a2;
+ (id)_metalCalculationAllowlist;

- (void)collectPIDToProcessNameForEvent:(id)a0;
- (BOOL)_trackBegin:(id)a0;
- (id)_matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (void)_cleanupStateForBeginEvent:(id)a0;
- (id)doneProcessingWithIntervalBuilderSource:(id)a0;
- (id)processEndEvent:(id)a0 intervalBuilderSource:(id)a1 isAnimation:(BOOL *)a2;
- (BOOL)processBeginEvent:(id)a0;
- (void)dropAccumulatedState;
- (id)processBeginEvent:(id)a0 endEvent:(id)a1 intervalBuilderSource:(id)a2 isAnimation:(BOOL *)a3;
- (BOOL)isMetadataSubsystem:(id)a0 category:(id)a1;
- (void)_initializeMapsIfNecessary;
- (id)init;
- (BOOL)signpostIsAnimationMetadata:(id)a0;
- (void)_processSkyLightCompositeInterval:(id)a0;
- (BOOL)timestampIndicatesDeviceReboot:(unsigned long long)a0;
- (id)matchingEventForEvent:(id)a0 removeIfFound:(BOOL)a1;
- (BOOL)isSkyLightCompositeLoopSubsystem:(id)a0 category:(id)a1;
- (BOOL)_handleMacOsSpecialIntervals:(id)a0;
- (BOOL)_handleCommonSpecialIntervals:(id)a0;
- (BOOL)signpostIsSkyLightCompositeLoop:(id)a0;
- (void)_startTrackingAnimationWithBeginEvent:(id)a0;
- (void)processEmittedEvent:(id)a0;
- (id)_animationWithBegin:(id)a0 endEvent:(id)a1;
- (void).cxx_destruct;
- (void)runSynchronized:(id /* block */)a0;

@end
