@class HMFTimer, NSUUID, NSString, HMDHomeManager, HMDHome, NSObject, HMAccessoryDiagnosticInfoProtoDiagnosticInfo;
@protocol HMMLogEventSubmitting, OS_os_log, HMDDeviceSetupTrackingInfo, OS_dispatch_queue, HMDAccessorySetupMetricDispatcherDelegate;

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFTimerDelegate, HMFLogging, HMEEventConsumer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_log> *_logger;
    BOOL _submitted;
    id<HMDDeviceSetupTrackingInfo> _trackingInfo;
    NSObject<OS_dispatch_queue> *_queue;
    HMFTimer *_timer;
    id<HMMLogEventSubmitting> _dispatcher;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
    HMAccessoryDiagnosticInfoProtoDiagnosticInfo *_accessoryDiagnosticInfo;
}

@property (readonly, copy, nonatomic) NSUUID *setupSessionIdentifier;
@property (readonly) BOOL isRepairSession;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long languageSettingTime;
@property (readonly) unsigned long long addAccessoryFinishTime;
@property (readonly) unsigned long long accessoryRemovedTime;
@property (readonly) id<HMDDeviceSetupTrackingInfo> trackingInfo;
@property (readonly) BOOL submitted;
@property (weak) id<HMDAccessorySetupMetricDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)submit;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)addHome:(id)a0;
- (id)initWithQueue:(id)a0 trackingInfo:(id)a1 setupSessionIdentifier:(id)a2 homeManager:(id)a3;
- (id)initWithQueue:(id)a0 trackingInfo:(id)a1 setupSessionIdentifier:(id)a2 homeManager:(id)a3 logEventDispatcher:(id)a4 timerFactory:(id /* block */)a5;
- (void)markAccessoryAddCompleted;
- (void)markAccessoryRemoved;
- (void)markFirstSettingObserved;
- (void)markLanguageSettingObserved;
- (void)markRepairSessionComplete;
- (void)updateTrackingInfo:(id)a0;

@end
