@class HDDataCollectorMultiplexer, NSString, HDProfile, NSSet, NSMutableDictionary, NSObject, HKDataCollectorState;
@protocol OS_dispatch_queue, HDCoreMotionDataSource;

@interface HDCoreMotionDataCollector : NSObject <HDDiagnosticObject, HDDataCollector> {
    NSSet *_quantityTypes;
    HDDataCollectorMultiplexer *_multiplexer;
    NSMutableDictionary *_lastCMDatumByType;
    id<HDCoreMotionDataSource> _dataSource;
    HKDataCollectorState *_state;
    long long _errorCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)persistentIdentifier;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)collectedTypes;
- (id)identifierForDataAggregator:(id)a0;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)queue_newDataSource;
- (Class)coreMotionDatumClass;
- (id)sourceForDataAggregator:(id)a0;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (void)dealloc;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (void)_accessToFitnessDataDidChange:(id)a0;
- (void)queue_recomputeCurrentState;
- (void)registerWithAggregators;
- (void)unitTest_retriesExhausted;
- (void)unitTest_unregisterWithAggregators;

@end
