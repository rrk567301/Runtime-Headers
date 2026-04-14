@class LNDaemonConnectionListener, HMDDeviceSetupConfiguringController, HMDSymptomManager, HMDCoreData, NSObject, HMDHomeManager, HMDAccessoryBrowser, NSString, HMDCurrentAccessorySetupMetricDispatcher, HMDMetricsManager, HMDAppleMediaAccessoryDiagnosticInfoController, NSLock, HMDNetworkInfoController;
@protocol OS_dispatch_queue, OS_os_log;

@interface HMDMainDriver : NSObject <HMFLogging, HMDSymptomManagerDataSource, HMDCoreDataCloudTransformDelegate, HMDRelaunchHandling> {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser;
@property (retain, nonatomic) HMDMetricsManager *metricsManager;
@property (retain, nonatomic) HMDAppleMediaAccessoryDiagnosticInfoController *appleMediaAccessoryDiagnosticInfoController;
@property (readonly, nonatomic) HMDCoreData *coreData;
@property (retain) HMDHomeManager *homeManager;
@property (retain) id delayedHomeManagerStorage;
@property (retain, nonatomic) HMDDeviceSetupConfiguringController *configuringStateController;
@property (retain, nonatomic) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property (retain, nonatomic) HMDSymptomManager *symptomManager;
@property (retain, nonatomic) HMDNetworkInfoController *networkInfoController;
@property (retain, nonatomic) id discoveryController;
@property (retain, nonatomic) LNDaemonConnectionListener *linkdConnectionListener;
@property (retain) NSLock *lock;
@property (readonly, nonatomic) HMDCoreData *coreData;
@property (retain) HMDHomeManager *homeManager;
@property (retain) id delayedHomeManagerStorage;
@property (retain, nonatomic) HMDDeviceSetupConfiguringController *configuringStateController;
@property (retain, nonatomic) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property (retain, nonatomic) HMDSymptomManager *symptomManager;
@property (retain, nonatomic) HMDNetworkInfoController *networkInfoController;
@property (retain, nonatomic) id discoveryController;
@property (retain, nonatomic) LNDaemonConnectionListener *linkdConnectionListener;
@property (retain) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)driver;
+ (id)loadSQLArchiveWithDecryptionFail:(BOOL *)a0 fromLocation:(id)a1 forHH2Migration:(BOOL)a2 error:(id *)a3;
+ (id)getLocalStoreFrom:(id)a0;
+ (id)loadHomeDataFromLocalStore:(id *)a0 fromLocation:(id)a1 decryptionFailed:(BOOL *)a2 forHH2Migration:(BOOL)a3;
+ (id)loadHomeDataFromLocalStore:(id *)a0 decryptionFailed:(BOOL *)a1;

- (void)localeChanged;
- (void)start;
- (void)registerXPCEventStreamHandlers;
- (id)currentWiFiNetworkInfo;
- (id)currentWiFiNetworkRSSI;
- (void)relaunchAfterDelay:(double)a0;
- (void)relaunch;
- (id)init;
- (void)removeCurrentAccessorySetupMetricDispatcherIfNeeded;
- (BOOL)cloudTransform:(id)a0 isPermittedForHomeWithModelID:(id)a1 isImport:(BOOL)a2;
- (void)relaunchHomed;
- (void)detectNearbyAccessoriesOnMismatchNetworkWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
