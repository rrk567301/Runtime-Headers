@class NSString, CDPContext;

@interface CDPSOSCircleProxyImpl : NSObject <CDPDCircleProxy>

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)syncingStatusForAltDSID:(id)a0;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned long long)peerCount;
- (char)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (char)requestToJoinCircle:(id *)a0;
- (char)setUserControllableViewsSyncStatus:(char)a0 error:(id *)a1;
- (char)viewMemberForAutofillPasswords:(id *)a0;
- (char)canAuthenticate;
- (int)_authenticatedCircleStatus:(id *)a0;
- (int)_circleStatus:(id *)a0;
- (char)_performSOSCBlock:(id /* block */)a0 error:(id *)a1;
- (char)_registerCredentialsOnlyIfNeeded:(char)a0;
- (char)_viewMemberForView:(struct __CFString { } *)a0 error:(id *)a1;
- (char)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (int)cachedSOSCircleStatus:(id *)a0;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (long long)cliqueStatus:(id *)a0;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (unsigned long long)combinedCircleStatus:(id *)a0;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (id)generateVerifierWithRcoveryKey:(id)a0 error:(id *)a1;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (char)hasNonViewAwarePeers;
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
- (char)requestToResetCircle:(id *)a0;
- (char)requestToResetCloudKitDataForReason:(id)a0 error:(id *)a1;
- (id)requestToResetProtectedData:(id *)a0;
- (char)resetToOffering:(id *)a0;
- (char)setViewsWithEnableSet:(id)a0 disableSet:(id)a1;
- (char)synchronizeCircleViews;
- (char)tryRegisteringCredentials;
- (char)viewMemberForPCSMaster:(id *)a0;
- (void)waitForUpdate;

@end
