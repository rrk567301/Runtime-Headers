@class NSString, CDPContext;

@interface CDPSOSCircleProxyImpl : NSObject <CDPDCircleProxy>

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)syncingStatusForAltDSID:(id)a0;

- (unsigned long long)peerCount;
- (unsigned long long)combinedCircleStatus:(id *)a0;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (BOOL)registerCredentialsIfMissing;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (BOOL)tryRegisteringCredentials;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (long long)cliqueStatus:(id *)a0;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (id)initWithContext:(id)a0;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (void)reportFailure:(id)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (BOOL)requestToJoinCircle:(id *)a0;
- (int)nonCachedSOSCircleStatus:(id *)a0;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (id)pairingChannelInitiator;
- (BOOL)canAuthenticate;
- (void)reportSuccess;
- (void).cxx_destruct;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (id)peerDeviceNamesByPeerID;
- (id)pairingChannelAcceptor;
- (BOOL)synchronizeCircleViews;
- (id)peerId;
- (void)waitForUpdate;
- (id)requestToResetProtectedData:(id *)a0;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)registerCredentials;
- (BOOL)hasNonViewAwarePeers;
- (int)cachedSOSCircleStatus:(id *)a0;
- (BOOL)viewMemberForAutofillPasswords:(id *)a0;
- (int)_authenticatedCircleStatus:(id *)a0;
- (int)_circleStatus:(id *)a0;
- (BOOL)_performSOSCBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)_viewMemberForView:(struct __CFString { } *)a0 error:(id *)a1;
- (id)generateVerifierWithRcoveryKey:(id)a0 error:(id *)a1;
- (BOOL)requestToResetCircle:(id *)a0;
- (BOOL)requestToResetCloudKitDataForReason:(id)a0 error:(id *)a1;
- (BOOL)resetToOffering:(id *)a0;
- (BOOL)setViewsWithEnableSet:(id)a0 disableSet:(id)a1;
- (BOOL)viewMemberForAllUserFacingViews:(id *)a0;
- (BOOL)viewMemberForCreditCards:(id *)a0;
- (BOOL)viewMemberForOtherSyncable:(id *)a0;
- (BOOL)viewMemberForPCSMaster:(id *)a0;
- (BOOL)viewMemberForWiFi:(id *)a0;

@end
