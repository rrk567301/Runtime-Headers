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
    id _discoveryController;
    id _networkInfoController;
    HMDHome *_home;
    HMAccessoryDiagnosticInfoProtoDiagnosticInfo *_accessoryDiagnosticInfo;
    NSError *_accessoryDiagnosticInfoFetchError;
    HMAccessoryDiagnosticInfoProtoDiagnosticInfo *_primaryResidentDiagnosticInfo;
    NSError *_primaryResidentDiagnosticInfoFetchError;
    id<HMFCancellable> _remoteEventRouterAssertion;
    id _discoveryAssertion;
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
- (id)initWithQueue:(id)a0 discoveryController:(id)a1 networkInfoController:(id)a2 trackingInfo:(id)a3 setupSessionIdentifier:(id)a4 homeManager:(id)a5 logEventSubmitter:(id)a6 timerFactory:(id /* block */)a7;
- (id)initWithQueue:(id)a0 trackingInfo:(id)a1 setupSessionIdentifier:(id)a2 homeManager:(id)a3;
- (void)markAccessoryAddCompleted;
- (void)markAccessoryRemoved;
- (void)markEventRouterPrimaryClientConnectMessageFailedWithError:(id)a0;
- (void)markEventRouterPrimaryClientConnectStatusChanged:(BOOL)a0;
- (void)markFirstSettingObserved;
- (void)markLanguageSettingObserved;
- (void)markPrimaryResidentChanged;
- (void)markRepairSessionComplete;
- (id)networkMetricWithDiscoveryController:(id)a0 networkInfoController:(id)a1 sessionID:(id)a2 idsIdentifierString:(id)a3 currentWiFiInfo:(id)a4 currentWiFiNetworkRSSI:(int)a5 numResidents:(long long)a6 numAppleMediaAccessories:(long long)a7 accessoryDiagnosticInfo:(id)a8 primaryResidentIdsIdentifierString:(id)a9 primaryResidentDiagnosticInfo:(id)a10 homeUUID:(id)a11 primaryResidentDiagnosticInfoFetched:(BOOL)a12;
- (id)obtainDiscoveryAssertion;
- (void)releaseDiscoveryAssertionWithAssertionHandle:(id)a0;
- (void)updateTrackingInfo:(id)a0;

@end
