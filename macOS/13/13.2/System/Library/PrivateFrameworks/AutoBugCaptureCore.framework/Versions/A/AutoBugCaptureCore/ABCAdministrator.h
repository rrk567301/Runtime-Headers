@class DiagCollectionTransport, NSString, DiagnosticsTransport, AutoBugCaptureCacheDelete, DiagnosticLiaison, DiagnosticStorageManager, ABCConfigurationManager, CloudKitUploadController, NSObject, DiagnosticExtensionController, DiagnosticCaseManager, ABCPersistentStoreController;
@protocol OS_dispatch_queue;

@interface ABCAdministrator : NSObject <ABCPersistentStoreControllerDelegate> {
    NSObject<OS_dispatch_queue> *adminQueue;
    DiagCollectionTransport *diagCollectionTransport;
    DiagnosticsTransport *diagTransport;
    BOOL _autoBugCaptureAdministrativelyEnabled;
}

@property (nonatomic) int autoBugCaptureState;
@property (retain, nonatomic) DiagnosticExtensionController *diagExtensionController;
@property (retain, nonatomic) AutoBugCaptureCacheDelete *cacheDeleteHandler;
@property (retain, nonatomic) DiagnosticCaseManager *caseManager;
@property (retain, nonatomic) DiagnosticStorageManager *storageManager;
@property (retain, nonatomic) ABCPersistentStoreController *storeController;
@property (retain, nonatomic) ABCConfigurationManager *configurationManager;
@property (retain, nonatomic) DiagnosticLiaison *diagnosticLiaison;
@property (retain, nonatomic) CloudKitUploadController *ckUploadController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)shutdown;
- (void)startup;
- (void)persistentStoreControllerReadyForUse:(id)a0;
- (void)startEssentialServices;
- (void)stopEssentialServices;
- (id)getDiagnosticLiaison;
- (void)registerIDS;
- (void)deregisterIDS;
- (void)registerAPNS;
- (void)deregisterAPNS;
- (void)startMaintenanceServices;
- (void)stopMaintenanceServices;
- (void)scheduleDiagnosticsMaintenanceActivity;
- (void)startUploadTaskScheduler;
- (void)stopUploadTaskScheduler;
- (void)administrativelyEnableAutoBugCapture;
- (void)administrativelyDiableAutoBugCapture;
- (void)startAutoBugCaptureAdministrative:(BOOL)a0;
- (void)startAutoBugCaptureAdministrative:(BOOL)a0 parameters:(id)a1;
- (void)continueStartingAutoBugCapture;
- (void)stopAutoBugCapture:(BOOL)a0;
- (void)prepareLogArchiveDirectory:(id)a0 uid:(id)a1 gid:(id)a2;
- (BOOL)checkToSeeIfUserIsLoggedInForSCDStore:(struct __SCDynamicStore { } *)a0;
- (void)enableConsoleNotifications;
- (id)autoBugCaptureConfig;
- (id)internalStateDictionary;
- (void)startupAgent;
- (void)shutdownAgent;

@end
