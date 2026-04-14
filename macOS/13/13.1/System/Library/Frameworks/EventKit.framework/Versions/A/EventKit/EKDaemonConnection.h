@class CADDatabaseInitializationOptions, NSString, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, EKDaemonConnectionDelegate, CADInterface;

@interface EKDaemonConnection : NSObject <CADClientInterface, CADXPCProxyHelperDelegate> {
    NSObject<OS_dispatch_queue> *_connectionLock;
    id<CADInterface> _remoteOperationProxy;
    id<CADInterface> _syncRemoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    BOOL _registeredForStartNote;
    BOOL _wasAbortedDueToExcessiveConnctions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _databaseRestoreGenerationLock;
    int _databaseRestoreGeneration;
    BOOL _databaseRestoreGenerationHasEverChangedSignificantly;
}

@property (class, readonly, nonatomic) unsigned long long maxNumberOfOpenConnections;

@property (nonatomic) BOOL hasEverConnected;
@property (readonly, retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, retain, nonatomic) id<CADInterface> CADOperationProxy;
@property (readonly, retain, nonatomic) id<CADInterface> CADOperationProxySync;
@property (weak) id<EKDaemonConnectionDelegate> delegate;
@property (retain, nonatomic) CADDatabaseInitializationOptions *initializationOptions;
@property (readonly, nonatomic) int databaseRestoreGeneration;
@property (readonly, nonatomic) BOOL shouldValidateObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_tryRegisterNewConnection;
+ (void)_unregisterConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (BOOL)_connectToServer;
- (void)_daemonRestarted;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)a0 forSearchToken:(unsigned int)a1 finished:(BOOL)a2;
- (void)CADClientReceiveDiagnosticsCollectionResults:(id)a0 forToken:(unsigned int)a1 finished:(BOOL)a2;
- (void)CADClientReceiveDatabaseIntegrityErrors:(id)a0;
- (void)setDatabaseRestoreGeneration:(int)a0;
- (void)_createConnectionAndOperationProxyIfNeeded;
- (void)databaseRestoreGenerationChangedByThisClient:(int)a0;
- (unsigned int)addCancellableRemoteOperation:(id)a0;
- (void)removeCancellableRemoteOperation:(unsigned int)a0;
- (void)cancelRemoteOperation:(unsigned int)a0;
- (void)_finishAllRepliesOnServerDeath;
- (id)operationForToken:(unsigned int)a0 respondingToSelector:(SEL)a1 finished:(BOOL)a2;

@end
