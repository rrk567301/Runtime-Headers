@class NSString, OTClique, CDPContext;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {
    OTClique *_clique;
}

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)syncingStatusForAltDSID:(id)a0;

- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (id)initWithContext:(id)a0;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (BOOL)requestToJoinCircle:(id *)a0;
- (long long)cliqueStatus:(id *)a0;
- (id)contextType;
- (void)reportFailure:(id)a0;
- (BOOL)tryRegisteringCredentials;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (id)_initializeRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (unsigned long long)cdpStatusFromOT:(long long)a0;
- (int)nonCachedSOSCircleStatus:(id *)a0;
- (BOOL)platformSupportsSOS;
- (id)peerDeviceNamesByPeerID;
- (BOOL)synchronizeCircleViews;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (int)sosCircleStatus:(id *)a0;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (BOOL)hasNonViewAwarePeers;
- (long long)_authenticatedCliqueStatus:(id *)a0;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (BOOL)isRecoveryKeySet:(id)a0 error:(id *)a1;
- (id)pairingChannelAcceptor;
- (int)cachedSOSCircleStatus:(id *)a0;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (id)requestToResetProtectedData:(id *)a0;
- (void).cxx_destruct;
- (BOOL)registerCredentialsIfMissing;
- (BOOL)registerCredentials;
- (int)_sos_authenticatedCircleStatus:(id *)a0;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (int)_sos_circleStatus:(id *)a0;
- (id)_pairingChannelContext;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (BOOL)waitForInitialSync:(id *)a0;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (id)pairingChannelInitiator;
- (BOOL)canAuthenticate;
- (void)waitForUpdate;
- (void)_recoverOctagonUsingRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 clique:(id)a1;
- (unsigned long long)combinedCircleStatus:(id *)a0;
- (id)peerId;
- (void)reportSuccess;

@end
