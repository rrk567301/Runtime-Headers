@class NSXPCConnection, NSString, NSUUID, NSExtension, FPDExtension, NSMutableDictionary, FPGracePeriodTimer, NSCountedSet, NSObject, FPDProcessMonitor, NSMapTable, FPDDomain;
@protocol OS_dispatch_queue;

@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol> {
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSMapTable *_lifetimeExtenders;
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
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (id)newFileProviderProxyWithTimeout:(double)a0 pid:(int)a1;
- (id)existingFileProviderProxyWithTimeout:(double)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (void)terminateWithReason:(id)a0;
- (id)initWithDomain:(id)a0 extension:(id)a1 queue:(id)a2;
- (id)_alternateContentsDictionary;
- (BOOL)terminateExtensionWithError:(id *)a0;
- (BOOL)_setUpConnectionWithError:(id *)a0;
- (id)_connectionWithError:(id *)a0;
- (void)_invalidateExtensionIfPossible;
- (id)newFileProviderProxyWithTimeoutValue:(double)a0 pid:(int)a1 createIfNeeded:(BOOL)a2;
- (void)_unregisterLifetimeExtensionForObject:(id)a0;
- (void)_networkingGracePeriodOver;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)a0;
- (void)_evaluateExtensionForegroundness;

@end
