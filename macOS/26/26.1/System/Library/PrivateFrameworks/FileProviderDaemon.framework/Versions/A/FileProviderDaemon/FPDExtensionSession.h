@class NSXPCConnection, NSString, NSUUID, FPDProcessMonitor, FPDExtension, NSMutableDictionary, FPGracePeriodTimer, NSCountedSet, NSObject, _EXExtensionProcess, NSMapTable, FPDDomain;
@protocol OS_dispatch_queue, OS_os_log;

@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSMapTable *_lifetimeExtenders;
    FPDExtension *_fpdExtension;
    FPDDomain *_domain;
    NSString *_providerIdentifier;
    NSObject<OS_os_log> *_log;
    FPGracePeriodTimer *_gracePeriodTimer;
    FPGracePeriodTimer *_networkingGracePeriodTimer;
    FPDProcessMonitor *_processMonitor;
    int _notifyTokenForFramework;
    BOOL _invalidated;
    BOOL _isForeground;
    NSUUID *_sessionUUID;
    _EXExtensionProcess *_sessionProcess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;

- (void)_invalidate;
- (id)_alternateContentsDictionary;
- (void)start;
- (void)dumpStateTo:(id)a0;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (id)newFileProviderProxyWithTimeout:(double)a0 pid:(int)a1;
- (id)existingFileProviderProxyWithTimeout:(double)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)_invalidateExtensionIfPossible;
- (void)__invalidate;
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (void)invalidate;
- (void)cancelAsync;
- (void)_networkingGracePeriodOver;
- (void)terminateWithReason:(id)a0;
- (void)dealloc;
- (id)newFileProviderProxyWithTimeoutValue:(double)a0 pid:(int)a1 createIfNeeded:(BOOL)a2;
- (void).cxx_destruct;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (id)initWithDomain:(id)a0 extension:(id)a1 queue:(id)a2;
- (BOOL)_setUpConnectionWithError:(id *)a0;
- (id)_connectionWithError:(id *)a0;
- (BOOL)terminateExtensionWithReason:(id)a0 error:(id *)a1;
- (BOOL)_evaluateExtensionForegroundness;
- (int)test_pid;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)a0;
- (void)_unregisterLifetimeExtensionForObject:(id)a0;

@end
