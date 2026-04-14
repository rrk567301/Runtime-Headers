@class _HKWorkoutTrainingLoadCollectionQueryServerConfiguration;

@interface HDWorkoutTrainingLoadCollectionQueryServer : HDQueryServer

@property (readonly, copy, nonatomic) _HKWorkoutTrainingLoadCollectionQueryServerConfiguration *trainingLoadCollectionQueryServerConfiguration;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)_queue_start;
- (id)_queue_fetchTrainingLoadCollectionWithError:(id *)a0;

@end
