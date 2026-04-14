@class FPDTelemetryService, FPDAppMonitor, FPDSimSupport, FPDSpotlightDaemonClient, FPDExtensionManager, FPDActionOperationEngine, NSObject, FPDKnownFolderArbiter, FPDPresenterManager, NSString, FPDCacheDeleteService, FPPacer, NSXPCListener, FPDVolumeManager;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface FPDServer : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_machSrc;
    NSObject<OS_dispatch_queue> *_makeSureSetupEnqueued;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_afterSetupWorkQueue;
    NSObject<OS_dispatch_queue> *_domainCachingQueue;
    NSObject<OS_dispatch_group> *_fileProviderManagerIsReadyGroup;
    NSObject<OS_dispatch_queue> *_machServerQueue;
    int _providerChangeNotificationToken;
    FPPacer *_signalProviderChangesPacer;
    BOOL _isPastMacBuddy;
    FPDSimSupport *_simSupport;
    NSString *_locale;
    _Atomic BOOL _userIsLoggingOut;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) FPDActionOperationEngine *operationEngine;
@property (readonly, nonatomic) FPDCacheDeleteService *cacheDelete;
@property (readonly, nonatomic) FPDTelemetryService *telemetry;
@property (readonly, nonatomic) FPDVolumeManager *volumeManager;
@property (readonly, nonatomic) FPDAppMonitor *appMonitor;
@property (readonly, nonatomic) FPDExtensionManager *extensionManager;
@property (readonly, nonatomic) FPDPresenterManager *presenterManager;
@property (retain, nonatomic) Class fpfsClass;
@property (retain, nonatomic) Class fpfsSQLBackupManagerClass;
@property (retain, nonatomic) Class fpfsSQLRestoreManagerClass;
@property (retain, nonatomic) Class fpckTaskClass;
@property (retain, nonatomic) Class fpdPurgerClass;
@property (readonly, nonatomic) FPDSpotlightDaemonClient *spotlightDaemonClient;
@property (readonly, nonatomic) FPDKnownFolderArbiter *knownFolderArbiter;
@property (retain, nonatomic) Class fpdSimSupportClass;

+ (id)homeDirectory;
+ (id)appSupportPath;
+ (id)personaCloudStoragePath;

- (void)localeDidChange;
- (void)migrateLegacyFPFSLocations;
- (void)handleExitSignal:(int)a0;
- (void)purge;
- (void)exitWithCode:(int)a0;
- (void)signalProviderChangesWithLowPriority;
- (void)start;
- (void)_initSignals;
- (void)_monitorLogOut;
- (void)_finishSetup;
- (void)_computeSetupStatusAndSetup;
- (id)init;
- (void)materializeURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)signalProviderChanges;
- (BOOL)userIsLoggingOut;
- (void)_setup;
- (void).cxx_destruct;
- (void)_startXPCListener;
- (BOOL)isPastMacBuddy;
- (void)providersDidChange;
- (void)_monitorSetupStatus;
- (void)_setUserIsLoggingOut;

@end
