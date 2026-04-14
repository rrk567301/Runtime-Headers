@class NSString, PHAPhotoLibraryList, NSMutableDictionary, PHAActivityLog, NSMutableArray, NSObject, PHAMusicActivity, NSMutableSet;
@protocol OS_xpc_object, OS_voucher, OS_dispatch_source, OS_dispatch_queue;

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, PHAActivityDelegate, PHAServiceOperationHandling, NSXPCListenerDelegate> {
    BOOL _isPhotoAnalysisAgent;
    BOOL _backgroundAnalysisActivityTriggered;
    long long _limitBackgroundCPUPercentage;
    NSObject<OS_dispatch_queue> *_executiveStateQueue;
    NSObject<OS_voucher> *_turboModeBoostVoucher;
    NSMutableArray *_processingLog;
    PHAActivityLog *_currentLog;
    NSMutableArray *_cachedTurboLibraryURLs;
    NSObject<OS_xpc_object> *_turboAnalysisActivity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _turboLibrariesLock;
    NSMutableSet *_pendingBackgroundLibraries;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectedClientsLock;
    BOOL _shouldDeferActivity;
    NSMutableSet *_runningActivities;
}

@property (retain) NSMutableDictionary *clientsByLibraryPath;
@property (retain) NSMutableDictionary *managersByLibraryPath;
@property unsigned char state;
@property (retain) PHAPhotoLibraryList *photoLibraryList;
@property long long countOfCoordinatorsRunningBackgroundAnalysis;
@property (retain) NSObject<OS_dispatch_source> *backgroundAnalysisMonitorTimer;
@property (retain) NSObject<OS_xpc_object> *backgroundAnalysisActivity;
@property (retain) PHAMusicActivity *musicActivity;
@property (readonly) PHAActivityLog *activityLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bootDateForTurboLibraryRegistration;
+ (void)unregisterAllActivities;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)shutdown;
- (void)_localeDidChangeNotification:(id)a0;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (void)startup;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)notifyLibraryAvailableAtURL:(id)a0;
- (void)writeQALog:(id)a0;
- (void)handleOperation:(id)a0;
- (void)addClientHandler:(id)a0 forLibraryURL:(id)a1;
- (void)dumpStatusToLog;
- (void)_backgroundActivityDidBegin;
- (void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)a0 skipActivityStateCheck:(BOOL)a1;
- (void)_installBackgroundAnalysisMonitor;
- (BOOL)_photoAnalysCoreDuetSchedulingDisabled;
- (BOOL)_photoAnalysisEnabled;
- (void)_registerBackgroundActivity;
- (void)_registerTurboActivity;
- (void)_runTurboProcessing:(id)a0;
- (void)_startBackgroundAnalysis;
- (void)_stopAllBackgroundActivitiesWithCompletion:(id /* block */)a0;
- (void)_stopAllBackgroundAnalysisWithCompletion:(id /* block */)a0;
- (void)addProcessingActivityToStatusDictionary:(id)a0;
- (void)checkQuiescenceForManager:(id)a0;
- (id)clientInfoForManager:(id)a0;
- (void)disableTurboModeForManager:(id)a0;
- (void)dispatchAsyncToExecutiveStateQueue:(id /* block */)a0;
- (void)enableTurboModeForManager:(id)a0;
- (BOOL)hasConnectedClientsForManager:(id)a0;
- (BOOL)hasPhotosConnectionForManager:(id)a0;
- (id)managerForPhotoLibraryURL:(id)a0;
- (BOOL)registerActivityToRun:(id)a0;
- (void)removeClientHandler:(id)a0;
- (void)setupAnalyticsEnvironment;
- (id)statusAsDictionary;
- (void)stopAllBackgroundActivities;
- (void)stopAllBackgroundActivitiesWithCompletion:(id /* block */)a0;
- (void)stopBackgroundActivityForManager:(id)a0;
- (void)terminateManagerForPhotoLibraryURL:(id)a0;
- (void)terminateManagerIfQuiescentAndNoConnectedClients:(id)a0;
- (void)triggerBackgroundActivity;
- (BOOL)turboIsEnabledForManager:(id)a0;
- (void)unregisterRunningActivity:(id)a0;
- (void)updatePropertiesOfXPCActivity:(id)a0;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;

@end
