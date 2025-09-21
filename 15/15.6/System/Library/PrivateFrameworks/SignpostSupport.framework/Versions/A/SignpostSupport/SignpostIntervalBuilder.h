@class SignpostCAInstrumentationProcessor, NSMutableDictionary, NSMapTable;

@interface SignpostIntervalBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *systemwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *processwideDictionary;
@property (readonly, nonatomic) NSMutableDictionary *threadwideDictionary;
@property (retain, nonatomic) NSMapTable *outstandingAnimationState;
@property (readonly, nonatomic) NSMutableDictionary *pidToProcessNameDictionary;
@property (nonatomic) unsigned long long totalSkyLightCompositeIntervalCount;
@property (nonatomic) char skyLightCompositeIntervalIsInFlight;
@property (nonatomic) unsigned long long previousMCT;
@property (readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor;
@property (nonatomic) char buildSkyLightAnimationCompositeIntervalTimelines;
@property (readonly, nonatomic) char hasOutstandingAnimations;

+ (id)_framerateCalculationAllowlist:(char)a0;
+ (char)_filterPassesRequiredSCForFramerate:(id)a0 includeMetal:(char)a1;
+ (id)_metalCalculationAllowlist;

- (id)init;
- (void).cxx_destruct;
- (void)dropAccumulatedState;
- (id)matchingEventForEvent:(id)a0 removeIfFound:(char)a1;
- (char)timestampIndicatesDeviceReboot:(unsigned long long)a0;
- (id)_animationWithBegin:(id)a0 endEvent:(id)a1 firstFrameGraceTimeController:(id)a2;
- (void)_cleanupStateForBeginEvent:(id)a0;
- (char)_handleCommonSpecialIntervals:(id)a0;
- (char)_handleMacOsSpecialIntervals:(id)a0;
- (void)_initializeMapsIfNecessary;
- (id)_matchingEventForEvent:(id)a0 removeIfFound:(char)a1;
- (void)_processSkyLightCompositeInterval:(id)a0;
- (void)_startTrackingAnimationWithBeginEvent:(id)a0;
- (char)_trackBegin:(id)a0;
- (void)collectPIDToProcessNameForEvent:(id)a0;
- (id)doneProcessingWithIntervalBuilderSource:(id)a0;
- (char)isMetadataSubsystem:(id)a0 category:(id)a1;
- (char)isSkyLightCompositeLoopSubsystem:(id)a0 category:(id)a1;
- (char)processBeginEvent:(id)a0;
- (id)processBeginEvent:(id)a0 endEvent:(id)a1 intervalBuilderSource:(id)a2 isAnimation:(char *)a3;
- (void)processEmittedEvent:(id)a0;
- (id)processEndEvent:(id)a0 intervalBuilderSource:(id)a1 isAnimation:(char *)a2;
- (void)runSynchronized:(id /* block */)a0;
- (char)signpostIsAnimationMetadata:(id)a0;
- (char)signpostIsSkyLightCompositeLoop:(id)a0;

@end
