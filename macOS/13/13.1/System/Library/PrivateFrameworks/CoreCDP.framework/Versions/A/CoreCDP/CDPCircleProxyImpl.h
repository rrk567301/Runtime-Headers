@class NSString, OTClique, CDPContext;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {
    OTClique *_clique;
}

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (BOOL)waitForInitialSync:(id *)a0;
- (BOOL)requestToJoinCircle:(id *)a0;
- (id)contextType;
- (unsigned long long)combinedCircleStatus:(id *)a0;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (int)nonCachedSOSCircleStatus:(id *)a0;
- (int)cachedSOSCircleStatus:(id *)a0;
- (id)peerId;
- (id)peerDeviceNamesByPeerID;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (BOOL)synchronizeCircleViews;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (id)requestToResetProtectedData:(id *)a0;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (BOOL)hasNonViewAwarePeers;
- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (BOOL)canAuthenticate;
- (BOOL)registerCredentials;
- (BOOL)registerCredentialsIfMissing;
- (BOOL)tryRegisteringCredentials;
- (id)pairingChannelInitiator;
- (id)pairingChannelAcceptor;
- (void)waitForUpdate;
- (void)reportSuccess;
- (void)reportFailure:(id)a0;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 clique:(id)a1;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (unsigned long long)cdpStatusFromOT:(long long)a0;
- (long long)_cliqueStatus:(id *)a0;
- (long long)_authenticatedCliqueStatus:(id *)a0;
- (int)sos_circleStatus:(id *)a0;
- (int)_sos_authenticatedCircleStatus:(id *)a0;
- (int)_sos_circleStatus:(id *)a0;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (id)_pairingChannelContext;

@end
