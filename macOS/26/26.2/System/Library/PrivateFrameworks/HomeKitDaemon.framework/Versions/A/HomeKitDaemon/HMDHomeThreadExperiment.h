@class HMFTimer, NSString, HMDHAPAccessory, NSObject;
@protocol OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDHomeThreadExperiment : NSObject <HMFTimerDelegate, HMFLogging>

@property (retain, nonatomic) HMFTimer *reachabilityTimer;
@property (nonatomic) long long mode;
@property (nonatomic) long long expectedNotificationCount;
@property (nonatomic) long long receivedNotificationCount;
@property (nonatomic) long long readCharacteristicCount;
@property (nonatomic) long long expectedReachableCount;
@property (nonatomic) long long reachableCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) HMDHAPAccessory *hapAccessory;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithMetricsMode:(long long)a0 hapAccessory:(id)a1 workQueue:(id)a2;
- (id)initWithMetricsMode:(long long)a0 hapAccessory:(id)a1 workQueue:(id)a2 reachabilityTimer:(id)a3 logEventSubmitter:(id)a4;
- (void)markNotificationSuccessful;
- (void)markReadSuccessful;
- (void)scheduleReachabilityCheck;
- (void)uploadPerformanceMetrics:(double)a0;
- (void)uploadReliabilityMetrics;

@end
