@class NSString, NSUUID, NSError, NSDate;
@protocol HDWorkoutDataDestination;

@interface HealthDaemon.HDWorkoutMetricsDataSource : HDStandardTaskServer <HealthDaemon.HDSwimmingObserver, HealthKit.HKWorkoutMetricsDataSourceServerInterface, HDWorkoutDataSource, HKDataFlowLinkProcessor> {
    void /* unknown type, empty encoding */ _workoutDataFlowLink;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workoutDataProcessorUUID;
}

@property (class, nonatomic, readonly) NSString *taskIdentifier;

@property (nonatomic, copy) NSUUID *workoutDataProcessorUUID;
@property (nonatomic, readonly) id workoutDataFlowLink;

+ (id)requiredEntitlements;
+ (Class)configurationClass;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)remote_registerSession;
- (void)historicalSwimmingDataDidUpdate:(id)a0 reference:(id)a1;
- (void)onDemandSwimmingDataDidUpdate:(id)a0;
- (void)workoutDataDestination:(id)a0 didBeginActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 didEndActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didInsertEvent:(id)a1;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id<HDWorkoutDataDestination>)a0 requestsFinalDataFrom:(NSDate *)a1 to:(NSDate *)a2 completion:(void (^)(BOOL, NSError *))a3;

@end
