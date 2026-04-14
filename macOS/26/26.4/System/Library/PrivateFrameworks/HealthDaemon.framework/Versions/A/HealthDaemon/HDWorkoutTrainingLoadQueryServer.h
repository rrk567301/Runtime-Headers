@class _HKWorkoutTrainingLoadQueryServerConfiguration;

@interface HDWorkoutTrainingLoadQueryServer : HDQueryServer

@property (readonly, copy, nonatomic) _HKWorkoutTrainingLoadQueryServerConfiguration *trainingLoadQueryServerConfiguration;
@property (readonly, nonatomic) long long trainingLoadOptions;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (id)_queue_fetchTrainingLoadWithError:(id *)a0;

@end
