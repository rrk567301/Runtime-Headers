@class NSXPCListenerEndpoint, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _monitoring;
    unsigned long long _monitorOptions;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ identityCreatedHandler;
@property (copy, nonatomic) id /* block */ identityDeletedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ pairedPeerAddedHandler;
@property (copy, nonatomic) id /* block */ pairedPeerRemovedHandler;
@property (copy, nonatomic) id /* block */ pairedPeerChangedHandler;
@property (nonatomic) BOOL targetUserSession;
@property (nonatomic) unsigned int targetUserID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;

+ (id)copySystemPairingIdentifierAndReturnError:(id *)a0;
+ (id)copySystemPairingIdentifierWithFlags:(unsigned int)a0 error:(id *)a1;

- (int)_ensureXPCStarted;
- (void)_interrupted;
- (void)dealloc;
- (void)getPairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)pairedPeerRemoved:(id)a0 options:(unsigned long long)a1;
- (void)_invalidated;
- (void)_invalidate;
- (void)_findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)init;
- (void)getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)a0;
- (void)showWithCompletion:(id /* block */)a0;
- (void)_removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_startMonitoringWithOptions:(unsigned long long)a0;
- (void)_getPairingIdentityWithOptions:(unsigned long long)a0 tryCount:(unsigned int)a1 completion:(id /* block */)a2;
- (void)removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updatePairedPeersWithGroupID:(id)a0 groupInfo:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_showWithCompletion:(id /* block */)a0;
- (void)startMonitoringWithOptions:(unsigned long long)a0;
- (void)pairedPeerChanged:(id)a0 options:(unsigned long long)a1;
- (void)_deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getPairedPeersWithGroupID:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pairedPeerAdded:(id)a0 options:(unsigned long long)a1;
- (void)pairingIdentityCreated:(id)a0 options:(unsigned long long)a1;

@end
