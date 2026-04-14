@class NSArray, NSString, NSMutableDictionary, NSSet;

@interface IMDAccountController : NSObject <IDSAccountDelegate> {
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    NSSet *_operationalAccountsCache;
    BOOL _isFirstLoad;
}

@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (readonly, nonatomic) NSArray *connectingAccounts;
@property (readonly, nonatomic) NSArray *activeSessions;
@property (nonatomic) BOOL networkDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedAccountController;

- (void)addAccount:(id)a0;
- (void)load;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)activateAccounts:(id)a0;
- (void)removeAccount:(id)a0;
- (void)save;
- (id)_operationalAccounts;
- (void)deactivateAccount:(id)a0;
- (id)accountForHandle:(id)a0;
- (void)dealloc;
- (void)_daemonWillShutdown:(id)a0;
- (BOOL)receiverIsCandidateForHawking:(id)a0;
- (void)activateAccount:(id)a0;
- (id)connectingAccountsForService:(id)a0;
- (BOOL)_isOperationalForAccount:(id)a0;
- (BOOL)activeAccountsAreEligibleForHawking;
- (id)anySessionForServiceName:(id)a0;
- (BOOL)hasActivePhoneAccount;
- (BOOL)isAccountActive:(id)a0;
- (BOOL)receiverIsCandidateForJunk:(id)a0 forAccount:(id)a1;
- (void)deferredSave;
- (id)sessionForAccount:(id)a0;
- (id)init;
- (id)activeAccountsWithServiceCapability:(id)a0;
- (id)_nicknameController;
- (void)_rebuildOperationalAccountsCache;
- (BOOL)_isAccountActive:(id)a0 forService:(id)a1;
- (id)accountsForService:(id)a0;
- (id)connectedAccountsForService:(id)a0;
- (void)_checkPowerAssertion;
- (id)sessionForReplicationSourceServiceName:(id)a0 replicatingAccount:(id)a1;
- (id)accountForAccountID:(id)a0;
- (BOOL)accountAssociatedWithHandle:(id)a0;
- (id)activeAccountsForService:(id)a0;
- (void)deactivateAccounts:(id)a0 force:(BOOL)a1;
- (void)deactivateAccounts:(id)a0;
- (void)deactivateAccount:(id)a0 force:(BOOL)a1;
- (id)accountsForLoginID:(id)a0 onService:(id)a1;
- (id)accountForIDSAccountUniqueID:(id)a0;
- (void)_resetAccountReplicationSessions;
- (void).cxx_destruct;
- (id)activeAliases;

@end
