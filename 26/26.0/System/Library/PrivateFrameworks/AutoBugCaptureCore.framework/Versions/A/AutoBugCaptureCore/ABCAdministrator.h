@class DiagnosticStorageManager, KernelMsgSignalHandlerSDXC, NSObject, CloudKitUploadController, DiagnosticsTransport, ABCConfigurationManager, DiagnosticExtensionController, NSString, ABCPersistentStoreController, DiagnosticCaseManager, AutoBugCaptureCacheDelete, DiagCollectionTransport, DiagnosticLiaison;
@protocol OS_dispatch_queue;

@interface ABCAdministrator : NSObject <ABCPersistentStoreControllerDelegate> {
    NSObject<OS_dispatch_queue> *adminQueue;
    DiagCollectionTransport *diagCollectionTransport;
    DiagnosticsTransport *diagTransport;
    BOOL _autoBugCaptureAdministrativelyEnabled;
    KernelMsgSignalHandlerSDXC *kernelHandler;
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

- (id)internalStateDictionary;
- (void)shutdown;
- (void)persistentStoreControllerReadyForUse:(id)a0;
- (BOOL)checkToSeeIfUserIsLoggedInForSCDStore:(struct __SCDynamicStore { } *)a0;
- (void)startMaintenanceServices;
- (id)autoBugCaptureConfig;
- (void)stopAutoBugCapture:(BOOL)a0;
- (id)getDiagnosticLiaison;
- (void)stopMaintenanceServices;
- (void)startAutoBugCaptureAdministrative:(BOOL)a0 parameters:(id)a1;
- (void)startUploadTaskScheduler;
- (void)administrativelyEnableAutoBugCapture;
- (void)prepareLogArchiveDirectory:(id)a0 uid:(id)a1 gid:(id)a2;
- (id)init;
- (void)scheduleDiagnosticsMaintenanceActivity;
- (void)startEssentialServices;
- (void)startAutoBugCaptureAdministrative:(BOOL)a0;
- (void)registerIDS;
- (void)deregisterIDS;
- (void)startup;
- (void)startupAgent;
- (void)stopEssentialServices;
- (void)administrativelyDisableAutoBugCapture;
- (void)continueStartingAutoBugCapture;
- (void)shutdownAgent;
- (void)stopUploadTaskScheduler;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)enableConsoleNotifications;

@end
