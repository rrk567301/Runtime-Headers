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

- (void)shutdown;
- (void)continueStartingAutoBugCapture;
- (void)startup;
- (void)deregisterIDS;
- (id)autoBugCaptureConfig;
- (void)startupAgent;
- (void)startAutoBugCaptureAdministrative:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)checkToSeeIfUserIsLoggedInForSCDStore:(struct __SCDynamicStore { } *)a0;
- (id)getDiagnosticLiaison;
- (void)startMaintenanceServices;
- (void)stopUploadTaskScheduler;
- (void)prepareLogArchiveDirectory:(id)a0 uid:(id)a1 gid:(id)a2;
- (void)startUploadTaskScheduler;
- (void)startEssentialServices;
- (void).cxx_destruct;
- (void)enableConsoleNotifications;
- (id)init;
- (void)stopEssentialServices;
- (void)persistentStoreControllerReadyForUse:(id)a0;
- (void)registerIDS;
- (void)administrativelyEnableAutoBugCapture;
- (void)shutdownAgent;
- (void)startAutoBugCaptureAdministrative:(BOOL)a0 parameters:(id)a1;
- (void)administrativelyDisableAutoBugCapture;
- (void)scheduleDiagnosticsMaintenanceActivity;
- (id)internalStateDictionary;
- (void)stopAutoBugCapture:(BOOL)a0;
- (void)stopMaintenanceServices;

@end
