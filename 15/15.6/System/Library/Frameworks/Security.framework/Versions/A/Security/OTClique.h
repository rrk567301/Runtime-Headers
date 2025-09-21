@class NSString, OTConfigurationContext;

@interface OTClique : NSObject

@property (copy, nonatomic) NSString *cliqueMemberIdentifier;
@property (readonly, nonatomic) OTConfigurationContext *ctx;

+ (void)createInheritanceKey:(id)a0 uuid:(id)a1 claimTokenData:(id)a2 wrappingKeyData:(id)a3 reply:(id /* block */)a4;
+ (void)checkCustodianRecoveryKey:(id)a0 custodianRecoveryKeyUUID:(id)a1 reply:(id /* block */)a2;
+ (void)checkInheritanceKey:(id)a0 inheritanceKeyUUID:(id)a1 reply:(id /* block */)a2;
+ (char)clearCliqueFromAccount:(id)a0 error:(id *)a1;
+ (void)createCustodianRecoveryKey:(id)a0 uuid:(id)a1 reply:(id /* block */)a2;
+ (void)createInheritanceKey:(id)a0 uuid:(id)a1 reply:(id /* block */)a2;
+ (id)fetchEscrowRecordsInternal:(id)a0 error:(id *)a1;
+ (id)findOptimalBottleIDsWithContextData:(id)a0 error:(id *)a1;
+ (void)generateInheritanceKey:(id)a0 uuid:(id)a1 reply:(id /* block */)a2;
+ (long long)getCDPStatus:(id)a0 error:(id *)a1;
+ (char)isCloudServicesAvailable;
+ (id)newFriendsWithContextData:(id)a0 error:(id *)a1;
+ (id)newFriendsWithContextData:(id)a0 resetReason:(long long)a1 error:(id *)a2;
+ (char)performCKServerUnreadableDataRemoval:(id)a0 error:(id *)a1;
+ (id)performEscrowRecoveryWithContextData:(id)a0 escrowArguments:(id)a1 error:(id *)a2;
+ (char)platformSupportsSOS;
+ (void)preflightRecoverOctagonUsingCustodianRecoveryKey:(id)a0 custodianRecoveryKey:(id)a1 reply:(id /* block */)a2;
+ (void)preflightRecoverOctagonUsingInheritanceKey:(id)a0 inheritanceKey:(id)a1 reply:(id /* block */)a2;
+ (void)recoverOctagonUsingCustodianRecoveryKey:(id)a0 custodianRecoveryKey:(id)a1 reply:(id /* block */)a2;
+ (void)recoverOctagonUsingInheritanceKey:(id)a0 inheritanceKey:(id)a1 reply:(id /* block */)a2;
+ (id)recoverWithContextData:(id)a0 bottleID:(id)a1 escrowedEntropy:(id)a2 error:(id *)a3;
+ (void)recreateInheritanceKey:(id)a0 uuid:(id)a1 oldIK:(id)a2 reply:(id /* block */)a3;
+ (void)removeCustodianRecoveryKey:(id)a0 custodianRecoveryKeyUUID:(id)a1 reply:(id /* block */)a2;
+ (void)removeInheritanceKey:(id)a0 inheritanceKeyUUID:(id)a1 reply:(id /* block */)a2;
+ (id)resetProtectedData:(id)a0 error:(id *)a1;
+ (id)resetProtectedData:(id)a0 idmsTargetContext:(id)a1 idmsCuttlefishPassword:(id)a2 notifyIdMS:(BOOL)a3 error:(id *)a4;
+ (char)setCDPEnabled:(id)a0 error:(id *)a1;
+ (void)setNewRecoveryKeyWithData:(id)a0 recoveryKey:(id)a1 reply:(id /* block */)a2;
+ (void)storeInheritanceKey:(id)a0 ik:(id)a1 reply:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (id)setupPairingChannelAsInitiator:(id)a0;
- (long long)_fetchCliqueStatus:(id)a0 error:(id *)a1;
- (char)accountUserKeyAvailable;
- (long long)cachedCliqueStatus:(char)a0 error:(id *)a1;
- (id)cliqueMemberIdentifier:(id *)a0;
- (id)copyPeerPeerInfo:(id *)a0;
- (id)copyViewUnawarePeerInfo:(id *)a0;
- (char)establish:(id *)a0;
- (char)establish:(id)a0 error:(id *)a1;
- (long long)fetchCliqueStatus:(id *)a0;
- (long long)fetchCliqueStatus:(id)a0 error:(id *)a1;
- (void)fetchEscrowContents:(id /* block */)a0;
- (char)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (void)fetchUserControllableViewsSyncingEnabledAsync:(id /* block */)a0;
- (id)initWithContextData:(id)a0;
- (char)joinAfterRestore:(id *)a0;
- (char)leaveClique:(id *)a0;
- (id)makeOTControl:(id *)a0;
- (id)peerDeviceNamesByPeerID:(id *)a0;
- (char)peersHaveViewsEnabled:(id)a0 error:(id *)a1;
- (void)performedCDPStateMachineRun:(id)a0 success:(char)a1 error:(id)a2 reply:(id /* block */)a3;
- (void)performedFailureCDPStateMachineRun:(id)a0 error:(id)a1 reply:(id /* block */)a2;
- (void)performedSuccessfulCDPStateMachineRun:(id)a0 reply:(id /* block */)a1;
- (char)removeFriendsInClique:(id)a0 error:(id *)a1;
- (char)requestToJoinCircle:(id *)a0;
- (char)resetAndEstablish:(long long)a0 idmsTargetContext:(id)a1 idmsCuttlefishPassword:(id)a2 notifyIdMS:(BOOL)a3 accountSettings:(id)a4 isGuitarfish:(char)a5 error:(id *)a6;
- (char)setOctagonUserControllableViewsSyncEnabled:(char)a0 error:(id *)a1;
- (char)setUserControllableViewsSyncStatus:(char)a0 error:(id *)a1;
- (char)setUserCredentialsAndDSID:(id)a0 password:(id)a1 error:(id *)a2;
- (char)setUserCredentialsWithLabel:(id)a0 password:(id)a1 dsid:(id)a2 error:(id *)a3;
- (id)setupPairingChannelAsAcceptor:(id)a0;
- (id)setupPairingChannelAsAcceptor:(id)a0 error:(id *)a1;
- (id)setupPairingChannelAsInitator:(id)a0 error:(id *)a1;
- (char)tryUserCredentialsAndDSID:(id)a0 password:(id)a1 error:(id *)a2;
- (char)tryUserCredentialsWithLabel:(id)a0 password:(id)a1 dsid:(id)a2 error:(id *)a3;
- (char)waitForInitialSync:(id *)a0;
- (char)waitForOctagonUpgrade:(id *)a0;

@end
