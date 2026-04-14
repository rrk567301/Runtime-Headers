@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (void).cxx_destruct;
- (id)persistentIdentifier;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (Class)coreMotionDatumClass;
- (id)collectedTypes;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;

@end
