@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (id)queue_newDataSource;
- (id)collectedTypes;
- (id)persistentIdentifier;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (Class)coreMotionDatumClass;

@end
