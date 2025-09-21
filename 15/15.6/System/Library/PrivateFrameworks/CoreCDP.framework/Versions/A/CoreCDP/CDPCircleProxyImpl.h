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

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (char)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (char)platformSupportsSOS;
- (char)requestToJoinCircle:(id *)a0;
- (char)setUserControllableViewsSyncStatus:(char)a0 error:(id *)a1;
- (char)waitForInitialSync:(id *)a0;
- (id)contextType;
- (char)isRecoveryKeySet:(id)a0 error:(id *)a1;
- (int)_sos_authenticatedCircleStatus:(id *)a0;
- (char)canAuthenticate;
- (long long)_authenticatedCliqueStatus:(id *)a0;
- (id)_initializeRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (id)_pairingChannelContext;
- (void)_recoverOctagonUsingRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (char)_registerCredentialsOnlyIfNeeded:(char)a0;
- (int)_sos_circleStatus:(id *)a0;
- (char)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (int)cachedSOSCircleStatus:(id *)a0;
- (unsigned long long)cdpStatusFromOT:(long long)a0;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (long long)cliqueStatus:(id *)a0;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (unsigned long long)combinedCircleStatus:(id *)a0;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (char)hasNonViewAwarePeers;
- (id)initWithContext:(id)a0 clique:(id)a1;
- (char)isLastBackupMakingPeer:(id *)a0;
- (int)nonCachedSOSCircleStatus:(id *)a0;
- (id)pairingChannelAcceptor;
- (id)pairingChannelInitiator;
- (id)peerDeviceNamesByPeerID;
- (id)peerId;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (char)registerCredentials;
- (char)registerCredentialsIfMissing;
- (char)removeNonViewAwarePeers:(id *)a0;
- (char)removeThisDeviceFromCircle:(id *)a0;
- (void)reportFailure:(id)a0;
- (void)reportSuccess;
- (char)requestToJoinCircleAfterRestore:(id *)a0;
- (id)requestToResetProtectedData:(id *)a0;
- (int)sosCircleStatus:(id *)a0;
- (char)synchronizeCircleViews;
- (char)tryRegisteringCredentials;
- (void)waitForUpdate;

@end
