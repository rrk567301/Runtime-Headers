@class _PASQueueLock, NSString, NSArray, ATXModeScheduler, NSObject, ATXConfiguredModeService;
@protocol OS_dispatch_queue, ATXModeClassifierClientModelDelegate;

@interface ATXModeHeuristicClassifier : NSObject <ATXModeFeaturizerDelegate, ATXModeClassifierClientModel> {
    NSObject<OS_dispatch_queue> *_queue;
    double _minUpdateInterval;
    NSArray *_featurizers;
    ATXModeScheduler *_scheduler;
    _PASQueueLock *_lock;
    ATXConfiguredModeService *_modeService;
}

@property (weak, nonatomic) id<ATXModeClassifierClientModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)currentMode;
- (void)_requestFeaturesFromAllFeaturizersAndUpdate;
- (void)_updateWithGuardedData:(id)a0;
- (id)_serializedTriggersForMode:(int)a0 fromAggregateFeatures:(id)a1;
- (void)featurizer:(id)a0 didUpdateFeatures:(id)a1;
- (void)update;
- (void)updateWithFeatureSet:(id)a0;
- (id)init;
- (id)initWithFeaturizers:(id)a0 minUpdateInterval:(double)a1 configuredModeService:(id)a2;
- (int)_originForMode:(int)a0 fromAggregateFeatures:(id)a1;
- (void)currentModeUUID:(id *)a0 userModeName:(id *)a1 modeType:(int *)a2 confidenceScore:(double *)a3 origin:(int *)a4 originBundleId:(id *)a5 serializedTrigger:(id *)a6 allowsSmartEntry:(BOOL *)a7;
- (BOOL)_isUserWorkingFromHomeWithAggregateFeatures:(id)a0;
- (void).cxx_destruct;
- (void)updateWithFeatureSet:(id)a0 immediately:(BOOL)a1 reply:(id /* block */)a2;
- (int)_predictModeWithFeature:(id)a0;
- (id)_triggersForMode:(int)a0 fromAggregateFeatures:(id)a1;
- (void)dealloc;
- (void)reset;
- (void)_updateIfNeededWithGuardedData:(id)a0;
- (id)currentFeaturesInDictionary;
- (id)initWithConfiguredModeService:(id)a0 locationManager:(id)a1 miloProvider:(id)a2;
- (void)_currentModeUUID:(id *)a0 userModeName:(id *)a1 modeType:(int *)a2 confidenceScore:(double *)a3 origin:(int *)a4 originBundleId:(id *)a5 serializedTrigger:(id *)a6 allowsSmartEntry:(BOOL *)a7 guardedData:(id)a8;
- (double)_confidenceScoreForMode:(int)a0 fromAggregateFeatures:(id)a1;

@end
