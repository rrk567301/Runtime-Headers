@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector

+ (BOOL)isNatalimeterAvailable;
+ (BOOL)supportsCollectionForProfile:(id)a0;
+ (BOOL)isCoreMotionCaloriePushModelEnabled;

- (id)persistentIdentifier;
- (id)initWithProfile:(id)a0;
- (Class)coreMotionDatumClass;
- (id)collectedTypes;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;

@end
