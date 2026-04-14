@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (id)persistentIdentifier;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)collectedTypes;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (void).cxx_destruct;
- (id)queue_newDataSource;
- (Class)coreMotionDatumClass;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;

@end
