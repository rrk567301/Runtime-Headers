@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (id)persistentIdentifier;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (Class)coreMotionDatumClass;
- (void).cxx_destruct;
- (id)collectedTypes;

@end
