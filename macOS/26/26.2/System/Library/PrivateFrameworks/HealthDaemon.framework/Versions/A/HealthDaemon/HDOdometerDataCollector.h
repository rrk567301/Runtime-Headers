@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (id)persistentIdentifier;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (Class)coreMotionDatumClass;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (id)collectedTypes;

@end
