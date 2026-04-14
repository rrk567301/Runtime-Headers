@class HMFTimer, NSMutableDictionary, HMDAccessory, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryMetricCurrentSession : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDAccessory *accessory;
@property (copy, nonatomic) NSDate *sessionStartTime;
@property (nonatomic) BOOL hasActiveSession;
@property (copy, nonatomic) NSDate *reachableStartTime;
@property (nonatomic) BOOL isReachable;
@property (copy, nonatomic) NSDate *metricCollectionStartTime;
@property (copy, nonatomic) NSMutableDictionary *errorCounts;
@property (retain, nonatomic) HMFTimer *sessionMetricTimer;
@property (readonly, nonatomic) double timerInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) double activeSessionDurationSec;
@property (nonatomic) double reachableDurationSec;
@property (nonatomic) unsigned long long sessionFailures;
@property (nonatomic) unsigned long long successfulSessionRetries;
@property (nonatomic) long long topErrorCode;
@property (nonatomic) double submissionIntervalSec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_submitMetric;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)attributeDescriptions;
- (id)initWithAccessory:(id)a0;
- (void)_resetSessionMetric;
- (double)sessionCheckIntervalSec;
- (BOOL)isCurrentPrimaryResident;
- (BOOL)isHomeThreadCapable;
- (void)updateSessionState:(BOOL)a0 withError:(id)a1;
- (void)updateReachableState:(BOOL)a0;
- (void)submitMetricAndStop;

@end
