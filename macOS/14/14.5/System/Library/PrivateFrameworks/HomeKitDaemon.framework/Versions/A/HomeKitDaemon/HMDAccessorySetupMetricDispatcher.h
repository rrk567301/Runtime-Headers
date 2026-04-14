@class NSUUID, NSString, HMFTimer, HMDHomeManager, NSError, HMAccessoryDiagnosticInfoProtoDiagnosticInfo, NSObject, HMDHome;
@protocol HMMLogEventSubmitting, OS_os_log, HMDDeviceSetupTrackingInfo, HMFCancellable, OS_dispatch_queue, HMDAccessorySetupMetricDispatcherDelegate;

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFTimerDelegate, HMFLogging, HMEEventConsumer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_log> *_logger;
    BOOL _submitted;
    id<HMDDeviceSetupTrackingInfo> _trackingInfo;
    NSObject<OS_dispatch_queue> *_queue;
    HMFTimer *_timer;
    id<HMMLogEventSubmitting> _submitter;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
    HMAccessoryDiagnosticInfoProtoDiagnosticInfo *_accessoryDiagnosticInfo;
    NSError *_accessoryDiagnosticInfoFetchError;
    id<HMFCancellable> _remoteEventRouterAssertion;
}

@property (readonly, copy, nonatomic) NSUUID *setupSessionIdentifier;
@property (readonly) BOOL isRepairSession;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long languageSettingTime;
@property (readonly) unsigned long long addAccessoryFinishTime;
@property (readonly) unsigned long long accessoryRemovedTime;
@property (readonly) unsigned long long lastPrimaryResidentAvailableTime;
@property (readonly) unsigned int numberOfTimesPrimaryResidentChanged;
@property (readonly) unsigned long long lastPrimaryClientConnectedTime;
@property (readonly) unsigned int numberOfTimesPrimaryClientConnected;
@property (readonly) unsigned int numberOfTimesPrimaryClientDisconnected;
@property (readonly) unsigned int numberOfTimesPrimaryClientConnectMessageFailed;
@property (readonly, copy) NSError *lastPrimaryClientConnectMessageFailError;
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
- (void)addRemoteEventRouterAssertion:(id)a0;
- (BOOL)hasHome:(id)a0;
- (id)initWithQueue:(id)a0 trackingInfo:(id)a1 setupSessionIdentifier:(id)a2 homeManager:(id)a3;
- (id)initWithQueue:(id)a0 trackingInfo:(id)a1 setupSessionIdentifier:(id)a2 homeManager:(id)a3 logEventSubmitter:(id)a4 timerFactory:(id /* block */)a5;
- (void)markAccessoryAddCompleted;
- (void)markAccessoryRemoved;
- (void)markEventRouterPrimaryClientConnectMessageFailedWithError:(id)a0;
- (void)markEventRouterPrimaryClientConnectStatusChanged:(BOOL)a0;
- (void)markFirstSettingObserved;
- (void)markLanguageSettingObserved;
- (void)markPrimaryResidentChanged;
- (void)markRepairSessionComplete;
- (void)updateTrackingInfo:(id)a0;

@end
