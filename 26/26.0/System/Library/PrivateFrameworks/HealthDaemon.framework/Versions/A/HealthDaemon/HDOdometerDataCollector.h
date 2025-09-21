@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (id)persistentIdentifier;
- (id)collectedTypes;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (id)queue_newDataSource;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (Class)coreMotionDatumClass;
- (void).cxx_destruct;

@end
