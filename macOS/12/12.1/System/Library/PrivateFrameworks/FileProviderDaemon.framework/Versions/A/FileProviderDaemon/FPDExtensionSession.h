@class NSXPCConnection, NSString, NSUUID, NSExtension, NSHashTable, NSMutableDictionary, FPDExtension, NSCountedSet, NSObject, FPGracePeriodTimer, FPDProcessMonitor, FPDDomain;
@protocol OS_dispatch_queue;

@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol> {
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSHashTable *_lifetimeExtenders;
    FPDExtension *_fpdExtension;
    FPDDomain *_domain;
    FPGracePeriodTimer *_gracePeriodTimer;
    FPGracePeriodTimer *_networkingGracePeriodTimer;
    FPDProcessMonitor *_processMonitor;
    int _notifyTokenForFramework;
    BOOL _invalidated;
    BOOL _isForeground;
    int _pid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess;
@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)start;
- (void)_invalidate;
- (void)cancel;
- (void)dumpStateTo:(id)a0;
- (void)__invalidate;
- (id)newFileProviderProxyWithPID:(int)a0;
- (id)newFileProviderProxyWithoutPID;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (id)newFileProviderProxyWithTimeout:(BOOL)a0 pid:(int)a1;
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (id)initWithDomain:(id)a0 extension:(id)a1 queue:(id)a2;
- (id)existingFileProviderProxyWithTimeout:(BOOL)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)_networkingGracePeriodOver;
- (BOOL)terminateExtensionWithError:(id *)a0;
- (BOOL)_setUpConnectionWithError:(id *)a0;
- (void)_evaluateExtensionForegroundness;
- (id)_alternateContentsDictionary;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)newFileProviderProxyWithTimeout:(BOOL)a0 pid:(int)a1 createIfNeeded:(BOOL)a2;
- (id)_connectionWithError:(id *)a0;
- (void)_invalidateExtensionIfPossible;
- (void)_unregisterLifetimeExtensionForObject:(id)a0;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)a0;

@end
