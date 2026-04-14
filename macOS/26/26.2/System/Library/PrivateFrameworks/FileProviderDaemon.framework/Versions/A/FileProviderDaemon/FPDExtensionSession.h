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

- (void)invalidate;
- (BOOL)terminateExtensionWithReason:(id)a0 error:(id *)a1;
- (BOOL)_setUpConnectionWithError:(id *)a0;
- (void)__invalidate;
- (BOOL)_evaluateExtensionForegroundness;
- (id)_connectionWithError:(id *)a0;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (void)dumpStateTo:(id)a0;
- (int)test_pid;
- (id)initWithDomain:(id)a0 extension:(id)a1 queue:(id)a2;
- (void)_networkingGracePeriodOver;
- (id)newFileProviderProxyWithTimeout:(double)a0 pid:(int)a1;
- (void)terminateWithReason:(id)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (void)_unregisterLifetimeExtensionForObject:(id)a0;
- (id)newFileProviderProxyWithTimeoutValue:(double)a0 pid:(int)a1 createIfNeeded:(BOOL)a2;
- (void).cxx_destruct;
- (void)start;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (id)_alternateContentsDictionary;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)a0;
- (void)_invalidate;
- (id)existingFileProviderProxyWithTimeout:(double)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)cancelAsync;
- (void)_invalidateExtensionIfPossible;
- (void)dealloc;

@end
