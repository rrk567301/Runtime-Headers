@class NSXPCConnection, NSString, BRMangledID, NSSet, NSOperationQueue, brc_task_tracker, BRCAccountSession, NSObject, NSCountedSet, NSMutableDictionary, BRCClientPrivilegesDescriptor;
@protocol OS_dispatch_queue;

@interface BRCXPCClient : NSObject <BRProcessMonitorDelegate, BRCForegroundClient, BRCNotificationPipeDelegate> {
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _invalidated : 1;
    NSObject<OS_dispatch_queue> *_foregroundBackgroundHandlingQueue;
    NSCountedSet *_appLibraries;
    NSOperationQueue *_operationQueue;
    int _clientPid;
    struct { unsigned int val[8]; } auditToken;
    unsigned char _isForeground : 1;
    NSMutableDictionary *_personaMonitorCounts;
}

@property (retain, nonatomic) BRCClientPrivilegesDescriptor *clientPriviledgesDescriptor;
@property (retain, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) BRMangledID *defaultMangledID;
@property (readonly, nonatomic) NSSet *entitledAppLibraryIDs;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) char hasPrivateSharingInterfaceEntitlement;
@property (readonly, nonatomic) char isSandboxed;
@property (readonly, nonatomic) char isFPFSExtension;
@property (readonly, weak, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) char dieOnInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)wait;
- (void)process:(int)a0 didBecomeForeground:(char)a1;
- (char)_entitlementBooleanValueForKey:(id)a0;
- (char)_hasAccessToAppLibraryID:(id)a0 error:(id *)a1;
- (void)_startMonitoringProcessIfNeeded;
- (void)_auditURL:(id)a0;
- (id)_auditedURLFromPath:(id)a0;
- (char)_canCreateAppLibraryWithID:(id)a0 error:(id *)a1;
- (id)_entitlementValueForKey:(id)a0 ofClass:(Class)a1;
- (char)_hasPrivateIPCEntitlementForSelector:(SEL)a0 error:(id *)a1;
- (char)_isAppLibraryProxyEntitled;
- (char)_isAppLibraryProxyWithError:(id *)a0;
- (char)_isAutomationEntitled;
- (void)_process:(int)a0 didBecomeForeground:(char)a1;
- (id)_setupAppLibrary:(id)a0 error:(id *)a1;
- (void)_setupAppLibraryAndZoneWithID:(id)a0 recreateDocumentsIfNeeded:(char)a1 reply:(id /* block */)a2;
- (void)_startSharingOperationAfterAcceptation:(id)a0 client:(id)a1 item:(id)a2;
- (void)_stopMonitoringProcess;
- (void)_waitForContainerToBeForcedIngestWithContainerID:(id)a0 containerURL:(id)a1 sandboxExtension:(id)a2 bundleVersion:(id)a3 error:(id)a4 reply:(id /* block */)a5;
- (void)addAppLibrary:(id)a0;
- (char)canAccessPath:(const char *)a0 accessKind:(long long)a1;
- (char)canAccessPhysicalURL:(id)a0;
- (char)checkTCCAccess;
- (char)checkTCCAccessForSession:(id)a0;
- (char)cloudEnabledStatus;
- (void)dumpToContext:(id)a0;
- (id)issueContainerExtensionForURL:(id)a0 error:(id *)a1;
- (void)notificationPipe:(id)a0 didObserveAppLibrary:(id)a1;
- (void)notificationPipe:(id)a0 willObserveAppLibrary:(id)a1;
- (void)performBlockWithAnySession:(id /* block */)a0;
- (void)removeAppLibrary:(id)a0;
- (void)setPrivilegesDescriptor:(id)a0;
- (void)setupNonSandboxedAccessForUbiquityContainers:(id)a0 forBundleID:(id)a1;

@end
