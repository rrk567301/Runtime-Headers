@class NSString, NSXPCInterface;
@protocol _TtP9HealthKit24HKWorkoutMetricsDelegate_;

@interface HealthKit.HKWorkoutMetricsDataSource : NSObject <_HKXPCExportable, HealthKit.HKWorkoutMetricsDataSourceClientInterface, HKWorkoutDataSource> {
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ workoutConfiguration;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_proxyProvider;
}

@property (class, nonatomic, readonly) NSString *taskIdentifier;
@property (class, nonatomic, readonly) NSXPCInterface *clientInterface;
@property (class, nonatomic, readonly) NSXPCInterface *serverInterface;

@property (nonatomic, weak) id<_TtP9HealthKit24HKWorkoutMetricsDelegate_> delegate;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)identifier;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)init;
- (void)clientRemote_didReceiveMetrics:(id)a0;
- (id)initWithHealthStore:(id)a0 configuration:(id)a1;
- (void)workoutBuilderDidFinish;

@end
