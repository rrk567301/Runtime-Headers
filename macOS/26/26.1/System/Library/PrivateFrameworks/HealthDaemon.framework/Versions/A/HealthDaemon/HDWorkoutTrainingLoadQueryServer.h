@class _HKWorkoutTrainingLoadQueryServerConfiguration;

@interface HDWorkoutTrainingLoadQueryServer : HDQueryServer

@property (readonly, copy, nonatomic) _HKWorkoutTrainingLoadQueryServerConfiguration *trainingLoadQueryServerConfiguration;
@property (readonly, nonatomic) long long trainingLoadOptions;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)_queue_start;
- (id)_queue_fetchTrainingLoadWithError:(id *)a0;

@end
