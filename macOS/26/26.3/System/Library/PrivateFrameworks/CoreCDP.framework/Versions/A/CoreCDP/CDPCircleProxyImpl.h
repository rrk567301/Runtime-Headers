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

- (id)initWithContext:(id)a0;
- (id)_pairingChannelContext;
- (id)contextType;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (void)reportFailure:(id)a0;
- (BOOL)canAuthenticate;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (int)cachedSOSCircleStatus:(id *)a0;
- (id)pairingChannelInitiator;
- (BOOL)requestToJoinCircle:(id *)a0;
- (BOOL)registerCredentials;
- (id)peerId;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (int)_sos_circleStatus:(id *)a0;
- (void)waitForUpdate;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (BOOL)hasNonViewAwarePeers;
- (id)initWithContext:(id)a0 clique:(id)a1;
- (int)sosCircleStatus:(id *)a0;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (void)reportSuccess;
- (id)pairingChannelAcceptor;
- (BOOL)synchronizeCircleViews;
- (long long)cliqueStatus:(id *)a0;
- (id)peerDeviceNamesByPeerID;
- (BOOL)isRecoveryKeySet:(id)a0 error:(id *)a1;
- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (void).cxx_destruct;
- (unsigned long long)cdpStatusFromOT:(long long)a0;
- (BOOL)waitForInitialSync:(id *)a0;
- (id)requestToResetProtectedData:(id *)a0;
- (int)nonCachedSOSCircleStatus:(id *)a0;
- (id)_initializeRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)platformSupportsSOS;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (long long)_authenticatedCliqueStatus:(id *)a0;
- (void)_recoverOctagonUsingRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (BOOL)tryRegisteringCredentials;
- (BOOL)registerCredentialsIfMissing;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (int)_sos_authenticatedCircleStatus:(id *)a0;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (unsigned long long)combinedCircleStatus:(id *)a0;

@end
