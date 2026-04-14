@class NSXPCConnection, NSString, BRMangledID, NSSet, NSOperationQueue, brc_task_tracker, BRCAccountSession, NSCountedSet, NSObject, NSMutableDictionary, BRCClientPrivilegesDescriptor;
@protocol OS_dispatch_queue;

@interface BRCXPCClient : NSObject <BRCProcessMonitorDelegate, BRCForegroundClient, BRCNotificationPipeDelegate> {
    brc_task_tracker *_tracker;
    unsigned char _invalidated : 1;
    NSCountedSet *_appLibraries;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    int _clientPid;
    struct { unsigned int val[8]; } auditToken;
    unsigned char _isForeground : 1;
    NSMutableDictionary *_personaMonitorCounts;
}

@property (retain, nonatomic) BRCClientPrivilegesDescriptor *clientPriviledgesDescriptor;
@property (retain, nonatomic) BRCAccountSession *session;
@property (nonatomic) BOOL isUsingUbiquity;
@property (readonly, nonatomic) BRMangledID *defaultMangledID;
@property (readonly, nonatomic) NSSet *entitledAppLibraryIDs;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL hasPrivateSharingInterfaceEntitlement;
@property (readonly, nonatomic) BOOL isSandboxed;
@property (readonly, weak, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) BOOL dieOnInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

- (void)addOperation:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)wait;
- (void)dumpToContext:(id)a0;
- (void)addAppLibrary:(id)a0;
- (void)removeAppLibrary:(id)a0;
- (void)process:(int)a0 didBecomeForeground:(BOOL)a1;
- (void)notificationPipe:(id)a0 willObserveAppLibrary:(id)a1;
- (void)notificationPipe:(id)a0 didObserveAppLibrary:(id)a1;
- (void)setPrivilegesDescriptor:(id)a0;
- (void)_process:(int)a0 didBecomeForeground:(BOOL)a1;
- (void)_startMonitoringProcessIfNeeded;
- (void)_stopMonitoringProcess;
- (char)cloudEnabledStatus;
- (BOOL)_hasAccessToAppLibraryID:(id)a0 error:(id *)a1;
- (BOOL)_canCreateAppLibraryWithID:(id)a0 error:(id *)a1;
- (BOOL)_isAppLibraryProxyWithError:(id *)a0;
- (BOOL)_hasPrivateIPCEntitlementForSelector:(SEL)a0 error:(id *)a1;
- (id)_entitlementValueForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)_entitlementBooleanValueForKey:(id)a0;
- (BOOL)_isAppLibraryProxyEntitled;
- (BOOL)_isAutomationEntitled;
- (void)_auditURL:(id)a0;
- (id)_auditedURLFromPath:(id)a0;
- (BOOL)canAccessPath:(const char *)a0 accessKind:(long long)a1;
- (id)_overrideSessionForURL:(id)a0;
- (void)performBlock:(id /* block */)a0 withSessionFromURL:(id)a1;
- (void)performBlockWithAnySession:(id /* block */)a0;
- (BOOL)canAccessLogicalOrPhysicalURL:(id)a0 accessKind:(long long)a1 session:(id)a2;
- (void)_becameXPCCLientOfSession:(id)a0;
- (void)_finishedXPCClientOfSession:(id)a0;
- (void)accessLogicalOrPhysicalURL:(id)a0 accessKind:(long long)a1 dbAccessKind:(long long)a2 synchronouslyIfPossible:(BOOL)a3 handler:(id /* block */)a4;
- (BOOL)canAccessPhysicalURL:(id)a0;
- (id)issueContainerExtensionForURL:(id)a0 error:(id *)a1;
- (id)_setupAppLibrary:(id)a0 error:(id *)a1;
- (void)_setupAppLibraryAndZoneWithID:(id)a0 recreateDocumentsIfNeeded:(BOOL)a1 reply:(id /* block */)a2;
- (void)setupNonSandboxedAccessForUbiquityContainers:(id)a0 forBundleID:(id)a1;
- (void)_startSharingOperationAfterAcceptation:(id)a0 client:(id)a1 item:(id)a2;

@end
